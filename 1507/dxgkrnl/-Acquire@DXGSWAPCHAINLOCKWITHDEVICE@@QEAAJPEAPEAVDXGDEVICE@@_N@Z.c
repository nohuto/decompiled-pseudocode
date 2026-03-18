/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01610B8
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0162FF0 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C0163230 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00224C0 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C016284C (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
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
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v21; // rbp
  char *v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  signed __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rbx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KEVENT *v37; // rbp
  unsigned __int8 v38; // bp
  __int64 v39; // r8
  COREACCESS *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _BYTE v49[32]; // [rsp+30h] [rbp-48h] BYREF

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
  Current = DXGPROCESS::GetCurrent(v7);
  v21 = Current;
  if ( a2 )
  {
    v22 = (char *)Current + 192;
    *a2 = 0LL;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
    v25 = *((_QWORD *)this + 1);
    if ( *((_BYTE *)this + 16) )
      v26 = v25 + 128;
    else
      v26 = v25 + 72;
    v27 = *(unsigned int *)v26;
    v28 = (*(_DWORD *)v26 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *((_DWORD *)v21 + 58)
      && (v24 = *((_QWORD *)v21 + 27),
          v26 = ((unsigned int)v27 >> 26) & 0x30,
          v23 = *(unsigned int *)(v24 + 16LL * (unsigned int)v28 + 8),
          (((unsigned int)v27 >> 26) & 0x30) == (*(_BYTE *)(v24 + 16LL * (unsigned int)v28 + 8) & 0x30))
      && (v23 & 0x1000) == 0
      && (v23 & 0xF) != 0
      && (*(_BYTE *)(v24 + 16LL * (unsigned int)v28 + 8) & 0xF) == 3 )
    {
      v29 = *(_QWORD *)(v24 + 16LL * (unsigned int)v28);
      if ( v29 )
      {
        _m_prefetchw((const void *)(v29 + 64));
        v30 = *(_QWORD *)(v29 + 64);
        while ( v30 )
        {
          v26 = v30 + 1;
          v31 = v30;
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 64), v30 + 1, v30);
          if ( v31 == v30 )
            goto LABEL_22;
        }
        v29 = 0LL;
LABEL_22:
        if ( v29 )
        {
          *((_BYTE *)this + 42) = 1;
          *((_QWORD *)this + 6) = v29;
LABEL_26:
          ExReleasePushLockSharedEx(v22, 0LL);
          KeLeaveCriticalRegion();
          if ( v29 && a3 )
          {
            DXGAUTOMUTEX::Release(v3);
            v37 = (struct _KEVENT *)(*(_QWORD *)(v29 + 16) + 56LL);
            if ( !KeReadStateEvent(v37) )
              KeWaitForSingleObject(v37, Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v29 + 80), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 80LL));
              v38 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v29 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v39, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v29 + 80), 1u);
              if ( v38 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v29 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 80LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v40 = COREACCESS::COREACCESS((COREACCESS *)v49, *(struct DXGADAPTER *const *)(*(_QWORD *)(v29 + 16) + 16LL));
            COREACCESS::operator=((__int64)this + 56, (__int64)v40);
            COREACCESS::~COREACCESS((COREACCESS *)v49);
            COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
            if ( *(_DWORD *)(v29 + 352) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v11 = -1073741130;
              v45 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
              *(_QWORD *)(v45 + 24) = v29;
              *(_QWORD *)(v45 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v45);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v11 >= 0 )
          {
            v46 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v46 + 44) )
            {
              if ( *((_BYTE *)this + 16) )
                v48 = v46 + 128;
              else
                v48 = v46 + 72;
              *(_QWORD *)(v48 + 8) = v29;
              *a2 = (struct DXGDEVICE *)v29;
              return (unsigned int)v11;
            }
            v47 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
            *(_QWORD *)(v47 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v47);
            v11 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v11;
        }
      }
    }
    else
    {
      v29 = 0LL;
    }
    v32 = WdLogNewEntry5_WdWarning(v26, v28, v23, v24);
    *(_QWORD *)(v32 + 24) = v27;
    *(_QWORD *)(v32 + 32) = v21;
    WdLogEvent5_WdWarning(v32);
    v11 = -1073741811;
    goto LABEL_26;
  }
  return 0LL;
}
