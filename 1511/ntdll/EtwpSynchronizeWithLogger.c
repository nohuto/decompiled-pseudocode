/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x18005C8BC
 * Callers:
 *     EtwpFlushUmLogger @ 0x180003A90 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800F431C (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 340) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 136), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 340) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
