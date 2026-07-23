/*
 * XREFs of MiFindClearBitsAlignedEx @ 0x14014BA80
 * Callers:
 *     MiObtainDynamicVa @ 0x1400A19B0 (MiObtainDynamicVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindClearBitsAlignedEx(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r11
  unsigned __int64 i; // rax
  __int64 v11; // r11

  v4 = ~(a2 - 1);
  v5 = v4 & *a1;
  if ( a2 > v5 )
    return -1LL;
  v6 = v5 - a2;
  while ( 1 )
  {
    v7 = v4 & (a2 - 1 + a3);
    if ( v7 <= v6 )
      break;
LABEL_14:
    if ( !a3 )
      return -1LL;
    v6 = a3 & v4;
    a3 = 0LL;
  }
  while ( 1 )
  {
    v8 = (_QWORD *)(a1[1] + 8 * (v7 >> 6));
    for ( i = 0LL; i < a2; i += 64LL )
    {
      if ( *v8 )
        break;
      ++v8;
    }
    if ( i == a2 )
      return v7;
    if ( i )
      v11 = ~((_DWORD)a2 - 1) & (unsigned int)(i + a2 - 1);
    else
      v11 = (unsigned int)a2;
    v7 += v11;
    if ( v7 > v6 )
      goto LABEL_14;
  }
}
