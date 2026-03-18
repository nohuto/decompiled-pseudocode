/*
 * XREFs of ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C007B8B8
 * Callers:
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C007B03C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FEA8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall bShouldUseSfmTokenArray(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v6; // [rsp+30h] [rbp+8h]

  v6 = a1;
  v4 = 0;
  if ( (!(unsigned int)UserIsRemoteConnection(a1, a2, a3, a4) || (unsigned int)UserIsRemoteAndNotDisconnectConnection())
    && (v6 & 0x40) == 0 )
  {
    return 1;
  }
  return v4;
}
