/*
 * XREFs of ?WriteEncoded4@@YAHEPEAEI0@Z @ 0x1C02C5354
 * Callers:
 *     EncodeRLE8 @ 0x1C02C504C (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02C6BAC (EncodeRLE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WriteEncoded4(unsigned __int8 a1, unsigned __int8 *a2, unsigned __int8 a3, unsigned __int8 *a4)
{
  if ( !a2 )
    return 2LL;
  if ( a2 + 2 <= a4 )
  {
    *a2 = a3;
    a2[1] = a1;
    return 2LL;
  }
  return 0LL;
}
