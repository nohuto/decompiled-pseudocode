/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002E800 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002E830 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0030434 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0031BA0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiGetDCObject @ 0x1C0040C40 (NtGdiGetDCObject.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C014B6AC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C003A450 (GreSelectRedirectionBitmap.c)
 *     GreHintSpriteShape @ 0x1C007B994 (GreHintSpriteShape.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0260C74 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C026BA34 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
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
  HWND v13; // rdx
  HDEV v14; // rcx
  int v15; // r10d
  int v16; // eax
  int v17; // edi
  int v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+44h] [rbp-24h]

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
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 314));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 314) = 0LL;
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
        v12 = v19;
        v11 = v18;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v13 = *(HWND *)(v5 + 328);
        v14 = *(HDEV *)(v5 + 320);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
        {
          v15 = *(_DWORD *)(v5 + 404);
          if ( v15 && g_pDwmState )
            GreHintSpriteShape(v14, v13, *(_DWORD *)(v5 + 400), v15, 0);
          else
            GdiHintSpriteShapeDelayDelete(v14, v13, *(HBITMAP *)(v5 + 336), v10);
        }
        else
        {
          GreHintSpriteShape(v14, v13, *(_DWORD *)(v5 + 400), *(_DWORD *)(v5 + 404), 0);
        }
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v16 = *(_DWORD *)(v5 + 116);
      if ( (v16 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v16 & 0xFFFFFFFD;
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
          v17 = *(_DWORD *)(v5 + 312);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 264));
          if ( v17 == 1 )
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
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 314));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 314) = 0LL;
  }
}
