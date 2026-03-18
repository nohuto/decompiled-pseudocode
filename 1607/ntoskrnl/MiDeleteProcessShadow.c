/*
 * XREFs of MiDeleteProcessShadow @ 0x1401EF1E4
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MmSynchronizeAddressPolicy @ 0x14065BF18 (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002EA00 (MiLockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     KeFlushProcessTb @ 0x140075E7C (KeFlushProcessTb.c)
 *     MiReleaseNonPagedResources @ 0x14013EB1C (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x1401DBB9C (KeMakeUserDirectoryTableBase.c)
 *     MiDeleteTopLevelPage @ 0x1401DF9B4 (MiDeleteTopLevelPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int *v3; // r14
  int v4; // r8d
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  char v11; // r9
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (MiFlags & 0xC00000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 1536);
    if ( v2 )
    {
      v3 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1444));
      if ( !v4 || (v5 = MiLockWorkingSetExclusive(a1 + 1280), (v2 = *(_QWORD *)(a1 + 1536)) != 0) )
      {
        v7 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v13 = MI_READ_PTE_LOCK_FREE(v7);
        v8 = MI_READ_PTE_LOCK_FREE(&v13);
        *(_QWORD *)(a1 + 1536) = 0LL;
        v9 = (v8 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(a1 + 704) = KeMakeUserDirectoryTableBase(0LL);
        if ( v11 != 17 )
        {
          LOBYTE(v10) = v11;
          MiUnlockWorkingSetExclusive(a1 + 1280, v10);
        }
        MiReleasePtes((__int64)&qword_140327870, v7, 1u);
        KeFlushProcessTb(v9 << 12);
        if ( (unsigned int)MiDeleteTopLevelPage(v12, v9) != 3 )
          MiReleaseNonPagedResources((__int64)v3, 1uLL);
      }
      else
      {
        LOBYTE(v6) = v5;
        MiUnlockWorkingSetExclusive(a1 + 1280, v6);
      }
    }
  }
}
