/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D778
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0261550 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0050EE0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0052968 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0053F20 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00630A4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00D79D0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0132C84 (DwmAsyncDirtySprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  unsigned int v3; // ebx
  struct DWMSPRITE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  UINT_PTR v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // r8
  DYNAMICMODECHANGESHARELOCK *v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v21[32]; // [rsp+38h] [rbp-1h] BYREF
  struct DWMSPRITE *v22; // [rsp+58h] [rbp+1Fh]
  _QWORD v23[6]; // [rsp+60h] [rbp+27h] BYREF
  char v24; // [rsp+B0h] [rbp+77h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( v23[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
    v20 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v21, 0LL, a2);
    if ( g_pDwmState )
    {
      v4 = v22;
      if ( !v22 )
      {
        v3 = -1073741816;
LABEL_21:
        v22 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v21);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
        GreReleaseSemaphoreInternal(ghsemDwmState);
        SEMOBJ::vUnlock((SEMOBJ *)&v20);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
        goto LABEL_22;
      }
      v5 = *((_QWORD *)v22 + 16);
      vSpDwmUpdateSpriteVisibility(v22, 1u);
      vSpUpdateDirtyRgn(
        (struct _POINTL *)v4,
        (struct SFMLOGICALSURFACE *)v5,
        0LL,
        (struct _RECTL *)((char *)v4 + 56),
        &v25,
        0);
      if ( v25 )
      {
        v9 = bShouldUseSfmTokenArray(*(unsigned int *)(v5 + 256), v6, v7, v8) == 0;
        v11 = *(_QWORD *)(v5 + 192);
        if ( v9 )
        {
          if ( v11 )
            v14 = *(_QWORD *)(v11 + 8);
          else
            v14 = 0LL;
          v15 = *(_QWORD *)v4;
          v16 = (void *)UserReferenceDwmApiPort(v10);
          v13 = DwmAsyncDirtySprite(v16, v15, v17, v25, v14);
        }
        else
        {
          if ( v11 )
            v12 = *(_QWORD *)(v11 + 8);
          else
            v12 = 0LL;
          v13 = GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)v5, v25, v12);
        }
        v3 = v13;
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v3 = -1073741816;
    }
    if ( v22 )
      _InterlockedDecrement((volatile signed __int32 *)v22 + 3);
    goto LABEL_21;
  }
  v3 = -1073741811;
LABEL_22:
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return v3;
}
