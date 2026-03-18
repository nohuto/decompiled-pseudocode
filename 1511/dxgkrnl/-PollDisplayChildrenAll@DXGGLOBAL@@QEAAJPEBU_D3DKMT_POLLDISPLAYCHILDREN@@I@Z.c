/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0145D70
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0131470 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00191C4 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00C0BC4 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00C0BF4 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C016B6D8 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C0179E80 (DmmEnableModeResetOnMonitorEvent.c)
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
  __int64 v30; // rcx
  bool v31; // sf
  struct _MONITOR_PENDING_EVENT *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _MONITOR_PENDING_EVENT *v41; // rax
  int v42; // esi
  __int64 v43; // rdi
  unsigned int v44; // r12d
  int v45; // eax
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v46; // r13
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  __int64 v54; // rax
  signed __int64 v55; // r14
  __int64 v56; // rdi
  volatile signed __int64 *v57; // rdi
  volatile signed __int64 *v58; // rbx
  signed __int64 v59; // rax
  signed __int64 v60; // rtt
  unsigned int v61; // ecx
  volatile signed __int64 **v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v70; // [rsp+48h] [rbp-C0h]
  struct _MONITOR_PENDING_EVENT *v71; // [rsp+50h] [rbp-B8h] BYREF
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v72; // [rsp+58h] [rbp-B0h]
  volatile signed __int64 *v73; // [rsp+60h] [rbp-A8h]
  _BYTE v74[16]; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int64 *v75; // [rsp+78h] [rbp-90h]
  unsigned int v76; // [rsp+80h] [rbp-88h]
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-80h] BYREF
  PKWAIT_BLOCK WaitBlockArray; // [rsp+90h] [rbp-78h]
  struct _MONITOR_PENDING_EVENT **v79; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v80[64]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v81; // [rsp+E0h] [rbp-28h]
  PVOID *v82; // [rsp+E8h] [rbp-20h] BYREF
  char v83; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v84; // [rsp+130h] [rbp+28h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+138h] [rbp+30h] BYREF
  char v86; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v87; // [rsp+180h] [rbp+78h]
  _BYTE *v88; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v89[64]; // [rsp+190h] [rbp+88h] BYREF
  unsigned int v90; // [rsp+1D0h] [rbp+C8h]
  _QWORD v91[7]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v92[7]; // [rsp+210h] [rbp+108h] BYREF
  struct _KWAIT_BLOCK *v93; // [rsp+248h] [rbp+140h] BYREF
  char v94; // [rsp+250h] [rbp+148h] BYREF
  unsigned int v95; // [rsp+3D0h] [rbp+2C8h]

  v3 = 0LL;
  v72 = a2;
  v5 = 0LL;
  v76 = a3;
  v70 = 0LL;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v74, (DXGGLOBAL *)((char *)this + 472));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
  v7 = (volatile signed __int64 *)((char *)this + 536);
  v73 = v7;
  v8 = (volatile signed __int64 *)*v7;
  while ( v8 != v7 && v8 )
  {
    v9 = v8;
    v8 = (volatile signed __int64 *)*v8;
    if ( *((_QWORD *)v9 + 248) )
      ++v6;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74);
  if ( !v6 )
  {
    v11 = 0;
    goto LABEL_110;
  }
  Object = 0LL;
  v87 = 0;
  if ( v6 <= 8 )
  {
    PoolWithTag = (PVOID *)&v86;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_14;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v6, 0x4B677844u);
  }
  Object = PoolWithTag;
  v87 = v6;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8LL * v6);
LABEL_14:
  v93 = 0LL;
  v95 = 0;
  if ( v6 <= 8 )
  {
    v13 = (struct _KWAIT_BLOCK *)&v94;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x30 )
      goto LABEL_20;
    v13 = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 48LL * v6, 0x4B677844u);
  }
  v93 = v13;
  v10 = v13;
  v95 = v6;
  if ( v13 )
    memset(v13, 0, 48LL * v6);
LABEL_20:
  v82 = 0LL;
  v84 = 0;
  if ( v6 <= 8 )
  {
    v14 = (PVOID *)&v83;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_26;
    v14 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x4B677844u);
  }
  v82 = v14;
  v84 = v6;
  if ( v14 )
    memset(v14, 0, 8LL * v6);
LABEL_26:
  v81 = 0;
  v15 = 0LL;
  v79 = 0LL;
  if ( v6 <= 8 )
  {
    v15 = (struct _MONITOR_PENDING_EVENT **)v80;
    v79 = (struct _MONITOR_PENDING_EVENT **)v80;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_32;
    v15 = (struct _MONITOR_PENDING_EVENT **)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x4B677844u);
    v79 = v15;
  }
  v81 = v6;
  if ( v15 )
  {
    memset(v15, 0, 8LL * v6);
    v15 = v79;
  }
LABEL_32:
  v90 = 0;
  v88 = 0LL;
  if ( v6 <= 8 )
  {
    v3 = v89;
    v88 = v89;
  }
  else
  {
    v10 = (struct _KWAIT_BLOCK *)v6;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_38;
    v16 = ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x4B677844u);
    v15 = v79;
    v3 = v16;
    v88 = v16;
  }
  v90 = v6;
  if ( v3 )
  {
    memset(v3, 0, 8LL * v6);
    v15 = v79;
    v3 = v88;
  }
LABEL_38:
  v17 = v82;
  v18 = Object;
  WaitBlockArray = v93;
  if ( v82 && v15 && Object && v93 && v3 )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
    v19 = (volatile signed __int64 *)*v7;
    while ( v19 != v7 && v19 )
    {
      v20 = v19;
      v75 = (volatile signed __int64 *)*v19;
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
      v19 = v75;
      if ( !v23 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v91, (struct DXGADAPTER *const)v20, 0LL);
        v71 = 0LL;
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v20);
        if ( *((_QWORD *)v20 + 248) )
        {
          LODWORD(v24) = COREADAPTERACCESS::AcquireExclusive(v91);
          if ( (int)v24 >= 0 )
          {
            v25 = (void *)*((_QWORD *)v20 + 22);
            v17[v5] = v25;
            ObfReferenceObject(v25);
            v28 = v72;
            if ( (*((_DWORD *)v72 + 1) & 2) != 0 )
            {
              v29 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v20, &v71, v26, v27);
              v24 = v29;
              v31 = v29 < 0;
              v32 = v71;
              if ( v31 )
              {
                if ( v71 )
                {
                  v33 = WdLogNewEntry5_WdAssertion(v30);
                  *(_QWORD *)(v33 + 24) = 1833LL;
                  WdLogEvent5_WdAssertion(v33);
                }
                v34 = WdLogNewEntry5_WdError(v30);
                *(_QWORD *)(v34 + 24) = v24;
                WdLogEvent5_WdError(v34);
              }
              else
              {
                v15[v5] = v71;
                v18[v5] = (char *)v32 + 24;
              }
              v28 = v72;
            }
            if ( (int)v24 < 0 )
              goto LABEL_69;
            if ( (*((_DWORD *)v28 + 1) & 4) != 0 )
            {
              v35 = DmmEnableModeResetOnMonitorEvent(v20, 0LL);
              v24 = v35;
              if ( v35 < 0 )
              {
                v37 = WdLogNewEntry5_WdError(v36);
                *(_QWORD *)(v37 + 24) = v24;
                WdLogEvent5_WdError(v37);
              }
              else
              {
                *(_QWORD *)&v3[8 * v5] = v20;
              }
            }
            if ( (int)v24 < 0 )
            {
LABEL_69:
              LODWORD(v70) = v24;
              ObfDereferenceObject(v17[v5]);
              v41 = v71;
              v17[v5] = 0LL;
              if ( v41 )
              {
                MonitorReleaseMonitorPendingEvent(v41, v38, v39, v40);
                v15[v5] = 0LL;
                v18[v5] = 0LL;
              }
              v5 = HIDWORD(v70);
            }
            else
            {
              v5 = (unsigned int)++HIDWORD(v70);
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v91);
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
        v19 = v75;
      }
      v7 = v73;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74);
    if ( (_DWORD)v5 )
    {
      v42 = v70;
      v43 = (unsigned int)v5;
      v44 = v76;
      do
      {
        v45 = DpiPollDisplayChildren(*v17, v44);
        if ( v45 < 0 )
          v42 = v45;
        ObfDereferenceObject(*v17);
        *v17++ = 0LL;
        --v43;
      }
      while ( v43 );
      LODWORD(v5) = HIDWORD(v70);
      LODWORD(v70) = v42;
      v7 = v73;
    }
    v46 = v72;
    if ( (*((_DWORD *)v72 + 1) & 2) == 0 || !(_DWORD)v5 )
      goto LABEL_88;
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v48 = KeWaitForMultipleObjects(v5, v18, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v53 = v48;
    if ( v48 == 258 )
    {
      LODWORD(v70) = 258;
      v54 = WdLogNewEntry5_WdError(v50);
      *(_QWORD *)(v54 + 24) = 1922LL;
    }
    else
    {
      if ( v48 >= 0 )
        goto LABEL_86;
      LODWORD(v70) = v48;
      v54 = WdLogNewEntry5_WdError(v50);
      *(_QWORD *)(v54 + 24) = v53;
    }
    WdLogEvent5_WdError(v54);
LABEL_86:
    v55 = (char *)v18 - (char *)v15;
    v56 = (unsigned int)v5;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v15, v49, v51, v52);
      *v15 = 0LL;
      *(struct _MONITOR_PENDING_EVENT **)((char *)v15++ + v55) = 0LL;
      --v56;
    }
    while ( v56 );
LABEL_88:
    if ( (*((_DWORD *)v46 + 1) & 4) != 0 && (_DWORD)v5 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
      v57 = (volatile signed __int64 *)*v7;
      while ( v57 != v7 && v57 )
      {
        v58 = v57;
        v57 = (volatile signed __int64 *)*v57;
        _m_prefetchw((const void *)(v58 + 3));
        v59 = *((_QWORD *)v58 + 3);
        while ( v59 )
        {
          v60 = v59;
          v59 = _InterlockedCompareExchange64(v58 + 3, v59 + 1, v59);
          if ( v60 == v59 )
          {
            LOBYTE(v59) = 1;
            break;
          }
        }
        if ( (_BYTE)v59 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v92, (struct DXGADAPTER *const)v58, 0LL);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v58);
          v61 = 0;
          v62 = (volatile signed __int64 **)v3;
          while ( *v62 != v58 )
          {
            ++v61;
            ++v62;
            if ( v61 >= (unsigned int)v5 )
              goto LABEL_106;
          }
          if ( (int)COREADAPTERACCESS::AcquireExclusive(v92) >= 0 )
          {
            LOBYTE(v63) = 1;
            v64 = DmmEnableModeResetOnMonitorEvent(v58, v63);
            v66 = v64;
            if ( v64 < 0 )
            {
              v67 = WdLogNewEntry5_WdError(v65);
              *(_QWORD *)(v67 + 24) = v66;
              WdLogEvent5_WdError(v67);
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v92);
          }
LABEL_106:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92);
        }
      }
    }
    v11 = v70;
    goto LABEL_109;
  }
  v68 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v68 + 24) = 1767LL;
  WdLogEvent5_WdError(v68);
  v11 = -1073741801;
LABEL_109:
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v88);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v79);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v82);
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&v93);
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&Object);
LABEL_110:
  if ( v74[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v74);
  return v11;
}
