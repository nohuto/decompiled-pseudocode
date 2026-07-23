/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x18000A6EC
 * Callers:
 *     EtwpFlushUmLogger @ 0x180002EE4 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x18000A520 (EtwpStopUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800F4918 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
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
