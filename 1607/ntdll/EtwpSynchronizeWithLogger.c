/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x180051DF8
 * Callers:
 *     EtwpStopUmLogger @ 0x1800533F0 (EtwpStopUmLogger.c)
 *     EtwpFlushUmLogger @ 0x1800FD8D4 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800FDAC8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A65E0 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 332) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 136), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 332) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
