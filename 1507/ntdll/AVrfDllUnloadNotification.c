/*
 * XREFs of AVrfDllUnloadNotification @ 0x1800C4BC8
 * Callers:
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800C5620 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800C5A20 (AVrfpIsVerifierProviderDll.c)
 */

int __fastcall AVrfDllUnloadNotification(__int64 a1)
{
  struct _PEB *v1; // rax
  __int64 *v3; // rdi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rbp

  v1 = NtCurrentPeb();
  if ( (v1->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection(&AVrfpVerifierLock);
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
    LODWORD(v1) = RtlLeaveCriticalSection(&AVrfpVerifierLock);
  }
  return (int)v1;
}
