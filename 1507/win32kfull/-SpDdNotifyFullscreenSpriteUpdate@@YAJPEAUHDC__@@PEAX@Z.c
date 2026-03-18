/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02611B8
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C02651B0 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C000EA78 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00103B8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0012720 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0121FCC (DwmAsyncDirtySprite.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0261EC0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  unsigned int v3; // ebx
  struct DWMSPRITE *v4; // rbx
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rax
  UINT_PTR v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  void *v13; // rax
  __int64 v14; // r8
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v18[32]; // [rsp+38h] [rbp-1h] BYREF
  struct DWMSPRITE *v19; // [rsp+58h] [rbp+1Fh]
  _QWORD v20[6]; // [rsp+60h] [rbp+27h] BYREF
  char v21; // [rsp+B0h] [rbp+77h] BYREF
  unsigned int v22; // [rsp+B8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( v20[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21);
    v17 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v18, 0LL, a2);
    if ( g_pDwmState )
    {
      v4 = v19;
      if ( !v19 )
      {
        v3 = -1073741816;
LABEL_21:
        v19 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v18);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
        GreReleaseSemaphoreInternal(ghsemDwmState);
        SEMOBJ::vUnlock((SEMOBJ *)&v17);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
        goto LABEL_22;
      }
      v5 = *((_QWORD *)v19 + 16);
      vSpDwmUpdateSpriteVisibility(v19, 1);
      vSpUpdateDirtyRgn(v4, (struct SFMLOGICALSURFACE *)v5, 0LL, (struct _RECTL *)((char *)v4 + 56), &v22, 0);
      if ( v22 )
      {
        v6 = bShouldUseSfmTokenArray(*(_DWORD *)(v5 + 256)) == 0;
        v8 = *(_QWORD *)(v5 + 192);
        if ( v6 )
        {
          if ( v8 )
            v11 = *(_QWORD *)(v8 + 8);
          else
            v11 = 0LL;
          v12 = *(_QWORD *)v4;
          v13 = (void *)UserReferenceDwmApiPort(v7);
          v10 = DwmAsyncDirtySprite(v13, v12, v14, v22, v11);
        }
        else
        {
          if ( v8 )
            v9 = *(_QWORD *)(v8 + 8);
          else
            v9 = 0LL;
          v10 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v5, v22, v9);
        }
        v3 = v10;
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
    if ( v19 )
      _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
    goto LABEL_21;
  }
  v3 = -1073741811;
LABEL_22:
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v3;
}
