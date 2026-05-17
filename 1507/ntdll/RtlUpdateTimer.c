/*
 * XREFs of RtlUpdateTimer @ 0x18007ACF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 */

__int64 __fastcall RtlUpdateTimer(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  char *v7; // rdx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
    return 3221225480LL;
  v8 = RtlpTpRevertCapture(&v12, 0LL);
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 80), v7, v9, v10);
    if ( *(_BYTE *)(a2 + 88) || !*(_DWORD *)(a2 + 92) )
    {
      *(_BYTE *)(a2 + 88) = a4 != 0;
      v13[0] = -10000 * v5;
      TpSetTimerEx(*(_QWORD *)(a2 + 64), (__int64)v13, a4, 0);
    }
    v8 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlpTpResumeImpersonation(v12);
  return (unsigned int)v8;
}
