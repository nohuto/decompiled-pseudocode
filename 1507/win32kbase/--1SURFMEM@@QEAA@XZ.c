/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C000CB80 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0011DA4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     GreCreateBitmap @ 0x1C0044870 (GreCreateBitmap.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B38BC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B3A90 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002422C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     EngFreeUserMem @ 0x1C0069890 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00B1DD0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00B2798 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 v1; // r15
  char v3; // al
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  signed __int32 v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int16 v10; // cx
  PVOID v11; // rsi
  void *v12; // rbx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 ThreadWin32Thread; // r15
  PVOID v19; // rbx
  __int64 CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-59h]
  __int64 v32; // [rsp+30h] [rbp-51h]
  unsigned int v33; // [rsp+44h] [rbp-3Dh]
  PVOID Object[2]; // [rsp+50h] [rbp-31h]
  _OWORD v35[3]; // [rsp+78h] [rbp-9h] BYREF
  PEPROCESS Process; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+6Fh] BYREF
  HSEMAPHORE v38; // [rsp+F8h] [rbp+77h] BYREF
  char v39; // [rsp+100h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_BYTE *)this + 8);
    if ( (v3 & 1) != 0 )
    {
      v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
      v5 = (unsigned __int16)*(_DWORD *)v1;
      v6 = 3 * v5;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v39);
      _m_prefetchw((const void *)(v4 + 24 * v5 + 8));
      v7 = *(_DWORD *)(v4 + 24 * v5 + 8);
      if ( (*(_BYTE *)(v4 + 24 * v5 + 15) & 0x20) != 0 )
        goto LABEL_11;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v4 + 24 * v5 + 15) & 0x40) != 0 )
          {
            v8 = 8 * v5;
            ExAcquirePushLockExclusiveEx((char *)gpentPushLock + v8, 0LL);
            if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v1 + 14) == 5
              && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
              && gpentHmgrAltStacks )
            {
              RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v1);
            }
            --*(_DWORD *)(v1 + 8);
            if ( (*(_BYTE *)(v4 + 8 * v6 + 15) & 0x40) != 0 )
            {
              ExReleasePushLockExclusiveEx((char *)gpentPushLock + v8, 0LL);
              KeLeaveCriticalRegion();
              return;
            }
            _m_prefetchw((const void *)(v4 + 8 * v6 + 8));
            _InterlockedExchange((volatile __int32 *)(v4 + 8 * v6 + 8), *(_DWORD *)(v4 + 8 * v6 + 8) & 0xFFFFFFFE);
LABEL_11:
            KeLeaveCriticalRegion();
            return;
          }
          if ( (v7 & 1) == 0 )
            break;
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_10:
          _m_prefetchw((const void *)(v4 + 24 * v5 + 8));
          v7 = *(_DWORD *)(v4 + 24 * v5 + 8);
          if ( (*(_BYTE *)(v4 + 24 * v5 + 15) & 0x20) != 0 )
            goto LABEL_11;
        }
        if ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24 * v5 + 8), v7 | 1, v7)
          || (*(_BYTE *)(v4 + 24 * v5 + 15) & 0x40) != 0 )
        {
          goto LABEL_10;
        }
        *((_QWORD *)gpentPushLock + v5) = 0LL;
        *(_BYTE *)(v4 + 24 * v5 + 15) |= 0x40u;
        _m_prefetchw((const void *)(v4 + 24 * v5 + 8));
        v33 = *(_DWORD *)(v4 + 24 * v5 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v4 + 24 * v5 + 8), v33);
        v7 = v33;
      }
    }
    if ( (v3 & 8) != 0 && *(_QWORD *)(v1 + 120) )
    {
      v37 = *(_QWORD *)(v1 + 120);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v37);
    }
    HmgRemoveObjectImpl(**(struct HOBJ__ ***)this, *((_DWORD *)this + 3) != 0, 1, 1u, 5, 0LL);
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    v9 = *(_QWORD *)this;
    v10 = *(_WORD *)(*(_QWORD *)this + 102LL);
    v11 = *(PVOID *)(*(_QWORD *)this + 72LL);
    v12 = *(void **)(*(_QWORD *)this + 240LL);
    v13 = *(_OWORD *)(*(_QWORD *)this + 280LL);
    v35[0] = *(_OWORD *)(*(_QWORD *)this + 264LL);
    v14 = *(_OWORD *)(v9 + 296);
    v35[1] = v13;
    v15 = *(_OWORD *)(v9 + 536);
    v35[2] = v14;
    *(_OWORD *)Object = *(_OWORD *)(v9 + 520);
    if ( (v10 & 8) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 112) & 0x40000) != 0 && v11 )
      {
        if ( (v10 & 0x80u) == 0 )
        {
          EngFreeUserMem(v11);
        }
        else
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
          {
            v19 = Object[1];
            if ( DWORD2(v15) )
              v19 = v11;
            CurrentProcess = PsGetCurrentProcess(v17, v16);
            MmUnmapViewOfSection(CurrentProcess, v19);
            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process) >= 0 )
            {
              if ( DWORD2(v15) )
                v11 = Object[1];
              MmUnmapViewOfSection(Process, v11);
              ObfDereferenceObject(Process);
            }
          }
          if ( !Object[0] )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    else if ( (v10 & 0x800) != 0 )
    {
      v38 = ghsemMapRot;
      EngAcquireSemaphore(ghsemMapRot);
      v25 = *(_QWORD **)(*(_QWORD *)this + 256LL);
      if ( v25 )
      {
        PsGetCurrentProcessWin32Process(v22, v21, v23, v24, BugCheckParameter4, v32);
        v26 = *(_QWORD *)this + 440LL;
        if ( *(_QWORD *)v26 != v26 )
        {
          v27 = *(_QWORD *)v26;
          v28 = *(_QWORD **)(*(_QWORD *)this + 448LL);
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 || *v28 != v26 )
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
        }
        if ( v11 && v12 )
          MmUnmapViewOfSection(*v25, v11);
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)v35);
      if ( v12 )
        ObfDereferenceObject(v12);
      SEMOBJ::vUnlock((SEMOBJ *)&v38, v29, v30);
    }
    else if ( (v10 & 0x10) != 0 )
    {
      vFreeKernelSection(v11);
    }
    SURFACE::Free(*(struct SURFACE **)this);
  }
}
