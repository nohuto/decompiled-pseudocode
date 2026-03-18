/*
 * XREFs of ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C000EA78
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0010444 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02611B8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall bShouldUseSfmTokenArray(char a1)
{
  char v1; // bl

  v1 = 0;
  if ( (!(unsigned int)UserIsRemoteConnection() || (unsigned int)UserIsRemoteAndNotDisconnectConnection())
    && (a1 & 0x40) == 0 )
  {
    return 1;
  }
  return v1;
}
