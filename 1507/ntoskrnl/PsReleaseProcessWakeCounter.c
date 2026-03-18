/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x14055A9FC
 * Callers:
 *     <none>
 * Callees:
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 */

void __fastcall PsReleaseProcessWakeCounter(__int64 a1, __int64 a2)
{
  int v2; // r8d
  void *v3; // rbx
  char v4; // al

  v2 = a1 & 7;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
  v4 = 1;
  if ( v2 == 5 )
  {
    v4 = 5;
    v2 = 0;
  }
  PspChargeJobWakeCounter((_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF8uLL), 0LL, v2, -1LL, v4, 0LL, a2);
  ObDereferenceObjectDeferDeleteWithTag(v3, 0x6B577350u);
}
