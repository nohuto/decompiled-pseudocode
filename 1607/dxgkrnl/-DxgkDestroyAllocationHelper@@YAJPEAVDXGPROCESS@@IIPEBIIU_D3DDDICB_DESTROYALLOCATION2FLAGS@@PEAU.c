/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0074C00
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C0074A60 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C0152EE0 (DxgkDestroyAllocation.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x1C007553C (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE--_ENSURE_POINTER_DEREFERENCE.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     _lambda_ff7a16898af2bbd6d44a19d2984ad8b1_::_lambda_invoker_cdecl_ @ 0x1C0076D10 (_lambda_ff7a16898af2bbd6d44a19d2984ad8b1_--_lambda_invoker_cdecl_.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01449E0 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_ @ 0x1C0146BF0 (_lambda_de3a9c4ca82130b89abd09a8dda67964_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  unsigned int v7; // r13d
  __int64 v9; // rsi
  struct DXGPROCESS *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned int **v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ebx
  unsigned int v18; // r12d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  struct DXGALLOCATION **v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  unsigned int v27; // edx
  __int64 v28; // r9
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ebx
  bool v35; // zf
  __int64 v36; // rsi
  void *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int8 v40; // bl
  __int64 v41; // r8
  volatile signed __int64 *v42; // rcx
  volatile signed __int64 *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  OUTPUTDUPL_MGR *v48; // rcx
  DXGGLOBAL *v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rax
  int *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // rax
  __int64 v63; // rax
  struct OUTPUTDUPL_MGR_INDIRECT **v64; // rsi
  struct OUTPUTDUPL_MGR_INDIRECT *i; // rbx
  int *v66; // rbx
  _QWORD *v67; // rax
  __int64 v68; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER *v70; // rcx
  DXGADAPTER *v71; // rcx
  unsigned int *v72; // rsi
  __int64 v73; // rbx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r14
  __int64 v80; // rax
  struct _KTHREAD **v82; // [rsp+50h] [rbp-B0h] BYREF
  char v83; // [rsp+58h] [rbp-A8h]
  unsigned int v84; // [rsp+60h] [rbp-A0h]
  unsigned int *v85; // [rsp+68h] [rbp-98h] BYREF
  __int64 v86; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION **v87; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v88; // [rsp+80h] [rbp-80h] BYREF
  struct DXGALLOCATION **v89; // [rsp+88h] [rbp-78h]
  unsigned int *v90; // [rsp+90h] [rbp-70h]
  struct DXGPROCESS *v91; // [rsp+98h] [rbp-68h]
  char v92[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-50h]
  DXGADAPTER *v94; // [rsp+B8h] [rbp-48h]
  char v95; // [rsp+C0h] [rbp-40h]
  char v96[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-30h]
  struct DXGADAPTER *v98; // [rsp+D8h] [rbp-28h]
  char v99; // [rsp+E0h] [rbp-20h]
  __int64 v100; // [rsp+E8h] [rbp-18h]
  char v101; // [rsp+F0h] [rbp-10h]
  struct DXGALLOCATION ***v102; // [rsp+100h] [rbp+0h] BYREF
  unsigned int **v103; // [rsp+108h] [rbp+8h] BYREF
  __int64 v104; // [rsp+118h] [rbp+18h] BYREF
  int v105; // [rsp+120h] [rbp+20h]
  _QWORD v106[3]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v107[256]; // [rsp+140h] [rbp+40h] BYREF
  char v108; // [rsp+240h] [rbp+140h] BYREF

  v7 = a5;
  v9 = a2;
  v10 = a1;
  v91 = a1;
  v84 = a3;
  v88 = a4;
  memset(v107, 0, sizeof(v107));
  v14 = 0LL;
  v90 = (unsigned int *)v107;
  v89 = (struct DXGALLOCATION **)&v108;
  v102 = &v87;
  v15 = &v85;
  v85 = 0LL;
  v87 = 0LL;
  v103 = &v85;
  if ( !a3 || !a5 )
  {
    v18 = a5;
    if ( a5 >= 0x41 )
    {
      v19 = 4LL * a5;
      if ( !is_mul_ok(a5, 4uLL) )
        v19 = -1LL;
      v85 = (unsigned int *)operator new(v19, 0x4B677844u, PagedPool);
      v20 = 8LL * a5;
      if ( !is_mul_ok(a5, 8uLL) )
        v20 = -1LL;
      v21 = (struct DXGALLOCATION **)operator new(v20, 0x4B677844u, PagedPool);
      v87 = v21;
      if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v15 = (unsigned int **)v85) != 0LL && v21 )
      {
        v89 = v21;
        v90 = v85;
      }
      else
      {
        v22 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v22 + 24) = 7988LL;
        WdLogEvent5_WdEvent(v22);
        v7 = 64;
      }
    }
    if ( v10 != (struct DXGPROCESS *)-184LL && *((struct _KTHREAD **)v10 + 24) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v23 + 24) = 1142LL;
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *((_DWORD *)v10 + 50);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockSharedEx((char *)v10 + 184, 0LL);
    }
    v27 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( v27 < *((_DWORD *)v10 + 56) )
    {
      v28 = *((_QWORD *)v10 + 26);
      v29 = *(_DWORD *)(v28 + 16LL * v27 + 8);
      if ( (((unsigned int)v9 >> 26) & 0x30) == (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0x30)
        && (v29 & 0x1000) == 0
        && (v29 & 0xF) != 0 )
      {
        if ( (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0xF) == 3 )
        {
          v14 = *(_QWORD *)(v28 + 16LL * v27);
          v86 = v14;
          if ( v14 )
            _InterlockedIncrement64((volatile signed __int64 *)(v14 + 64));
LABEL_30:
          ExReleasePushLockSharedEx((char *)v10 + 184, 0LL);
          KeLeaveCriticalRegion();
          if ( !v14 )
          {
            v31 = WdLogNewEntry5_WdError(v30);
            v17 = -1073741811;
            *(_QWORD *)(v31 + 24) = v9;
            *(_QWORD *)(v31 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v31);
LABEL_136:
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v86);
            goto LABEL_137;
          }
          v32 = *(_QWORD *)(v14 + 16);
          v104 = v14;
          v33 = *(_QWORD *)(v32 + 16);
          if ( *(int *)(v33 + 1792) >= 0x2000 || *(_BYTE *)(v33 + 2076) )
            v34 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
          else
            v34 = 0;
          v35 = *(_DWORD *)(v14 + 304) == 2;
          v36 = *(_QWORD *)(v14 + 16);
          v105 = v34;
          if ( v35 )
          {
            if ( KeReadStateEvent((PRKEVENT)(v36 + 80)) )
              goto LABEL_44;
            v37 = (void *)(v36 + 80);
          }
          else
          {
            if ( KeReadStateEvent((PRKEVENT)(v36 + 56)) )
              goto LABEL_44;
            v37 = (void *)(v36 + 56);
          }
          KeWaitForSingleObject(v37, Executive, 0, 0, 0LL);
LABEL_44:
          KeEnterCriticalRegion();
          if ( v34 )
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 88, 0LL) )
            {
              KeLeaveCriticalRegion();
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 96LL));
              v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 88));
LABEL_52:
              if ( v40 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 80), 0) )
          {
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 96LL));
            v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v41, 40);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 80), 1u);
            goto LABEL_52;
          }
          v42 = *(volatile signed __int64 **)(*(_QWORD *)(v14 + 16) + 16LL);
          v94 = (DXGADAPTER *)v42;
          v95 = 0;
          if ( v42 )
          {
            _InterlockedIncrement64(v42 + 3);
            v93 = -1LL;
          }
          v43 = *(volatile signed __int64 **)(v14 + 2856);
          if ( !v43 )
            v43 = *(volatile signed __int64 **)(*(_QWORD *)(v14 + 16) + 16LL);
          v98 = (struct DXGADAPTER *)v43;
          v99 = 0;
          if ( v43 )
          {
            _InterlockedIncrement64(v43 + 3);
            v97 = -1LL;
          }
          v100 = v14;
          v44 = *(_QWORD *)(v14 + 2856);
          if ( v44 == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) || (v101 = 1, !v44) )
            v101 = 0;
          if ( v95 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v38, v39);
            v45[5] = v92;
            v45[3] = 275LL;
            v45[4] = 4LL;
            v45[6] = 0LL;
            v45[7] = 0LL;
            WdLogEvent5_WdCriticalError(v45);
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v94 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v94 + 2) )
              KeWaitForSingleObject((char *)v94 + 48, Executive, 0, 0, 0LL);
            DXGADAPTER::AcquireCoreResourceShared(v94);
          }
          v95 = 1;
          if ( *(_DWORD *)(v100 + 376) == 1 )
          {
            if ( !v101 || (COREACCESS::AcquireShared((COREACCESS *)v96), *((_DWORD *)v98 + 44) == 1) )
            {
              v46 = *(_QWORD *)(v14 + 2856);
              if ( v46 )
              {
                v47 = *(_QWORD *)(v46 + 2128);
                v48 = *(OUTPUTDUPL_MGR **)(v47 + 104);
                if ( !v48
                  || (int)lambda_ff7a16898af2bbd6d44a19d2984ad8b1_::_lambda_invoker_cdecl_(v48, (struct DXGDEVICE *)v14) >= 0 )
                {
                  v49 = DXGGLOBAL::m_pGlobal;
                  v50 = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 268LL);
                  v106[1] = lambda_ff7a16898af2bbd6d44a19d2984ad8b1_::_lambda_invoker_cdecl_;
                  v106[0] = v50;
                  v106[2] = v14;
                  if ( !DXGGLOBAL::m_pGlobal )
                  {
                    v51 = WdLogNewEntry5_WdAssertion(v50);
                    *(_QWORD *)(v51 + 24) = 982LL;
                    WdLogEvent5_WdAssertion(v51);
                    v49 = DXGGLOBAL::m_pGlobal;
                  }
                  v83 = 0;
                  v82 = (struct _KTHREAD **)((char *)v49 + 944);
                  if ( v49 == (DXGGLOBAL *)-944LL )
                  {
                    v52 = WdLogNewEntry5_WdAssertion(v50);
                    *(_QWORD *)(v52 + 24) = 428LL;
                    WdLogEvent5_WdAssertion(v52);
                  }
                  CurrentThread = KeGetCurrentThread();
                  if ( v82[1] == CurrentThread )
                  {
                    v54 = WdLogNewEntry5_WdAssertion(CurrentThread);
                    *(_QWORD *)(v54 + 24) = 435LL;
                    WdLogEvent5_WdAssertion(v54);
                  }
                  if ( v83 )
                  {
                    v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v38, v39);
                    v55[5] = &v82;
                    v55[3] = 275LL;
                    v55[4] = 4LL;
                    v55[6] = 0LL;
                    v55[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v55);
                  }
                  v56 = (int *)v82;
                  KeEnterCriticalRegion();
                  if ( *((struct _KTHREAD **)v56 + 1) == KeGetCurrentThread() )
                  {
                    if ( v56[6] <= 0 )
                    {
                      v60 = WdLogNewEntry5_WdAssertion(v58);
                      *(_QWORD *)(v60 + 24) = 326LL;
                      WdLogEvent5_WdAssertion(v60);
                    }
                    ++v56[6];
                  }
                  else
                  {
                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v56 + 4, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v61 = v56[7];
                        if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          Template_q(v58, &EventBlockThread, v59, v61);
                      }
                      _InterlockedIncrement64((volatile signed __int64 *)v56);
                      ExAcquirePushLockExclusiveEx(v56 + 4, 0LL);
                    }
                    if ( *((_QWORD *)v56 + 1) )
                    {
                      v62 = WdLogNewEntry5_WdAssertion(v58);
                      *(_QWORD *)(v62 + 24) = 350LL;
                      WdLogEvent5_WdAssertion(v62);
                    }
                    if ( v56[6] )
                    {
                      v63 = WdLogNewEntry5_WdAssertion(v58);
                      *(_QWORD *)(v63 + 24) = 351LL;
                      WdLogEvent5_WdAssertion(v63);
                    }
                    *((_QWORD *)v56 + 1) = KeGetCurrentThread();
                    v56[6] = 1;
                  }
                  v64 = (struct OUTPUTDUPL_MGR_INDIRECT **)((char *)v49 + 984);
                  v83 = 1;
                  for ( i = *v64; i != (struct OUTPUTDUPL_MGR_INDIRECT *)v64 && i; i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
                  {
                    if ( lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_(i, v106) < 0 )
                    {
                      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v82);
                      goto LABEL_115;
                    }
                  }
                  if ( v83 )
                  {
                    v66 = (int *)v82;
                    v83 = 0;
                    if ( v82[1] != KeGetCurrentThread() )
                    {
                      v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v57, v59);
                      v67[3] = 275LL;
                      v67[4] = 4LL;
                      v67[5] = v66;
                      v67[6] = 0LL;
                      v67[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v67);
                    }
                    if ( v66[6] <= 0 )
                    {
                      v68 = WdLogNewEntry5_WdAssertion(v58);
                      *(_QWORD *)(v68 + 24) = 370LL;
                      WdLogEvent5_WdAssertion(v68);
                    }
                    v35 = v66[6]-- == 1;
                    if ( v35 )
                    {
                      *((_QWORD *)v66 + 1) = 0LL;
                      ExReleasePushLockExclusiveEx(v66 + 4, 0LL);
                    }
                    KeLeaveCriticalRegion();
                  }
                }
              }
LABEL_115:
              RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
              if ( RemoteOutputDuplMgr )
                OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, (struct DXGDEVICE *)v14);
            }
            else
            {
              COREACCESS::Release((COREACCESS *)v96);
              COREACCESS::Release((COREACCESS *)v92);
            }
          }
          else
          {
            COREACCESS::Release((COREACCESS *)v92);
          }
          v70 = v98;
          if ( v98 )
          {
            if ( v99 )
            {
              COREACCESS::Release((COREACCESS *)v96);
              v70 = v98;
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v70 + 2), v70);
          }
          v71 = v94;
          if ( v94 )
          {
            if ( v95 )
            {
              v95 = 0;
              v71 = v94;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v94 + 20) )
              {
                DXGADAPTER::ReleaseCoreResource(v94);
                v71 = v94;
              }
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v71 + 2), v71);
          }
          v72 = v88;
          while ( 1 )
          {
            v73 = v7;
            if ( v18 < v7 )
              v73 = v18;
            v74 = DxgkDestroyAllocationInternal(
                    v10,
                    (struct DXGDEVICE *)v14,
                    v90,
                    v89,
                    v84,
                    (const unsigned int **)&v88,
                    v73,
                    a6,
                    v72,
                    a7);
            v79 = v74;
            if ( v74 < 0 )
              break;
            v10 = v91;
            v72 += v73;
            v18 -= v73;
            if ( !v18 )
            {
              v17 = 0;
              goto LABEL_135;
            }
          }
          v80 = WdLogNewEntry5_WdWarning(v76, v75, v77, v78);
          *(_QWORD *)(v80 + 24) = v79;
          WdLogEvent5_WdWarning(v80);
          v17 = v79;
LABEL_135:
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
          goto LABEL_136;
        }
        v14 = 0LL;
      }
    }
    v86 = 0LL;
    goto LABEL_30;
  }
  v16 = WdLogNewEntry5_WdWarning(&v85, v11, v12, v13);
  v17 = -1073741811;
  *(_QWORD *)(v16 + 24) = v9;
  *(_QWORD *)(v16 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v16);
LABEL_137:
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v102);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v103);
  return v17;
}
