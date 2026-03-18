/*
 * XREFs of PfpScenCtxInitialize @ 0x1405B740C
 * Callers:
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(_QWORD *a1)
{
  memset(a1, 0, 0x78uLL);
  *a1 = 0LL;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 2) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 2), NotificationEvent, 0);
}
