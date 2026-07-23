/*
 * XREFs of RtlWakeAddressSingle @ 0x180003090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeAddressSingle(PVOID Address)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v1, 0);
  RtlpWakeByAddress(Address, 0LL);
}
