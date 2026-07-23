/*
 * XREFs of PsIsThreadInSilo @ 0x140013180
 * Callers:
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 * Callees:
 *     PspIsSiloInSilo @ 0x14067EA9C (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // r8

  if ( !a2 )
    return 1;
  v4 = *(_QWORD *)(a1 + 1984);
  if ( v4 == -3 )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544), a2, 0LL);
  if ( v4 == a2 || (unsigned __int8)PspIsSiloInSilo(v4, a2, 0LL) )
    return 1;
  return v5;
}
