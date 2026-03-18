/*
 * XREFs of ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x1C026F3F0
 * Callers:
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0154EE8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0272F04 (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C02732F4 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsCursorSprite(struct SPRITE *a1)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1096LL); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
      return 0LL;
    if ( (struct SPRITE *)i == a1 )
      break;
  }
  return 1LL;
}
