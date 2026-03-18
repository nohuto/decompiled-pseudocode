/*
 * XREFs of EditionMouseMoveShellResilience @ 0x1401BE890
 * Callers:
 *     <none>
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x140059968 (IsAdaptiveQueueDetachExempted.c)
 */

void __fastcall EditionMouseMoveShellResilience(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 704);
  if ( v2
    && (*(_DWORD *)(v1 + 1360) & 0x40000LL) != 0
    && (*(_DWORD *)(v2 + 200) & 0x8000) != 0
    && *(_QWORD *)(v1 + 1576) )
  {
    if ( !*(_DWORD *)(v2 + 268) )
      *(_DWORD *)(v2 + 268) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(unsigned int)IsAdaptiveQueueDetachExempted(v1) )
      KeSetEvent(*(PRKEVENT *)(v1 + 1576), 1, 0);
  }
}
