/*
 * XREFs of VF_MARK_SCATTER_GATHER_LIST @ 0x14073A944
 * Callers:
 *     VfBuildMdlFromScatterGatherList @ 0x14073AF7C (VfBuildMdlFromScatterGatherList.c)
 *     ViScatterGatherCallback @ 0x14073F15C (ViScatterGatherCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VF_MARK_SCATTER_GATHER_LIST(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 48) = result;
    *(_QWORD *)(a1 + 8) = -559026163LL;
  }
  return result;
}
