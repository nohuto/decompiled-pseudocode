/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00B3C50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C00018D0 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000B0D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C0018818 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0068190 (--0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00682E4 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00B3E28 (-UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(DXGPROCESS **a1, const struct _DXGKWIN32KENG_INTERFACE *const a2, __int64 a3)
{
  char v3; // bl
  DXGPROCESS *v6; // rbx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  union _LARGE_INTEGER *v10; // rcx
  union _LARGE_INTEGER **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DXGPROCESS *v16; // r12
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v18; // rcx
  struct DXGGLOBAL *v19; // rax
  DXGPROCESS *v20; // rbx
  __int64 v21; // rcx
  int v22; // esi
  DXGPROCESS **v23; // rax
  DXGPROCESS *v24; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  DXGAUTOMUTEX *v28; // rcx
  char v29[8]; // [rsp+20h] [rbp-20h] BYREF
  char v30; // [rsp+28h] [rbp-18h]
  _BYTE v31[16]; // [rsp+30h] [rbp-10h] BYREF

  v3 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2000);
  if ( v3 != 1 )
  {
    v6 = *a1;
    if ( !*a1 )
      goto LABEL_18;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, *((struct DXGFASTMUTEX *const *)v6 + 11));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    DXGPROCESS::Destroy((union _LARGE_INTEGER **)v6);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v29);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    Global = DXGGLOBAL::GetGlobal(v7);
    DXGKSQM_GLOBAL::UpdateProcessSqm(*((DXGKSQM_GLOBAL **)Global + 87), v6);
    DXGGLOBAL::GetGlobal(v9);
    v10 = *(union _LARGE_INTEGER **)v6;
    v11 = (union _LARGE_INTEGER **)*((_QWORD *)v6 + 1);
    if ( *(DXGPROCESS **)(*(_QWORD *)v6 + 8LL) != v6 || *v11 != (union _LARGE_INTEGER *)v6 )
      __fastfail(3u);
    *v11 = v10;
    v10[1].QuadPart = (LONGLONG)v11;
    *a1 = 0LL;
    DXGPROCESS::ReleaseReference(v6);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    if ( v30 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    if ( !v31[8] )
      goto LABEL_18;
    v28 = (DXGAUTOMUTEX *)v31;
LABEL_31:
    DXGAUTOMUTEX::Release(v28);
LABEL_18:
    v22 = 0;
    goto LABEL_19;
  }
  if ( *(_WORD *)a2 != 392 || *((_WORD *)a2 + 1) != 3 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
    v27[3] = *((unsigned __int16 *)a2 + 1);
    v27[4] = *(unsigned __int16 *)a2;
    v27[5] = 3LL;
    v27[6] = 392LL;
    WdLogEvent5_WdAssertion(v27);
    v22 = -1073741811;
    goto LABEL_19;
  }
  v16 = (DXGPROCESS *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x158uLL);
  if ( v16 )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
    v19 = DXGGLOBAL::GetGlobal(v18);
    v20 = DXGPROCESS::DXGPROCESS(v16, v19, CurrentProcess, a2);
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v26 + 24) = 50LL;
    WdLogEvent5_WdLowResource(v26);
    v22 = -1073741801;
    goto LABEL_19;
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v29);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v22 = DXGPROCESS::Initialize(v20);
  if ( v22 >= 0 )
  {
    *a1 = v20;
    v23 = (DXGPROCESS **)((char *)DXGGLOBAL::GetGlobal(v21) + 288);
    v24 = *v23;
    *(_QWORD *)v20 = *v23;
    *((_QWORD *)v20 + 1) = v23;
    if ( *((DXGPROCESS ***)v24 + 1) != v23 )
      __fastfail(3u);
    *((_QWORD *)v24 + 1) = v20;
    *v23 = v20;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    if ( !v30 )
      goto LABEL_18;
    v28 = (DXGAUTOMUTEX *)v29;
    goto LABEL_31;
  }
  DXGPROCESS::`scalar deleting destructor'(v20);
  if ( v30 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
LABEL_19:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, a3, 2000);
  return (unsigned int)v22;
}
