/*
 * XREFs of KiEntropyDpcRoutine @ 0x1400A8948
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KiEntropyDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // ebx

  v5 = ((unsigned __int8)(*DeferredContext >> 10) - 1) & 1;
  if ( v5 != DeferredContext[82] )
  {
    KiEntropyTimingRoutine(
      &DeferredContext[32 * (unsigned __int64)(((unsigned __int8)(*DeferredContext >> 10) - 1) & 1) + 1],
      128LL,
      SystemArgument1,
      SystemArgument2);
    DeferredContext[82] = v5;
  }
}
