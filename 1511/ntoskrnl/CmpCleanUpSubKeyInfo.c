/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x1403DF288
 * Callers:
 *     CmpCommitDeleteKeyUoW @ 0x1403B4CF0 (CmpCommitDeleteKeyUoW.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpRebuildKcbCache @ 0x1403DE8AC (CmpRebuildKcbCache.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmMoveKey @ 0x1405DEE58 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = -1;
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    result = 65528LL;
    *(_WORD *)(a1 + 4) &= 0xFFF8u;
  }
  v3 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v3 == -1
    || (result = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
                   *(_QWORD *)(a1 + 32),
                   v3,
                   &v6)) == 0 )
  {
    *(_WORD *)(a1 + 4) |= 0x40u;
  }
  else
  {
    *(_WORD *)(a1 + 4) &= ~0x40u;
    v4 = *(_DWORD *)(result + 20) + *(_DWORD *)(result + 24);
    v5 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 112) = v4;
    return (*(__int64 (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v6);
  }
  return result;
}
