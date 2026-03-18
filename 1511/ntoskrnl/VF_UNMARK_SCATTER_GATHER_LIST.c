/*
 * XREFs of VF_UNMARK_SCATTER_GATHER_LIST @ 0x1406BA154
 * Callers:
 *     VfBuildMdlFromScatterGatherList @ 0x1406BA6D0 (VfBuildMdlFromScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VF_UNMARK_SCATTER_GATHER_LIST(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == -559026163LL )
  {
    if ( a2 )
    {
      result = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a1 + 8) = result;
    }
  }
  return result;
}
