/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x1403FDC28
 * Callers:
 *     CmpRebuildKcbCacheFromNode @ 0x14000AEEC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmMoveKey @ 0x1405FCFA8 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14060D810 (CmpRefreshHive.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E464 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v6 = -1;
  result = *(unsigned int *)(a1 + 4);
  v7 = 0;
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 104), 0x6E494D43u);
    result = 65528LL;
    *(_WORD *)(a1 + 4) &= 0xFFF8u;
  }
  v3 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v3 == -1
    || (result = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
                   *(_QWORD *)(a1 + 24),
                   v3,
                   &v6)) == 0 )
  {
    *(_WORD *)(a1 + 4) |= 0x40u;
  }
  else
  {
    *(_WORD *)(a1 + 4) &= ~0x40u;
    v4 = *(_DWORD *)(result + 20) + *(_DWORD *)(result + 24);
    v5 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 104) = v4;
    return (*(__int64 (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v6);
  }
  return result;
}
