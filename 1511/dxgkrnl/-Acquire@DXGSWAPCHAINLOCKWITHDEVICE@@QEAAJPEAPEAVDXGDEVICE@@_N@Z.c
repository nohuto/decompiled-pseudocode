/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01656E4
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0167520 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C0167760 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00223B4 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0166DC8 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
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
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v22; // rbp
  char *v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  signed __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rbx
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _KEVENT *v38; // rbp
  unsigned __int8 v39; // bp
  __int64 v40; // r8
  COREACCESS *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _BYTE v50[32]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24);
  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v10 = *((_QWORD *)this + 1);
  v11 = 0;
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v10 + 68) )
  {
    v12 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 1);
    WdLogEvent5_WdWarning(v12);
    return 3221225558LL;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v14 = v10 + 152;
    if ( !*((_BYTE *)this + 16) )
      v14 = v10 + 96;
    v15 = *(_QWORD *)(v14 + 16);
    if ( PsGetCurrentProcess(v7) != v15 )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = *((_QWORD *)this + 1);
      *(_QWORD *)(v20 + 32) = PsGetCurrentProcessId();
      WdLogEvent5_WdWarning(v20);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  v22 = Current;
  if ( a2 )
  {
    v23 = (char *)Current + 192;
    *a2 = 0LL;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
    v26 = *((_QWORD *)this + 1);
    if ( *((_BYTE *)this + 16) )
      v27 = v26 + 152;
    else
      v27 = v26 + 96;
    v28 = *(unsigned int *)v27;
    v29 = (*(_DWORD *)v27 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *((_DWORD *)v22 + 58)
      && (v25 = *((_QWORD *)v22 + 27),
          v27 = ((unsigned int)v28 >> 26) & 0x30,
          v24 = *(unsigned int *)(v25 + 16LL * (unsigned int)v29 + 8),
          (((unsigned int)v28 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16LL * (unsigned int)v29 + 8) & 0x30))
      && (v24 & 0x1000) == 0
      && (v24 & 0xF) != 0
      && (*(_BYTE *)(v25 + 16LL * (unsigned int)v29 + 8) & 0xF) == 3 )
    {
      v30 = *(_QWORD *)(v25 + 16LL * (unsigned int)v29);
      if ( v30 )
      {
        _m_prefetchw((const void *)(v30 + 64));
        v31 = *(_QWORD *)(v30 + 64);
        while ( v31 )
        {
          v27 = v31 + 1;
          v32 = v31;
          v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 64), v31 + 1, v31);
          if ( v32 == v31 )
            goto LABEL_22;
        }
        v30 = 0LL;
LABEL_22:
        if ( v30 )
        {
          *((_BYTE *)this + 42) = 1;
          *((_QWORD *)this + 6) = v30;
LABEL_26:
          ExReleasePushLockSharedEx(v23, 0LL);
          KeLeaveCriticalRegion();
          if ( v30 && a3 )
          {
            DXGAUTOMUTEX::Release(v3);
            v38 = (struct _KEVENT *)(*(_QWORD *)(v30 + 16) + 56LL);
            if ( !KeReadStateEvent(v38) )
              KeWaitForSingleObject(v38, Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v30 + 80), 0) )
            {
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 80LL));
              v39 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v40, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v30 + 80), 1u);
              if ( v39 )
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
              ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 80LL, 0LL);
              KeLeaveCriticalRegion();
            }
            *((_BYTE *)this + 41) = 1;
            v41 = COREACCESS::COREACCESS((COREACCESS *)v50, *(struct DXGADAPTER *const *)(*(_QWORD *)(v30 + 16) + 16LL));
            COREACCESS::operator=((__int64)this + 56, (__int64)v41);
            COREACCESS::~COREACCESS((COREACCESS *)v50);
            COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
            if ( *(_DWORD *)(v30 + 352) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v11 = -1073741130;
              v46 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
              *(_QWORD *)(v46 + 24) = v30;
              *(_QWORD *)(v46 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v46);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v11 >= 0 )
          {
            v47 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v47 + 68) )
            {
              if ( *((_BYTE *)this + 16) )
                v49 = v47 + 152;
              else
                v49 = v47 + 96;
              *(_QWORD *)(v49 + 8) = v30;
              *a2 = (struct DXGDEVICE *)v30;
              return (unsigned int)v11;
            }
            v48 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
            *(_QWORD *)(v48 + 24) = *((_QWORD *)this + 1);
            WdLogEvent5_WdWarning(v48);
            v11 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v11;
        }
      }
    }
    else
    {
      v30 = 0LL;
    }
    v33 = WdLogNewEntry5_WdWarning(v27, v29, v24, v25);
    *(_QWORD *)(v33 + 24) = v28;
    *(_QWORD *)(v33 + 32) = v22;
    WdLogEvent5_WdWarning(v33);
    v11 = -1073741811;
    goto LABEL_26;
  }
  return 0LL;
}
