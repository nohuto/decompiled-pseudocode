/*
 * XREFs of CmpRebuildKcbCache @ 0x1403FDA60
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     CmMoveKey @ 0x1405FCFA8 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpSyncKcbCacheForHive @ 0x140601990 (CmpSyncKcbCacheForHive.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpCommitDiscardReplacePost @ 0x14060B950 (CmpCommitDiscardReplacePost.c)
 * Callees:
 *     CmpRebuildKcbCacheFromNode @ 0x14000AEEC (CmpRebuildKcbCacheFromNode.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v7 = 0;
  v6 = -1;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 || (*(_BYTE *)(a1 + 178) & 0x40) != 0 )
    return 1;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v3 != -1 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(v2 + 8))(*(_QWORD *)(a1 + 24), v3, &v6);
      if ( v4 )
      {
        CmpRebuildKcbCacheFromNode(a1, v4);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v6);
        return 1;
      }
    }
  }
  return 0;
}
