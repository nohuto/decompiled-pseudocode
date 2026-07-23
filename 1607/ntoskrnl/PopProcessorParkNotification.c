/*
 * XREFs of PopProcessorParkNotification @ 0x140204A28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopProcessorParkNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned int v5; // r9d
  char i; // bl
  __int64 v7; // r8
  char v8; // al

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  v5 = 0;
  for ( i = 1;
        v5 < *(_DWORD *)(a2 + 4);
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v7) + 72LL) )
  {
    v7 = v5++;
  }
  if ( PopFxParkingFallback
    || ((v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v2 + 104))(v4, 31LL, a2)) != 0
      ? (i = PopFxParkingFallback)
      : (PopFxParkingFallback = 1),
        i) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v2 + 104))(v4, 14LL, a2);
  }
  return v8 == 0 ? 0xC00000BB : 0;
}
