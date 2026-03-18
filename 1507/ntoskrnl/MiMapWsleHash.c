/*
 * XREFs of MiMapWsleHash @ 0x14003C764
 * Callers:
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiConvertWsleHash @ 0x1401063E0 (MiConvertWsleHash.c)
 * Callees:
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 */

__int64 __fastcall MiMapWsleHash(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rcx
  char v5; // al

  v3 = MiMapWsMetaPage(a1, a2);
  if ( !v3 )
    return 0LL;
  v4 = v3;
  v5 = *(_BYTE *)(a1 + 216);
  *(_QWORD *)(a1 + 160) += v4;
  if ( (v5 & 7) == 1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 - 2928));
    _InterlockedIncrement64((volatile signed __int64 *)(a1 - 2920));
  }
  else
  {
    _InterlockedExchangeAdd64(&qword_14034FCF8, v4);
  }
  return 1LL;
}
