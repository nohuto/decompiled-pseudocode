/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x14021C63C
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x14021C5B4 (MiGetSharedProtosAtDpcLevel.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiPerSessionProtosCompare @ 0x14021C688 (MiPerSessionProtosCompare.c)
 */

_QWORD *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  int v4; // eax

  v2 = *(_QWORD **)(a1 + 24);
  if ( !v2 )
    return 0LL;
  v3 = a2;
  do
  {
    v4 = MiPerSessionProtosCompare(v3, v2);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        break;
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      v2 = (_QWORD *)*v2;
    }
  }
  while ( v2 );
  if ( v2 )
    return v2;
  else
    return 0LL;
}
