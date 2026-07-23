/*
 * XREFs of PopFanRemove @ 0x14067310C
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 */

NTSTATUS __fastcall PopFanRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 152) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  return KeWaitForSingleObject((PVOID)(a1 + 128), Executive, 0, 0, 0LL);
}
