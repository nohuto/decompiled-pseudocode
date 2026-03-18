/*
 * XREFs of PfpScenCtxInitialize @ 0x140541648
 * Callers:
 *     PfInitializeSuperfetch @ 0x14076A3E8 (PfInitializeSuperfetch.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(_QWORD *a1)
{
  memset(a1, 0, 0x78uLL);
  *a1 = 0LL;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 2) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 2), NotificationEvent, 0);
}
