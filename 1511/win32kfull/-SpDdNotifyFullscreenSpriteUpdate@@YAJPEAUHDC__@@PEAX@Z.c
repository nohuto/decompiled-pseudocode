/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FEA8
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0263A20 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AF38 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0033590 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C003C598 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C007B8B8 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C007C188 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0110984 (DwmAsyncDirtySprite.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  UINT_PTR v3; // rsi
  unsigned int v4; // edi
  struct DWMSPRITE *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdi
  void *v15; // rax
  __int64 v16; // r8
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  struct DWMSPRITE *v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v21[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v21, a1);
  if ( v21[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v22);
    v20 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v19, 0LL, a2);
    if ( g_pDwmState )
    {
      v5 = v19;
      if ( v19 )
      {
        v6 = *((_QWORD *)v19 + 16);
        vSpDwmUpdateSpriteVisibility(v19, 1u);
        vSpUpdateDirtyRgn(v5, (struct SFMLOGICALSURFACE *)v6, 0LL, (struct _RECTL *)((char *)v5 + 56), &v23, 0);
        if ( v23 )
        {
          v10 = bShouldUseSfmTokenArray(*(unsigned int *)(v6 + 256), v7, v8, v9) == 0;
          v12 = *(_QWORD *)(v6 + 192);
          if ( v10 )
          {
            if ( v12 )
              v3 = *(_QWORD *)(v12 + 8);
            v14 = *(_QWORD *)v5;
            v15 = (void *)UserReferenceDwmApiPort(v11);
            v13 = DwmAsyncDirtySprite(v15, v14, v16, v23, v3);
          }
          else
          {
            if ( v12 )
              v3 = *(_QWORD *)(v12 + 8);
            v13 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v6, v23, v3);
          }
          v4 = v13;
        }
        else
        {
          v4 = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
      }
      else
      {
        v4 = -1073741816;
      }
    }
    else
    {
      v4 = -1073741816;
      if ( v19 )
        _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v21);
    SEMOBJ::vUnlock((SEMOBJ *)&v20);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
