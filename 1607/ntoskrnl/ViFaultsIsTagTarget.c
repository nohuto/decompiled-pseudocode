/*
 * XREFs of ViFaultsIsTagTarget @ 0x14071165C
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x140710D70 (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x140159DFC (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x140711618 (ViFaultsIsTagPresentInList.c)
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
      ++dword_14072C280;
    else
      ++dword_14072C27C;
  }
  return result;
}
