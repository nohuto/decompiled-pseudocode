/*
 * XREFs of ?ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C014DB34
 * Callers:
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00AF990 (-DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C0018818 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 *     ??0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0068190 (--0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00682E4 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::ForceCreation(const struct _DXGKWIN32KENG_INTERFACE *a1)
{
  __int64 v2; // rcx
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessWin32Process; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGPROCESS *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGGLOBAL *Global; // rax
  DXGPROCESS *v16; // rbx
  __int64 v17; // rax
  int v18; // edi
  _QWORD *v20; // rax

  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1);
  if ( !CurrentProcess )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 1352LL;
    WdLogEvent5_WdAssertion(v4);
  }
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v8);
    v20[3] = 275LL;
    v20[4] = 5LL;
    v20[5] = CurrentProcess;
    v20[6] = 0LL;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
    return 3221225495LL;
  }
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 1364LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v12 = (DXGPROCESS *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x158uLL);
  if ( v12 )
  {
    Global = DXGGLOBAL::GetGlobal(v11);
    v16 = DXGPROCESS::DXGPROCESS(v12, Global, CurrentProcess, a1);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdLowResource(v11, v10, v13, v14);
    *(_QWORD *)(v17 + 24) = 1373LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
  v18 = DXGPROCESS::Initialize(v16);
  if ( v18 >= 0 )
  {
    *(_QWORD *)(ProcessWin32Process + 248) = v16;
    return 0LL;
  }
  else
  {
    DXGPROCESS::`scalar deleting destructor'(v16);
    return (unsigned int)v18;
  }
}
