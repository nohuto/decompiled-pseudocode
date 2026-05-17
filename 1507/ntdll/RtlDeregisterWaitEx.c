/*
 * XREFs of RtlDeregisterWaitEx @ 0x18007B7E0
 * Callers:
 *     RtlDeregisterWait @ 0x18007AA40 (RtlDeregisterWait.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18003C830 (TpSetWaitEx.c)
 *     RtlpTpWaitRundown @ 0x18007B920 (RtlpTpWaitRundown.c)
 *     RtlpTpResumeImpersonation @ 0x18007CA9C (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 *     TpReleaseWait @ 0x18007D2D0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18007D3E0 (TpWaitOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x18007D430 (TpWaitForWait.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2)
{
  char *v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  struct _TEB *v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+70h] [rbp+18h]
  int v13; // [rsp+78h] [rbp+20h]

  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  v5 = RtlpTpRevertCapture(&v10, 0LL);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16), v4, v6, v7);
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
    v8 = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    if ( (*(_BYTE *)(a1 + 8) & 4) == 0
      || (v11 = NtCurrentTeb(), *(_DWORD *)(a1 + 88) != LODWORD(v11->ClientId.UniqueThread)) )
    {
      v8 = 0;
    }
    v13 = v8;
    if ( a2 == -1 )
    {
      if ( !v8 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v12 = TpWaitOutstandingCallbackCount(*(_QWORD *)(a1 + 48));
    TpReleaseWait(*(_QWORD *)(a1 + 48));
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
      v12 = 0;
    }
    if ( v12 )
      v5 = v13 == 0 ? 0x103 : 0;
    else
      v5 = 0;
  }
  RtlpTpResumeImpersonation(v10);
  return (unsigned int)v5;
}
