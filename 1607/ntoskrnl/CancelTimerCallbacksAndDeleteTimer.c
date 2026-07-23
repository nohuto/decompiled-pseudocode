/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x14023CC48
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140149B64 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExDeleteTimer @ 0x140130FE8 (ExDeleteTimer.c)
 */

char __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rcx
  char result; // al
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 && *(_QWORD *)(a1 + 416) )
  {
    v2 = *(_WORD *)(a1 + 320);
    *(_WORD *)(a1 + 320) = 2;
    if ( v2 == 1 )
      KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)(a1 + 416);
    memset(v5, 0, 24);
    result = ExDeleteTimer(v3, 1, 1, (unsigned int *)v5);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  return result;
}
