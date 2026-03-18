/*
 * XREFs of PspIsProcessInJob @ 0x14053CC40
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x14041BE48 (PspGetJobAssignmentDisposition.c)
 *     NtIsProcessInJob @ 0x14053CB08 (NtIsProcessInJob.c)
 *     PspCheckConditionalWakeCharge @ 0x14053CBE8 (PspCheckConditionalWakeCharge.c)
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
    v2 = *(_QWORD *)(v2 + 1064);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
