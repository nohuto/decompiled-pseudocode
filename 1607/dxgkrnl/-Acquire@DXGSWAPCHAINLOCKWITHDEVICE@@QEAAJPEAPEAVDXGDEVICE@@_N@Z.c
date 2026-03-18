/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C018D390
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C018F3A0 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C018F5F0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0028EC4 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C018EC18 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  DXGAUTOMUTEX *v3; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  signed __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rbx
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  struct _KEVENT *v39; // rbp
  unsigned __int8 v40; // bp
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _BYTE v51[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v52; // [rsp+38h] [rbp-40h]
  __int64 v53; // [rsp+40h] [rbp-38h]
  char v54; // [rsp+48h] [rbp-30h]

  v3 = (DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24);
  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v10 = *((_QWORD *)this + 1);
  v11 = 0;
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v10 + 44) )
  {
    v12 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 1);
    WdLogEvent5_WdWarning(v12);
    return 3221225558LL;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v14 = v10 + 128;
    if ( !*((_BYTE *)this + 16) )
      v14 = v10 + 72;
    v15 = *(_QWORD *)(v14 + 16);
    if ( PsGetCurrentProcess(v7) != v15 )
    {
      v19 = WdLogNewEntry5_WdWarning(v7, v16, v17, v18);
      *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 1);
      *(_QWORD *)(v19 + 32) = PsGetCurrentProcessId();
      WdLogEvent5_WdWarning(v19);
      return 3221225506LL;
    }
  }
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v21);
  v23 = ProcessDxgProcess;
  if ( a2 )
  {
    v24 = ProcessDxgProcess + 184;
    *a2 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
    v27 = *((_QWORD *)this + 1);
    if ( *((_BYTE *)this + 16) )
      v28 = v27 + 128;
    else
      v28 = v27 + 72;
    v29 = *(unsigned int *)v28;
    v30 = (*(_DWORD *)v28 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *(_DWORD *)(v23 + 224)
      && (v26 = *(_QWORD *)(v23 + 208),
          v28 = ((unsigned int)v29 >> 26) & 0x30,
          v25 = *(unsigned int *)(v26 + 16LL * (unsigned int)v30 + 8),
          (((unsigned int)v29 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * (unsigned int)v30 + 8) & 0x30))
      && (v25 & 0x1000) == 0
      && (v25 & 0xF) != 0
      && (*(_BYTE *)(v26 + 16LL * (unsigned int)v30 + 8) & 0xF) == 3 )
    {
      v31 = *(_QWORD *)(v26 + 16LL * (unsigned int)v30);
      if ( v31 )
      {
        _m_prefetchw((const void *)(v31 + 64));
        v32 = *(_QWORD *)(v31 + 64);
        while ( v32 )
        {
          v28 = v32 + 1;
          v33 = v32;
          v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 64), v32 + 1, v32);
          if ( v33 == v32 )
            goto LABEL_22;
        }
        v31 = 0LL;
LABEL_22:
        if ( v31 )
        {
          *((_BYTE *)this + 42) = 1;
          *((_QWORD *)this + 6) = v31;
LABEL_26:
          ExReleasePushLockSharedEx(v24, 0LL);
          KeLeaveCriticalRegion();
          if ( v31 && a3 )
          {
            DXGAUTOMUTEX::Release(v3);
            v39 = (struct _KEVENT *)(*(_QWORD *)(v31 + 16) + 56LL);
            if ( !KeReadStateEvent(v39) )
              KeWaitForSingleObject(v39, Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v31 + 80), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 96LL));
              v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v31 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v41, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v31 + 80), 1u);
              if ( v40 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v31 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 96LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v42 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL);
            v53 = v42;
            v54 = 0;
            if ( v42 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v42 + 24));
              v52 = -1LL;
            }
            COREACCESS::operator=((__int64)this + 56, (__int64)v51);
            COREACCESS::~COREACCESS((COREACCESS *)v51);
            COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
            if ( *(_DWORD *)(v31 + 376) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v11 = -1073741130;
              v47 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
              *(_QWORD *)(v47 + 24) = v31;
              *(_QWORD *)(v47 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v47);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v11 >= 0 )
          {
            v48 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v48 + 44) )
            {
              if ( *((_BYTE *)this + 16) )
                v50 = v48 + 128;
              else
                v50 = v48 + 72;
              *(_QWORD *)(v50 + 8) = v31;
              *a2 = (struct DXGDEVICE *)v31;
              return (unsigned int)v11;
            }
            v49 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
            *(_QWORD *)(v49 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v49);
            v11 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v11;
        }
      }
    }
    else
    {
      v31 = 0LL;
    }
    v34 = WdLogNewEntry5_WdWarning(v28, v30, v25, v26);
    *(_QWORD *)(v34 + 24) = v29;
    *(_QWORD *)(v34 + 32) = v23;
    WdLogEvent5_WdWarning(v34);
    v11 = -1073741811;
    goto LABEL_26;
  }
  return 0LL;
}
