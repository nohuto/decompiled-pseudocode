/*
 * XREFs of KeConnectInterruptForHal @ 0x140130608
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeConnectInterruptForHal(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r8
  __int64 v2; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v2 = *(unsigned int *)(a1 + 88);
  *(_BYTE *)(a1 + 95) = 1;
  KeGetCurrentPrcb()->InterruptObject[v2] = (void *)a1;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
