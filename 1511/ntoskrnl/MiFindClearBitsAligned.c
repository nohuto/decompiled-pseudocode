/*
 * XREFs of MiFindClearBitsAligned @ 0x1404B2ADC
 * Callers:
 *     MiFindEmptyAddressRange @ 0x14047A1A0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindClearBitsAligned(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  unsigned int v6; // r11d
  __int64 v7; // r8
  _DWORD *v8; // rcx
  unsigned int i; // eax

  v3 = *(_DWORD *)a1;
  v4 = -1;
  if ( a2 < *(_DWORD *)a1 )
  {
    v5 = 32;
    v6 = v3 - a2;
    if ( a3 > 0x20 && a3 < v3 )
      v5 = (a3 + 31) & 0xFFFFFFE0;
    if ( v5 <= v6 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      while ( 1 )
      {
        v8 = (_DWORD *)(v7 + 4 * ((unsigned __int64)v5 >> 5));
        for ( i = 0; i < a2; ++v8 )
        {
          if ( *v8 )
            break;
          i += 32;
        }
        if ( i == a2 )
          break;
        v5 = ((i + v5) & 0xFFFFFFE0) + 32;
        if ( v5 > v6 )
          return v4;
      }
      return v5;
    }
  }
  return v4;
}
