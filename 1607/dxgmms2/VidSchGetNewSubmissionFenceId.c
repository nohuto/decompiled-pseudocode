/*
 * XREFs of VidSchGetNewSubmissionFenceId @ 0x1C0040BF4
 * Callers:
 *     VidSchiSwitchNodeFromContext @ 0x1C0041180 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetNewSubmissionFenceId(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8LL * a3 + 408);
  if ( a2 )
    v5 = *(_QWORD *)(a2 + 88);
  else
    v5 = *(_QWORD *)(v4 + 32);
  result = ++*(_QWORD *)(v4 + 48);
  *a4 = result;
  *(_QWORD *)(v5 + 432) = result;
  if ( a2 )
  {
    result = *a4;
    *(_QWORD *)(a2 + 112) = *a4;
  }
  return result;
}
