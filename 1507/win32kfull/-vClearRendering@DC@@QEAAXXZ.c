/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0018920 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C001A0A0 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C001A330 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiGetPixel @ 0x1C0020EF0 (NtGdiGetPixel.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     NtGdiGetDCObject @ 0x1C00D3E90 (NtGdiGetDCObject.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C01121D4 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C00168E0 (GreSelectRedirectionBitmap.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0262414 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C026CEC4 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // ebp
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  SURFOBJ *v6; // rcx
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v10; // r9d
  int v11; // r15d
  int v12; // r12d
  HBITMAP v13; // r8
  HWND v14; // rdx
  HDEV v15; // rcx
  int v16; // r10d
  int v17; // eax
  int v18; // edi
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+44h] [rbp-24h]

  *((_DWORD *)this + 10) &= ~1u;
  v1 = 0;
  v2 = *((_DWORD *)this + 9);
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 64);
    if ( *(_QWORD *)(v4 + 240) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
      EngLockSurface(*(HSURF *)(v4 + 32));
    v5 = *((_QWORD *)this + 64);
    if ( (*((_DWORD *)this + 9) & 0x40000) != 0 )
    {
      v6 = 0LL;
      if ( v5 )
        v6 = (SURFOBJ *)(v5 + 24);
      EngUnlockSurface(v6);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 317));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 317) = 0LL;
    }
    if ( *(_QWORD *)(v5 + 240) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v5 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 264));
      if ( (*(_DWORD *)(v5 + 316))-- != 1 )
        goto LABEL_30;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v8 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v8 = *ThreadWin32Thread) != 0 )
      {
        v11 = *(_DWORD *)(v8 + 104);
        v12 = *(_DWORD *)(v8 + 108);
        *(_QWORD *)(v8 + 104) = 0LL;
      }
      else
      {
        v12 = v20;
        v11 = v19;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v13 = *(HBITMAP *)(v5 + 336);
        v14 = *(HWND *)(v5 + 328);
        v15 = *(HDEV *)(v5 + 320);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
        {
          v16 = *(_DWORD *)(v5 + 404);
          if ( v16 && g_pDwmState )
            GreHintSpriteShape(v15, v14, v13, v5 + 344, *(_DWORD *)(v5 + 400), v16, 0);
          else
            GdiHintSpriteShapeDelayDelete(v15, v14, v13, v10);
        }
        else
        {
          GreHintSpriteShape(v15, v14, v13, v5 + 344, *(_DWORD *)(v5 + 400), *(_DWORD *)(v5 + 404), 0);
        }
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v17 = *(_DWORD *)(v5 + 116);
      if ( (v17 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v17 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 264));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 408), *(HWND *)(v5 + 416), *(HSPRITE *)(v5 + 424));
        v1 = 1;
      }
      if ( v8 )
      {
        *(_DWORD *)(v8 + 104) = v11;
        *(_DWORD *)(v8 + 108) = v12;
      }
      if ( !v1 )
      {
LABEL_30:
        if ( *(_QWORD *)(v5 + 240) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
        {
          v18 = *(_DWORD *)(v5 + 312);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 264));
          if ( v18 == 1 )
            bDeleteSurface(*(_QWORD *)v5);
        }
      }
      if ( ghsemSprite )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 317));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 317) = 0LL;
  }
}
