/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01697E0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C014F880 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C001D2FC (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00D1AE8 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00D1B18 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C0193460 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01A378C (DmmEnableModeResetOnMonitorEvent.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _MONITOR_PENDING_EVENT *v4; // r13
  __int64 v6; // r15
  unsigned int v7; // edi
  volatile signed __int64 *v8; // rsi
  volatile signed __int64 *v9; // rcx
  volatile signed __int64 *v10; // rax
  struct _KWAIT_BLOCK *v11; // rcx
  PVOID *PoolWithTag; // rax
  struct _KWAIT_BLOCK *v13; // rax
  char *v14; // rax
  struct _MONITOR_PENDING_EVENT **v15; // rbx
  _BYTE *v16; // r12
  _BYTE *v17; // rax
  PVOID *v18; // r14
  volatile signed __int64 *v19; // rax
  volatile signed __int64 *v20; // rsi
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  char v23; // al
  bool v24; // zf
  __int64 v25; // rdi
  void *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  char *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  PVOID *v41; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v42; // r14
  __int64 v43; // rsi
  int v44; // eax
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rax
  signed __int64 v53; // r14
  __int64 v54; // rdi
  volatile signed __int64 *v55; // rdi
  volatile signed __int64 *v56; // rbx
  signed __int64 v57; // rax
  signed __int64 v58; // rtt
  unsigned int v59; // ecx
  volatile signed __int64 **v60; // rax
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v68; // [rsp+40h] [rbp-C0h]
  int v69; // [rsp+44h] [rbp-BCh]
  volatile signed __int64 *v71; // [rsp+50h] [rbp-B0h]
  struct _MONITOR_PENDING_EVENT *v73; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int64 *v74; // [rsp+68h] [rbp-98h]
  char *v75; // [rsp+70h] [rbp-90h]
  _BYTE v76[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v77; // [rsp+88h] [rbp-78h]
  PVOID *__attribute__((__org_arrdim(0,0))) v78; // [rsp+90h] [rbp-70h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  struct _MONITOR_PENDING_EVENT **v81; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v82[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v83; // [rsp+F8h] [rbp-8h]
  char *v84; // [rsp+100h] [rbp+0h] BYREF
  char v85; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v86; // [rsp+148h] [rbp+48h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+150h] [rbp+50h] BYREF
  char v88; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v89; // [rsp+198h] [rbp+98h]
  _BYTE *v90; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v91[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v92; // [rsp+1E8h] [rbp+E8h]
  _QWORD v93[10]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v94[10]; // [rsp+240h] [rbp+140h] BYREF
  struct _KWAIT_BLOCK *v95; // [rsp+290h] [rbp+190h] BYREF
  char v96; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v97; // [rsp+418h] [rbp+318h]

  v4 = 0LL;
  v6 = 0LL;
  v68 = 0;
  v77 = a4;
  v7 = 0;
  v69 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v76, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
  v8 = (volatile signed __int64 *)((char *)this + 416);
  v71 = v8;
  v9 = (volatile signed __int64 *)*v8;
  while ( v9 != v8 && v9 )
  {
    v10 = v9;
    v9 = (volatile signed __int64 *)*v9;
    if ( *((_QWORD *)v10 + 266) )
      ++v7;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76);
  if ( v7 )
  {
    Object = 0LL;
    v89 = 0;
    if ( v7 <= 8 )
    {
      PoolWithTag = (PVOID *)&v88;
    }
    else
    {
      v11 = (struct _KWAIT_BLOCK *)v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_13;
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v7, 0x4B677844u);
    }
    Object = PoolWithTag;
    v89 = v7;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, 8LL * v7);
LABEL_13:
    v95 = 0LL;
    v97 = 0;
    if ( v7 <= 8 )
    {
      v13 = (struct _KWAIT_BLOCK *)&v96;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x30 )
        goto LABEL_19;
      v13 = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 48LL * v7, 0x4B677844u);
    }
    v95 = v13;
    v11 = v13;
    v97 = v7;
    if ( v13 )
      memset(v13, 0, 48LL * v7);
LABEL_19:
    v84 = 0LL;
    v86 = 0;
    if ( v7 <= 8 )
    {
      v14 = &v85;
    }
    else
    {
      v11 = (struct _KWAIT_BLOCK *)v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_25;
      v14 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
    }
    v84 = v14;
    v86 = v7;
    if ( v14 )
      memset(v14, 0, 8LL * v7);
LABEL_25:
    v83 = 0;
    v15 = 0LL;
    v81 = 0LL;
    if ( v7 <= 8 )
    {
      v15 = (struct _MONITOR_PENDING_EVENT **)v82;
      v81 = (struct _MONITOR_PENDING_EVENT **)v82;
    }
    else
    {
      v11 = (struct _KWAIT_BLOCK *)v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_31;
      v15 = (struct _MONITOR_PENDING_EVENT **)ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
      v81 = v15;
    }
    v83 = v7;
    if ( v15 )
    {
      memset(v15, 0, 8LL * v7);
      v15 = v81;
    }
LABEL_31:
    v90 = 0LL;
    v16 = 0LL;
    v92 = 0;
    if ( v7 <= 8 )
    {
      v16 = v91;
      v90 = v91;
    }
    else
    {
      v11 = (struct _KWAIT_BLOCK *)v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_37;
      v17 = ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
      v15 = v81;
      v16 = v17;
      v90 = v17;
    }
    v92 = v7;
    if ( v16 )
    {
      memset(v16, 0, 8LL * v7);
      v15 = v81;
      v16 = v90;
    }
LABEL_37:
    v18 = Object;
    v78 = Object;
    WaitBlockArray = v95;
    v75 = v84;
    if ( !v84 || !v15 || !Object || !v95 || !v16 )
    {
      v66 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v66 + 24) = 1723LL;
      WdLogEvent5_WdError(v66);
      LODWORD(v4) = -1073741801;
LABEL_108:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v90);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v81);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v84);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&v95);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&Object);
      goto LABEL_109;
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
    v19 = (volatile signed __int64 *)*v8;
    while ( v19 != v8 && v19 )
    {
      v20 = v19;
      v74 = (volatile signed __int64 *)*v19;
      _m_prefetchw((const void *)(v19 + 3));
      v21 = *((_QWORD *)v19 + 3);
      do
      {
        if ( !v21 )
        {
          v23 = 0;
          goto LABEL_50;
        }
        v22 = v21;
        v21 = _InterlockedCompareExchange64(v20 + 3, v21 + 1, v21);
      }
      while ( v22 != v21 );
      v23 = 1;
LABEL_50:
      v24 = v23 == 0;
      v19 = v74;
      if ( !v24 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v93, (struct DXGADAPTER *const)v20, 0LL);
        v73 = 0LL;
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v20);
        if ( *((_QWORD *)v20 + 266) )
        {
          LODWORD(v25) = COREADAPTERACCESS::AcquireExclusive(v93);
          if ( (int)v25 >= 0 )
          {
            v26 = (void *)*((_QWORD *)v20 + 24);
            *(_QWORD *)&v75[8 * v6] = v26;
            ObfReferenceObject(v26);
            v29 = a2;
            if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
            {
              v30 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v20, &v73, v27, v28);
              v4 = v73;
              v25 = v30;
              if ( v30 < 0 )
              {
                if ( v73 )
                {
                  v32 = WdLogNewEntry5_WdAssertion(v31);
                  *(_QWORD *)(v32 + 24) = 1790LL;
                  WdLogEvent5_WdAssertion(v32);
                }
                v33 = WdLogNewEntry5_WdError(v31);
                *(_QWORD *)(v33 + 24) = v25;
                WdLogEvent5_WdError(v33);
              }
              else
              {
                v15[v6] = v73;
                v18[v6] = (char *)v4 + 24;
              }
              v29 = a2;
            }
            if ( (int)v25 < 0 )
              goto LABEL_69;
            if ( (*((_DWORD *)v29 + 1) & 4) != 0 )
            {
              v34 = DmmEnableModeResetOnMonitorEvent(v20, 0LL);
              v25 = v34;
              if ( v34 < 0 )
              {
                v36 = WdLogNewEntry5_WdError(v35);
                *(_QWORD *)(v36 + 24) = v25;
                WdLogEvent5_WdError(v36);
              }
              else
              {
                *(_QWORD *)&v16[8 * v6] = v20;
              }
            }
            if ( (int)v25 < 0 )
            {
LABEL_69:
              v69 = v25;
              v37 = v75;
              ObfDereferenceObject(*(PVOID *)&v75[8 * v6]);
              *(_QWORD *)&v37[8 * v6] = 0LL;
              if ( v4 )
              {
                MonitorReleaseMonitorPendingEvent(v4, v38, v39, v40);
                v15[v6] = 0LL;
                v18[v6] = 0LL;
              }
              v6 = v68;
            }
            else
            {
              v6 = ++v68;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v93);
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v93);
        v19 = v74;
        v4 = 0LL;
      }
      v8 = v71;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76);
    LODWORD(v4) = v69;
    if ( (_DWORD)v6 )
    {
      v41 = (PVOID *)v75;
      v42 = v77;
      v43 = (unsigned int)v6;
      do
      {
        v44 = DpiPollDisplayChildren(*v41, a3, v42);
        if ( v44 < 0 )
          LODWORD(v4) = v44;
        ObfDereferenceObject(*v41);
        *v41++ = 0LL;
        --v43;
      }
      while ( v43 );
      v18 = v78;
      LODWORD(v6) = v68;
      v8 = v71;
    }
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 || !(_DWORD)v6 )
    {
LABEL_88:
      if ( (*((_DWORD *)a2 + 1) & 4) != 0 && (_DWORD)v6 )
      {
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
        v55 = (volatile signed __int64 *)*v8;
        while ( v55 != v8 && v55 )
        {
          v56 = v55;
          v55 = (volatile signed __int64 *)*v55;
          _m_prefetchw((const void *)(v56 + 3));
          v57 = *((_QWORD *)v56 + 3);
          while ( v57 )
          {
            v58 = v57;
            v57 = _InterlockedCompareExchange64(v56 + 3, v57 + 1, v57);
            if ( v58 == v57 )
            {
              LOBYTE(v57) = 1;
              break;
            }
          }
          if ( (_BYTE)v57 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v94, (struct DXGADAPTER *const)v56, 0LL);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v56);
            v59 = 0;
            v60 = (volatile signed __int64 **)v16;
            while ( *v60 != v56 )
            {
              ++v59;
              ++v60;
              if ( v59 >= (unsigned int)v6 )
                goto LABEL_106;
            }
            if ( (int)COREADAPTERACCESS::AcquireExclusive(v94) >= 0 )
            {
              LOBYTE(v61) = 1;
              v62 = DmmEnableModeResetOnMonitorEvent(v56, v61);
              v64 = v62;
              if ( v62 < 0 )
              {
                v65 = WdLogNewEntry5_WdError(v63);
                *(_QWORD *)(v65 + 24) = v64;
                WdLogEvent5_WdError(v65);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v94);
            }
LABEL_106:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
          }
        }
      }
      goto LABEL_108;
    }
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v46 = KeWaitForMultipleObjects(v6, v18, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v51 = v46;
    if ( v46 == 258 )
    {
      LODWORD(v4) = 258;
      v52 = WdLogNewEntry5_WdError(v48);
      *(_QWORD *)(v52 + 24) = 1879LL;
    }
    else
    {
      if ( v46 >= 0 )
        goto LABEL_86;
      LODWORD(v4) = v46;
      v52 = WdLogNewEntry5_WdError(v48);
      *(_QWORD *)(v52 + 24) = v51;
    }
    WdLogEvent5_WdError(v52);
LABEL_86:
    v53 = (char *)v18 - (char *)v15;
    v54 = (unsigned int)v6;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v15, v47, v49, v50);
      *v15 = 0LL;
      *(struct _MONITOR_PENDING_EVENT **)((char *)v15++ + v53) = 0LL;
      --v54;
    }
    while ( v54 );
    goto LABEL_88;
  }
LABEL_109:
  if ( v76[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76);
  return (unsigned int)v4;
}
