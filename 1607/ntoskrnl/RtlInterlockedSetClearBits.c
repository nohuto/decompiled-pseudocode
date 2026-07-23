/*
 * XREFs of RtlInterlockedSetClearBits @ 0x140076D48
 * Callers:
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     PspAddProcessToJobChain @ 0x140469188 (PspAddProcessToJobChain.c)
 *     PspValidateJobLimitsDuringAssignment @ 0x140469360 (PspValidateJobLimitsDuringAssignment.c)
 *     PspAssociateCompletionPortCallback @ 0x1406804B8 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearBits(volatile signed __int32 *a1, int a2)
{
  unsigned __int32 v2; // r9d
  unsigned int v3; // r8d
  signed __int32 v4; // eax

  v2 = *a1;
  v3 = (a2 | *a1) & 0xFFFFFFDF;
  if ( v3 != *a1 )
  {
    do
    {
      v4 = _InterlockedCompareExchange(a1, v3, v2);
      if ( v2 == v4 )
        break;
      v2 = v4;
      v3 = (a2 | v4) & 0xFFFFFFDF;
    }
    while ( v3 != v4 );
  }
  return v2;
}
