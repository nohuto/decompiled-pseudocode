/*
 * XREFs of ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C007B3E8
 * Callers:
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     GreHintSpriteShape @ 0x1C007B994 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00D2428 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E9318 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C026004C (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::StartSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct SfmState **v6; // r8
  struct SfmState *v7; // rax
  int v8; // edi

  INC_SHARE_REF_CNT(this);
  v6 = (struct SfmState **)*((_QWORD *)a3 + 6);
  v7 = (SFMLOGICALSURFACE *)((char *)this + 32);
  *((_QWORD *)this + 4) = (char *)a3 + 40;
  *((_QWORD *)this + 5) = v6;
  if ( *v6 != (struct SfmState *)((char *)a3 + 40) )
    __fastfail(3u);
  *v6 = v7;
  *((_QWORD *)a3 + 6) = v7;
  ++*((_DWORD *)a3 + 14);
  v8 = 0;
  *((_DWORD *)this + 62) |= 0x18u;
  if ( *((_QWORD *)this + 3) )
  {
    LOBYTE(v8) = (int)SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 1) >= 0;
    *((_DWORD *)this + 62) ^= (*((_DWORD *)this + 62) ^ (v8 << 7)) & 0x80;
  }
  else
  {
    *((_DWORD *)this + 62) &= ~0x80u;
  }
}
