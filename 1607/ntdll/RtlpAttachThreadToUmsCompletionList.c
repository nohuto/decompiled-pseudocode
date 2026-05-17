/*
 * XREFs of RtlpAttachThreadToUmsCompletionList @ 0x1800ECBF0
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800EC770 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     RtlCreateUmsThreadContext @ 0x1800EC510 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsThreadContext @ 0x1800EC680 (RtlDeleteUmsThreadContext.c)
 */

__int64 __fastcall RtlpAttachThreadToUmsCompletionList(__int64 a1, __int64 a2)
{
  struct _TEB *v2; // rsi
  int v3; // edi
  int UmsThreadContext; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v2 = NtCurrentTeb();
  v3 = -1073741811;
  if ( a2 )
  {
    UmsThreadContext = RtlCreateUmsThreadContext((__int64 *)&v7);
    v5 = v7;
    v3 = UmsThreadContext;
    if ( UmsThreadContext < 0
      || (*(_QWORD *)(v7 + 1248) = v2,
          *(_QWORD *)(v5 + 1280) = v5,
          *(_QWORD *)(v5 + 1272) = SLODWORD(v2->ClientId.UniqueThread),
          v3 = NtSetInformationThread(),
          v3 < 0) )
    {
      if ( v5 )
        RtlDeleteUmsThreadContext(v5);
    }
    else
    {
      v2->TlsSlots[4] = (void *)v5;
    }
  }
  return (unsigned int)v3;
}
