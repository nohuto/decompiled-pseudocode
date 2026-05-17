/*
 * XREFs of RtlpSaveUmsDebugRegisterState @ 0x1800FCBA4
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800EC770 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x18008BC18 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwGetContextThread @ 0x1800A80D0 (ZwGetContextThread.c)
 */

__int64 __fastcall RtlpSaveUmsDebugRegisterState(__int64 a1)
{
  __int64 v3; // rcx
  int ContextThread; // edi

  if ( !a1 )
    return 3221225485LL;
  ContextThread = ZwGetContextThread();
  if ( ContextThread >= 0 )
  {
    RtlpCopyLegacyContext(v3, a1 + 16, 1048592);
    if ( (*(_DWORD *)(a1 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 4u);
  }
  return (unsigned int)ContextThread;
}
