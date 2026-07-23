/*
 * XREFs of EtwpTrackRegBinaryInfo @ 0x180084094
 * Callers:
 *     EtwpTrackProviderBinary @ 0x180083FD0 (EtwpTrackProviderBinary.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x1800797C0 (EtwpGetUmProcessImageInfo.c)
 */

__int64 __fastcall EtwpTrackRegBinaryInfo(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 i; // bl
  __int64 v4; // rcx
  _BYTE *v5; // rax

  result = 0x8000LL;
  if ( *(__int16 *)(a1 + 98) < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      v4 = 0LL;
      v5 = (_BYTE *)(a1 + 150);
      while ( !*(v5 - 2) || *v5 != i )
      {
        v4 = (unsigned int)(v4 + 1);
        v5 += 24;
        if ( (unsigned int)v4 >= 4 )
        {
          result = 0LL;
          goto LABEL_7;
        }
      }
      result = a1 + 8 * (v4 + 2 * (v4 + 8));
LABEL_7:
      if ( result )
        result = EtwpGetUmProcessImageInfo(i, a1);
    }
  }
  return result;
}
