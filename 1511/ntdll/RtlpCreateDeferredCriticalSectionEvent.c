/*
 * XREFs of RtlpCreateDeferredCriticalSectionEvent @ 0x18007F950
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18002FD78 (RtlpWaitOnCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x1800301D0 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 */

HANDLE __fastcall RtlpCreateDeferredCriticalSectionEvent(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rbx
  NTSTATUS v5; // eax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v2 = -1LL;
  Handle = (HANDLE)-1LL;
  if ( RtlpForceCSToUseEvents )
  {
    v5 = ZwCreateEvent(&Handle, 0x100003u, 0LL, SynchronizationEvent, 0);
    v2 = (signed __int64)Handle;
    if ( v5 < 0 )
      v2 = -1LL;
    Handle = (HANDLE)v2;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v2, 0LL);
  if ( !v3 )
    return Handle;
  if ( Handle != (HANDLE)-1LL )
    NtClose(Handle);
  return (HANDLE)v3;
}
