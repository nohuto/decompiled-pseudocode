/*
 * XREFs of PspIsProcessInJob @ 0x1404F287C
 * Callers:
 *     PspCheckConditionalWakeCharge @ 0x1404F1C44 (PspCheckConditionalWakeCharge.c)
 *     NtIsProcessInJob @ 0x1404F279C (NtIsProcessInJob.c)
 *     PspGetJobAssignmentDisposition @ 0x1404F2B24 (PspGetJobAssignmentDisposition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIsProcessInJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 944);
  result = 291LL;
  while ( v2 )
  {
    v4 = v2 == a2;
    v2 = *(_QWORD *)(v2 + 1056);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
