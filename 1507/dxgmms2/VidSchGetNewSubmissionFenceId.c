/*
 * XREFs of VidSchGetNewSubmissionFenceId @ 0x1C002F228
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0076E90 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00772CC (VidSchiSubmitRenderCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007A380 (VidSchiSwitchNodeFromContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetNewSubmissionFenceId(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8LL * a3 + 368);
  if ( a2 )
    v5 = *(_QWORD *)(a2 + 80);
  else
    v5 = *(_QWORD *)(v4 + 32);
  result = ++*(_QWORD *)(v4 + 48);
  *a4 = result;
  *(_QWORD *)(v5 + 432) = result;
  if ( a2 )
  {
    result = *a4;
    *(_QWORD *)(a2 + 104) = *a4;
  }
  return result;
}
