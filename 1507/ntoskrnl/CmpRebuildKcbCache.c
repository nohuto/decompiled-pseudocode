/*
 * XREFs of CmpRebuildKcbCache @ 0x1404484A8
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKcbCacheForHive @ 0x14065914C (CmpSyncKcbCacheForHive.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 * Callees:
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 */

char __fastcall CmpRebuildKcbCache(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v7 = -1;
  if ( (v2 & 0x10) != 0 || (*(_BYTE *)(a1 + 186) & 0x40) != 0 )
    return 1;
  if ( (v2 & 8) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = *(unsigned int *)(a1 + 40);
      if ( (_DWORD)v4 != -1 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(v3 + 8))(*(_QWORD *)(a1 + 32), v4, &v7);
        if ( v5 )
        {
          CmpCleanUpSubKeyInfo(a1);
          CmpCleanUpKcbValueCache(a1);
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(v5 + 36);
          *(_QWORD *)(a1 + 104) = *(unsigned int *)(v5 + 40);
          *(_QWORD *)(a1 + 168) = *(_QWORD *)(v5 + 4);
          *(_WORD *)(a1 + 176) = *(_WORD *)(v5 + 52);
          *(_WORD *)(a1 + 178) = *(_WORD *)(v5 + 60);
          *(_DWORD *)(a1 + 180) = *(_DWORD *)(v5 + 64);
          *(_DWORD *)(a1 + 184) ^= (*(_DWORD *)(a1 + 184) ^ *(unsigned __int16 *)(v5 + 54)) & 0xF;
          *(_DWORD *)(a1 + 184) ^= ((unsigned __int8)*(_DWORD *)(a1 + 184) ^ (unsigned __int8)*(_WORD *)(v5 + 54)) & 0xF0;
          *(_BYTE *)(a1 + 185) = *(_BYTE *)(v5 + 55);
          *(_WORD *)(a1 + 186) = *(_WORD *)(v5 + 2);
          (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v7);
          return 1;
        }
      }
    }
  }
  return 0;
}
