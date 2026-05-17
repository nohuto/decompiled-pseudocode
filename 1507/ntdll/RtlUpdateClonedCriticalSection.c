/*
 * XREFs of RtlUpdateClonedCriticalSection @ 0x180044A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlUpdateClonedCriticalSection(__int64 a1)
{
  struct _TEB *result; // rax
  void *UniqueThread; // rdx

  result = NtCurrentTeb();
  UniqueThread = result->ClientId.UniqueThread;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = UniqueThread;
  *(_DWORD *)(a1 + 8) = -2;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
