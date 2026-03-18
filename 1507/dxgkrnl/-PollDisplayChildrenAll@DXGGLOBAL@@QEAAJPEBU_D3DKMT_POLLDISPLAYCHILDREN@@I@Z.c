/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C013F898
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C012AED0 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00176B0 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00A7750 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00A7780 (MonitorAcquireMonitorPendingEvent.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     DpiPollDisplayChildren @ 0x1C0167108 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01758E8 (DmmEnableModeResetOnMonitorEvent.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3)
{
  _BYTE *v3; // r15
  __int64 v5; // r12
  unsigned int v6; // edi
  volatile signed __int64 *v7; // rsi
  volatile signed __int64 *v8; // rcx
  volatile signed __int64 *v9; // rax
  struct _KWAIT_BLOCK *v10; // rcx
  unsigned int v11; // ebx
  PVOID *PoolWithTag; // rax
  struct _KWAIT_BLOCK *v13; // rax
  PVOID *v14; // rax
  struct _MONITOR_PENDING_EVENT **v15; // rbx
  _BYTE *v16; // rax
  PVOID *v17; // r13
  PVOID *v18; // r14
  volatile signed __int64 *v19; // rax
  volatile signed __int64 *v20; // rsi
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  bool v23; // zf
  __int64 v24; // rdi
  void *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  bool v34; // sf
  struct _MONITOR_PENDING_EVENT *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _MONITOR_PENDING_EVENT *v44; // rax
  int v45; // esi
  __int64 v46; // rdi
  unsigned int v47; // r12d
  int v48; // eax
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v49; // r13
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdi
  __int64 v57; // rax
  signed __int64 v58; // r14
  __int64 v59; // rdi
  volatile signed __int64 *v60; // rdi
  volatile signed __int64 *v61; // rbx
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  unsigned int v64; // ecx
  volatile signed __int64 **v65; // rax
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v73; // [rsp+48h] [rbp-C0h]
  struct _MONITOR_PENDING_EVENT *v74; // [rsp+50h] [rbp-B8h] BYREF
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v75; // [rsp+58h] [rbp-B0h]
  volatile signed __int64 *v76; // [rsp+60h] [rbp-A8h]
  _BYTE v77[16]; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int64 *v78; // [rsp+78h] [rbp-90h]
  unsigned int v79; // [rsp+80h] [rbp-88h]
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-80h] BYREF
  PKWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-78h]
  struct _MONITOR_PENDING_EVENT **v82; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v83[64]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v84; // [rsp+E0h] [rbp-28h]
  PVOID *v85; // [rsp+E8h] [rbp-20h] BYREF
  char v86; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v87; // [rsp+130h] [rbp+28h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+138h] [rbp+30h] BYREF
  char v89; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v90; // [rsp+180h] [rbp+78h]
  _BYTE *v91; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v92[64]; // [rsp+190h] [rbp+88h] BYREF
  unsigned int v93; // [rsp+1D0h] [rbp+C8h]
  _QWORD v94[7]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v95[7]; // [rsp+210h] [rbp+108h] BYREF
  struct _KWAIT_BLOCK *v96; // [rsp+248h] [rbp+140h] BYREF
  char v97; // [rsp+250h] [rbp+148h] BYREF
  unsigned int v98; // [rsp+3D0h] [rbp+2C8h]

  v3 = 0LL;
  v75 = a2;
  v5 = 0LL;
  v79 = a3;
  v73 = 0LL;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v77, (DXGGLOBAL *)((char *)this + 376));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
  v7 = (volatile signed __int64 *)((char *)this + 416);
  v76 = v7;
  v8 = (volatile signed __int64 *)*v7;
  while ( v8 != v7 && v8 )
  {
    v9 = v8;
    v8 = (volatile signed __int64 *)*v8;
    if ( *((_QWORD *)v9 + 247) )
      ++v6;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
  if ( !v6 )
  {
    v11 = 0;
    goto LABEL_110;
  }
  Object = 0LL;
  v90 = 0;
  if ( v6 <= 8 )
  {
    PoolWithTag = (PVOID *)&v89;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_14;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v6, 0x4B677844u);
  }
  Object = PoolWithTag;
  v90 = v6;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8LL * v6);
LABEL_14:
  v96 = 0LL;
  v98 = 0;
  if ( v6 <= 8 )
  {
    v13 = (struct _KWAIT_BLOCK *)&v97;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x30 )
      goto LABEL_20;
    v13 = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 48LL * v6, 0x4B677844u);
  }
  v96 = v13;
  v10 = v13;
  v98 = v6;
  if ( v13 )
    memset(v13, 0, 48LL * v6);
LABEL_20:
  v85 = 0LL;
  v87 = 0;
  if ( v6 <= 8 )
  {
    v14 = (PVOID *)&v86;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_26;
    v14 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x4B677844u);
  }
  v85 = v14;
  v87 = v6;
  if ( v14 )
    memset(v14, 0, 8LL * v6);
LABEL_26:
  v84 = 0;
  v15 = 0LL;
  v82 = 0LL;
  if ( v6 <= 8 )
  {
    v15 = (struct _MONITOR_PENDING_EVENT **)v83;
    v82 = (struct _MONITOR_PENDING_EVENT **)v83;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_32;
    v15 = (struct _MONITOR_PENDING_EVENT **)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x4B677844u);
    v82 = v15;
  }
  v84 = v6;
  if ( v15 )
  {
    memset(v15, 0, 8LL * v6);
    v15 = v82;
  }
LABEL_32:
  v93 = 0;
  v91 = 0LL;
  if ( v6 <= 8 )
  {
    v3 = v92;
    v91 = v92;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_38;
    v16 = ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x4B677844u);
    v15 = v82;
    v3 = v16;
    v91 = v16;
  }
  v93 = v6;
  if ( v3 )
  {
    memset(v3, 0, 8LL * v6);
    v15 = v82;
    v3 = v91;
  }
LABEL_38:
  v17 = v85;
  v18 = Object;
  WaitBlockArray = v96;
  if ( v85 && v15 && Object && v96 && v3 )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
    v19 = (volatile signed __int64 *)*v7;
    while ( v19 != v7 && v19 )
    {
      v20 = v19;
      v78 = (volatile signed __int64 *)*v19;
      _m_prefetchw((const void *)(v19 + 3));
      v21 = *((_QWORD *)v19 + 3);
      while ( v21 )
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange64(v20 + 3, v21 + 1, v21);
        if ( v22 == v21 )
        {
          LOBYTE(v21) = 1;
          break;
        }
      }
      v23 = (_BYTE)v21 == 0;
      v19 = v78;
      if ( !v23 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v94, (struct DXGADAPTER *const)v20, 0LL);
        v74 = 0LL;
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v20);
        if ( *((_QWORD *)v20 + 247) )
        {
          LODWORD(v24) = COREADAPTERACCESS::AcquireExclusive(v94);
          if ( (int)v24 >= 0 )
          {
            v25 = (void *)*((_QWORD *)v20 + 22);
            v17[v5] = v25;
            ObfReferenceObject(v25);
            v28 = v75;
            if ( (*((_DWORD *)v75 + 1) & 2) != 0 )
            {
              v29 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v20, &v74, v26, v27);
              v24 = v29;
              v34 = v29 < 0;
              v35 = v74;
              if ( v34 )
              {
                if ( v74 )
                {
                  v36 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
                  *(_QWORD *)(v36 + 24) = 1855LL;
                  WdLogEvent5_WdAssertion(v36);
                }
                v37 = WdLogNewEntry5_WdError(v31);
                *(_QWORD *)(v37 + 24) = v24;
                WdLogEvent5_WdError(v37);
              }
              else
              {
                v15[v5] = v74;
                v18[v5] = (char *)v35 + 24;
              }
              v28 = v75;
            }
            if ( (int)v24 < 0 )
              goto LABEL_69;
            if ( (*((_DWORD *)v28 + 1) & 4) != 0 )
            {
              v38 = DmmEnableModeResetOnMonitorEvent(v20, 0LL);
              v24 = v38;
              if ( v38 < 0 )
              {
                v40 = WdLogNewEntry5_WdError(v39);
                *(_QWORD *)(v40 + 24) = v24;
                WdLogEvent5_WdError(v40);
              }
              else
              {
                *(_QWORD *)&v3[8 * v5] = v20;
              }
            }
            if ( (int)v24 < 0 )
            {
LABEL_69:
              LODWORD(v73) = v24;
              ObfDereferenceObject(v17[v5]);
              v44 = v74;
              v17[v5] = 0LL;
              if ( v44 )
              {
                MonitorReleaseMonitorPendingEvent(v44, v41, v42, v43);
                v15[v5] = 0LL;
                v18[v5] = 0LL;
              }
              v5 = HIDWORD(v73);
            }
            else
            {
              v5 = (unsigned int)++HIDWORD(v73);
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v94);
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
        v19 = v78;
      }
      v7 = v76;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
    if ( (_DWORD)v5 )
    {
      v45 = v73;
      v46 = (unsigned int)v5;
      v47 = v79;
      do
      {
        v48 = DpiPollDisplayChildren(*v17, v47);
        if ( v48 < 0 )
          v45 = v48;
        ObfDereferenceObject(*v17);
        *v17++ = 0LL;
        --v46;
      }
      while ( v46 );
      LODWORD(v5) = HIDWORD(v73);
      LODWORD(v73) = v45;
      v7 = v76;
    }
    v49 = v75;
    if ( (*((_DWORD *)v75 + 1) & 2) == 0 || !(_DWORD)v5 )
      goto LABEL_88;
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v51 = KeWaitForMultipleObjects(v5, v18, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v56 = v51;
    if ( v51 == 258 )
    {
      LODWORD(v73) = 258;
      v57 = WdLogNewEntry5_WdError(v53);
      *(_QWORD *)(v57 + 24) = 1944LL;
    }
    else
    {
      if ( v51 >= 0 )
        goto LABEL_86;
      LODWORD(v73) = v51;
      v57 = WdLogNewEntry5_WdError(v53);
      *(_QWORD *)(v57 + 24) = v56;
    }
    WdLogEvent5_WdError(v57);
LABEL_86:
    v58 = (char *)v18 - (char *)v15;
    v59 = (unsigned int)v5;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v15, v52, v54, v55);
      *v15 = 0LL;
      *(struct _MONITOR_PENDING_EVENT **)((char *)v15++ + v58) = 0LL;
      --v59;
    }
    while ( v59 );
LABEL_88:
    if ( (*((_DWORD *)v49 + 1) & 4) != 0 && (_DWORD)v5 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
      v60 = (volatile signed __int64 *)*v7;
      while ( v60 != v7 && v60 )
      {
        v61 = v60;
        v60 = (volatile signed __int64 *)*v60;
        _m_prefetchw((const void *)(v61 + 3));
        v62 = *((_QWORD *)v61 + 3);
        while ( v62 )
        {
          v63 = v62;
          v62 = _InterlockedCompareExchange64(v61 + 3, v62 + 1, v62);
          if ( v63 == v62 )
          {
            LOBYTE(v62) = 1;
            break;
          }
        }
        if ( (_BYTE)v62 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v95, (struct DXGADAPTER *const)v61, 0LL);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v61);
          v64 = 0;
          v65 = (volatile signed __int64 **)v3;
          while ( *v65 != v61 )
          {
            ++v64;
            ++v65;
            if ( v64 >= (unsigned int)v5 )
              goto LABEL_106;
          }
          if ( (int)COREADAPTERACCESS::AcquireExclusive(v95) >= 0 )
          {
            LOBYTE(v66) = 1;
            v67 = DmmEnableModeResetOnMonitorEvent(v61, v66);
            v69 = v67;
            if ( v67 < 0 )
            {
              v70 = WdLogNewEntry5_WdError(v68);
              *(_QWORD *)(v70 + 24) = v69;
              WdLogEvent5_WdError(v70);
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v95);
          }
LABEL_106:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v95);
        }
      }
    }
    v11 = v73;
    goto LABEL_109;
  }
  v71 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v71 + 24) = 1789LL;
  WdLogEvent5_WdError(v71);
  v11 = -1073741801;
LABEL_109:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v91);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v82);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v85);
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&v96);
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&Object);
LABEL_110:
  if ( v77[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
  return v11;
}
