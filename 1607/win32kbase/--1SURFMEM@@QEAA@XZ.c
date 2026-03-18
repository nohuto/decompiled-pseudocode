/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C0033330
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005C034 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C005D0D0 (GreCreateBitmap.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C007865C (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CB068 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     EngCreateLockedBitmap @ 0x1C00CB270 (EngCreateLockedBitmap.c)
 *     EngCreateLockedDeviceBitmap @ 0x1C00CB2D0 (EngCreateLockedDeviceBitmap.c)
 *     EngCreateLockedRedirectionDeviceBitmap @ 0x1C00CB330 (EngCreateLockedRedirectionDeviceBitmap.c)
 * Callees:
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C000D728 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00BFB6C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00BFBD4 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 v1; // rax
  char v3; // cl
  __int64 v4; // rax
  __int16 v5; // cx
  void *v6; // rsi
  void *v7; // rbx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // r14
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  PVOID Object[2]; // [rsp+30h] [rbp-29h]
  _OWORD v19[5]; // [rsp+58h] [rbp-1h] BYREF
  PEPROCESS Process; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+6Fh] BYREF
  HSEMAPHORE v22; // [rsp+D0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_BYTE *)this + 8);
    if ( (v3 & 1) != 0 )
    {
      HmgDecrementShareReferenceCount((unsigned int *)v1);
    }
    else
    {
      if ( (v3 & 8) != 0 && *(_QWORD *)(v1 + 120) )
      {
        v21 = *(_QWORD *)(v1 + 120);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v21);
      }
      HmgRemoveObjectImpl(**(struct HOBJ__ ***)this, *((_DWORD *)this + 3) != 0, 1, 1u, 5, 0LL);
      if ( *((_DWORD *)this + 3) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      v4 = *(_QWORD *)this;
      v5 = *(_WORD *)(*(_QWORD *)this + 102LL);
      v6 = *(void **)(*(_QWORD *)this + 72LL);
      v7 = *(void **)(*(_QWORD *)this + 248LL);
      v8 = *(_OWORD *)(*(_QWORD *)this + 288LL);
      v19[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
      v9 = *(_OWORD *)(v4 + 304);
      v19[1] = v8;
      v19[2] = v9;
      *(_OWORD *)Object = *(_OWORD *)(v4 + 528);
      if ( (v5 & 8) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 112) & 0x40000) != 0 && v6 )
        {
          if ( (v5 & 0x80u) == 0 )
          {
            EngFreeUserMem(v6);
          }
          else
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            if ( *(_QWORD *)(ThreadWin32Thread + 72) )
            {
              CurrentProcess = PsGetCurrentProcess(v10);
              MmUnmapViewOfSection(CurrentProcess);
              if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process) >= 0 )
              {
                MmUnmapViewOfSection(Process);
                ObfDereferenceObject(Process);
              }
            }
            if ( !Object[0] )
              KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
            ObfDereferenceObject(Object[0]);
          }
        }
      }
      else if ( (v5 & 0x800) != 0 )
      {
        v22 = ghsemMapRot;
        EngAcquireSemaphore(ghsemMapRot);
        v14 = *(_QWORD **)(*(_QWORD *)this + 264LL);
        if ( v14 )
        {
          PsGetCurrentProcessWin32Process(v13);
          v15 = *(_QWORD *)this + 448LL;
          if ( *(_QWORD *)v15 != v15 )
          {
            v16 = *(_QWORD *)v15;
            v17 = *(_QWORD **)(*(_QWORD *)this + 456LL);
            if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
              __fastfail(3u);
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
          }
          if ( v6 && v7 )
            MmUnmapViewOfSection(*v14);
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v19);
        if ( v7 )
          ObfDereferenceObject(v7);
        SEMOBJ::vUnlock((SEMOBJ *)&v22);
      }
      else if ( (v5 & 0x10) != 0 )
      {
        vFreeKernelSection(v6);
      }
      SURFACE::Free(*(struct SURFACE **)this);
    }
  }
}
