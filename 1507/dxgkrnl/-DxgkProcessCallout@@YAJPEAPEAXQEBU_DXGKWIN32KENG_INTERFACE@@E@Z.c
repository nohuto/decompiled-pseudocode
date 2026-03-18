/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00A8050
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0002D00 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00094EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C00171D4 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C008534C (--0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00854A0 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00A822C (-UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  DXGPROCESS *v7; // rbx
  int v8; // esi
  __int64 v10; // rcx
  DXGPROCESS *PoolWithQuotaTag; // r15
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGGLOBAL *v17; // rax
  DXGPROCESS *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  DXGPROCESS **v26; // rax
  DXGPROCESS *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  DXGFASTMUTEX *v40; // rcx
  DXGFASTMUTEX **v41; // rax
  __int64 v42; // rax
  DXGAUTOMUTEX *v43; // rcx
  _QWORD *v44; // rax
  char v45[8]; // [rsp+20h] [rbp-20h] BYREF
  char v46; // [rsp+28h] [rbp-18h]
  _BYTE v47[16]; // [rsp+30h] [rbp-10h] BYREF

  v4 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2000);
  if ( v4 != 1 )
  {
    v7 = *a1;
    if ( !*a1 )
      goto LABEL_4;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, *((struct DXGFASTMUTEX *const *)v7 + 11));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    DXGPROCESS::Destroy((DXGFASTMUTEX **)v7, v28, v29, v30);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v45);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
    Global = DXGGLOBAL::GetGlobal(v32, v31, v33, v34);
    DXGKSQM_GLOBAL::UpdateProcessSqm(*((DXGKSQM_GLOBAL **)Global + 69), v7);
    DXGGLOBAL::GetGlobal(v37, v36, v38, v39);
    v40 = *(DXGFASTMUTEX **)v7;
    v41 = (DXGFASTMUTEX **)*((_QWORD *)v7 + 1);
    if ( *(DXGPROCESS **)(*(_QWORD *)v7 + 8LL) != v7 || *v41 != v7 )
      __fastfail(3u);
    *v41 = v40;
    *((_QWORD *)v40 + 1) = v41;
    *a1 = 0LL;
    DXGPROCESS::ReleaseReference(v7);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
    if ( v46 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
    if ( !v47[8] )
      goto LABEL_4;
    v43 = (DXGAUTOMUTEX *)v47;
LABEL_31:
    DXGAUTOMUTEX::Release(v43);
LABEL_4:
    v8 = 0;
    goto LABEL_5;
  }
  if ( *(_WORD *)a2 != 392 || *((_WORD *)a2 + 1) != 2 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v44[3] = *((unsigned __int16 *)a2 + 1);
    v44[4] = *(unsigned __int16 *)a2;
    v44[5] = 2LL;
    v44[6] = 392LL;
    WdLogEvent5_WdAssertion(v44);
    v8 = -1073741811;
    goto LABEL_5;
  }
  PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x158uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10);
    v17 = DXGGLOBAL::GetGlobal(v14, v13, v15, v16);
    v18 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v17, CurrentProcess, a2);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
  {
    v42 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v42 + 24) = 50LL;
    WdLogEvent5_WdLowResource(v42);
    v8 = -1073741801;
    goto LABEL_5;
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v45);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
  v8 = DXGPROCESS::Initialize(v18, v19, v20, v21);
  if ( v8 >= 0 )
  {
    *a1 = v18;
    v26 = (DXGPROCESS **)((char *)DXGGLOBAL::GetGlobal(v23, v22, v24, v25) + 240);
    v27 = *v26;
    *(_QWORD *)v18 = *v26;
    *((_QWORD *)v18 + 1) = v26;
    if ( *((DXGPROCESS ***)v27 + 1) != v26 )
      __fastfail(3u);
    *((_QWORD *)v27 + 1) = v18;
    *v26 = v18;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
    if ( !v46 )
      goto LABEL_4;
    v43 = (DXGAUTOMUTEX *)v45;
    goto LABEL_31;
  }
  DXGPROCESS::`scalar deleting destructor'(v18);
  if ( v46 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
LABEL_5:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerExit, a3, 2000);
  return (unsigned int)v8;
}
