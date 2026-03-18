/*
 * XREFs of KeInitializeAffinityEx @ 0x1400755A0
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 * Callees:
 *     <none>
 */

void *__fastcall KeInitializeAffinityEx(_QWORD *a1)
{
  *a1 = 1310721LL;
  return memset(a1 + 1, 0, 0xA0uLL);
}
