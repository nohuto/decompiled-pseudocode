/*
 * XREFs of AVrfDllUnloadNotification @ 0x1800CDEF8
 * Callers:
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800CE950 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800CED50 (AVrfpIsVerifierProviderDll.c)
 */

struct _PEB *__fastcall AVrfDllUnloadNotification(__int64 a1)
{
  struct _PEB *result; // rax
  __int64 *v3; // rdi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rbp

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
    if ( (unsigned __int8)AVrfpIsVerifierProviderDll(*(_QWORD *)(a1 + 48)) )
    {
      DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", (const void *)a1);
      __debugbreak();
    }
    if ( (int)AVrfpDllUnloadNotificationInternal(a1) >= 0 )
    {
      v3 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v3 != &AVrfpVerifierProvidersList )
      {
        v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v3[7];
        v3 = (__int64 *)*v3;
        if ( v4 )
          v4(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock);
  }
  return result;
}
