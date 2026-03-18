/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8
 * Callers:
 *     NtGdiGetPixel @ 0x1C0040650 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0044F30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0046814 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048594 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00493C0 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0049680 (GreSelectRedirectionBitmap.c)
 *     GreHintSpriteShape @ 0x1C0062450 (GreHintSpriteShape.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C025E564 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0269EF0 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v1; // r12d
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  SURFOBJ *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *ThreadWin32Thread; // rax
  int v16; // r9d
  int v17; // ebp
  int v18; // r14d
  HBITMAP v19; // r8
  HWND v20; // rdx
  HDEV v21; // rcx
  int v22; // r10d
  int v23; // eax
  int v24; // edi
  int v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+44h] [rbp-24h]

  *((_DWORD *)this + 10) &= ~1u;
  v1 = 0;
  v2 = *((_DWORD *)this + 9);
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 64);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
      EngLockSurface(*(HSURF *)(v4 + 32));
    v5 = *((_QWORD *)this + 64);
    if ( (*((_DWORD *)this + 9) & 0x40000) != 0 )
    {
      if ( v5 )
        v6 = (SURFOBJ *)(v5 + 24);
      else
        v6 = 0LL;
      EngUnlockSurface(v6);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 317));
      *((_QWORD *)this + 317) = 0LL;
      *((_DWORD *)this + 9) &= ~0x40000u;
    }
    if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v5 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v5 + 272));
      if ( (*(_DWORD *)(v5 + 324))-- != 1 )
        goto LABEL_32;
      PsGetThreadWin32Thread(KeGetCurrentThread(), v7, v8, v9);
      v11 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v12, v13, v14);
      if ( ThreadWin32Thread && (v11 = *ThreadWin32Thread) != 0 )
      {
        v17 = *(_DWORD *)(v11 + 104);
        *(_DWORD *)(v11 + 104) = 0;
        v18 = *(_DWORD *)(v11 + 108);
        *(_DWORD *)(v11 + 108) = 0;
      }
      else
      {
        v18 = v26;
        v17 = v25;
      }
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v19 = *(HBITMAP *)(v5 + 344);
        v20 = *(HWND *)(v5 + 336);
        v21 = *(HDEV *)(v5 + 328);
        if ( (*(_DWORD *)(v5 + 116) & 2) != 0 )
        {
          v22 = *(_DWORD *)(v5 + 412);
          if ( v22 && g_pDwmState )
            GreHintSpriteShape(v21, v20, v19, v5 + 352, *(_DWORD *)(v5 + 408), v22, 0);
          else
            GdiHintSpriteShapeDelayDelete(v21, v20, v19, v16);
        }
        else
        {
          GreHintSpriteShape(v21, v20, v19, v5 + 352, *(_DWORD *)(v5 + 408), *(_DWORD *)(v5 + 412), 0);
        }
        *(_DWORD *)(v5 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v23 = *(_DWORD *)(v5 + 116);
      if ( (v23 & 2) != 0 )
      {
        *(_DWORD *)(v5 + 116) = v23 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v5 + 416), *(HWND *)(v5 + 424), *(HSPRITE *)(v5 + 432));
        v1 = 1;
      }
      if ( v11 )
      {
        *(_DWORD *)(v11 + 104) = v17;
        *(_DWORD *)(v11 + 108) = v18;
      }
      if ( !v1 )
      {
LABEL_32:
        if ( *(_QWORD *)(v5 + 248) || (*(_DWORD *)(v5 + 116) & 1) != 0 )
        {
          v24 = *(_DWORD *)(v5 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v5 + 272));
          if ( v24 == 1 )
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
    *((_QWORD *)this + 317) = 0LL;
    *((_DWORD *)this + 9) &= ~0x40000u;
  }
}
