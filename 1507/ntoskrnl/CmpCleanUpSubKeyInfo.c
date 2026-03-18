/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x140448E64
 * Callers:
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x1404F3380 (CmpCommitDeleteKeyUoW.c)
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
