/*
 * XREFs of KeCopyExceptionRecord @ 0x140166E90
 * Callers:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     KiCopyInformation @ 0x1401C4068 (KiCopyInformation.c)
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
