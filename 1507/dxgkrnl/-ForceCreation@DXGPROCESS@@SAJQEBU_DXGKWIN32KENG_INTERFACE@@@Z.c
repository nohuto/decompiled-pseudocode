/*
 * XREFs of ?ForceCreation@DXGPROCESS@@SAJQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0149D0C
 * Callers:
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C005BCA0 (-DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C00171D4 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C008534C (--0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00854A0 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPROCESS::ForceCreation(const struct _DXGKWIN32KENG_INTERFACE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGPROCESS *v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGGLOBAL *Global; // rax
  DXGPROCESS *v20; // rbx
  __int64 v21; // rax
  int v22; // edi
  _QWORD *v24; // rax

  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1);
  if ( !CurrentProcess )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2, v5, v6);
    *(_QWORD *)(v7 + 24) = 1269LL;
    WdLogEvent5_WdAssertion(v7);
  }
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v11);
    v24[3] = 275LL;
    v24[4] = 5LL;
    v24[5] = CurrentProcess;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
    return 3221225495LL;
  }
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    *(_QWORD *)(v13 + 24) = 1281LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v16 = (DXGPROCESS *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x158uLL);
  if ( v16 )
  {
    Global = DXGGLOBAL::GetGlobal(v15, v14, v17, v18);
    v20 = DXGPROCESS::DXGPROCESS(v16, Global, CurrentProcess, a1);
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v21 + 24) = 1290LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
  v22 = DXGPROCESS::Initialize(v20, v14, v17, v18);
  if ( v22 >= 0 )
  {
    *(_QWORD *)(ProcessWin32Process + 248) = v20;
    return 0LL;
  }
  else
  {
    DXGPROCESS::`scalar deleting destructor'(v20);
    return (unsigned int)v22;
  }
}
