/*
 * XREFs of MiIsSubsectionClean @ 0x1401DEBCC
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsSubsectionClean(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r9
  unsigned __int8 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v3 + 8LL * *(unsigned int *)(a1 + 44);
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 32LL) )
    return 0LL;
  v7 = 17;
  v5 = 0LL;
  if ( v3 >= v4 )
    return v1;
  while ( (v3 & 0xFFF) == 0 || v7 == 17 )
  {
    if ( v7 != 17 )
      MiUnlockProtoPoolPage(v5, v7);
    v5 = MiCheckProtoPtePageState(v3, &v7);
    if ( v5 )
      break;
    v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_17:
    if ( v3 >= v4 )
      goto LABEL_23;
  }
  if ( !MiLockLeafPage(v3, 0) )
  {
LABEL_16:
    v3 += 8LL;
    goto LABEL_17;
  }
  if ( (MI_READ_PTE_LOCK_FREE(v3) & 1) == 0 )
  {
    if ( *(_WORD *)(v6 + 32) )
    {
      v1 = 2;
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(v6 + 34) & 0x18) != 0 )
    {
      v1 = 1;
      goto LABEL_22;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_16;
  }
  v1 = 2 - ((*(_BYTE *)(v6 + 34) & 0x18) != 0);
LABEL_22:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_23:
  if ( v7 != 17 )
    MiUnlockProtoPoolPage(v5, v7);
  return v1;
}
