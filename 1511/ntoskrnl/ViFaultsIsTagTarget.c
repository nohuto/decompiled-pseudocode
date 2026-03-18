/*
 * XREFs of ViFaultsIsTagTarget @ 0x1406C55F8
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x1406C4CC8 (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x140150230 (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x1406C55B4 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsIsTagTarget(int a1)
{
  int v1; // r8d
  int v2; // r8d
  __int64 result; // rax

  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(v1, 1819692358) )
    return 0LL;
  result = ViFaultTagsList == &ViFaultTagsList;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    result = ViFaultsIsTagPresentInList(v2);
    if ( (_DWORD)result )
      ++dword_1406E02D8;
    else
      ++dword_1406E02D4;
  }
  return result;
}
