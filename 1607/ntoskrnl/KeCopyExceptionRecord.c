/*
 * XREFs of KeCopyExceptionRecord @ 0x140171CB8
 * Callers:
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KiCopyInformation @ 0x1401D29AC (KiCopyInformation.c)
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
