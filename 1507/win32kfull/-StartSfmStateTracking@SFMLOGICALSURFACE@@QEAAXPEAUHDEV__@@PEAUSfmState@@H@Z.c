/*
 * XREFs of ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0011A90
 * Callers:
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000A6E8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C026137C (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::StartSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct SfmState **v6; // r8
  struct SfmState *v7; // rax
  int v8; // edi

  INC_SHARE_REF_CNT(this, a2);
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
