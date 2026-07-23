/*
 * XREFs of MiModifiedWriterNoReservationSort @ 0x140123064
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiModifiedWriterNoReservationSort(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = 48LL * *a1 - 0x58000000000LL;
  v3 = 48LL * *a2 - 0x58000000000LL;
  v4 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL;
  v5 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL;
  if ( v4 < v5 )
    return 0xFFFFFFFFLL;
  if ( v4 > v5 )
    return 1LL;
  v7 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
  v8 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
  if ( v8 >= v7 )
    return v8 > v7;
  else
    return 0xFFFFFFFFLL;
}
