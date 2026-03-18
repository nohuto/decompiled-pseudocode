/*
 * XREFs of MiDeleteProcessShadow @ 0x1401DE720
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmSynchronizeAddressPolicy @ 0x140626748 (MmSynchronizeAddressPolicy.c)
 * Callees:
 *     KeFlushProcessTb @ 0x140005994 (KeFlushProcessTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x1401CBC30 (KeMakeUserDirectoryTableBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTopLevelPage @ 0x1401CF84C (MiDeleteTopLevelPage.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int *v3; // r15
  int v4; // r8d
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // si
  __int64 *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  if ( (MiFlags & 0x600000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 1528);
    if ( v2 )
    {
      v3 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1460));
      if ( v4 )
      {
        v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
        v2 = *(_QWORD *)(a1 + 1528);
        v8 = v5;
        if ( !v2 )
        {
          LOBYTE(v6) = v5;
          MiUnlockWorkingSetExclusive(a1 + 1280, v6, v7);
          return;
        }
      }
      else
      {
        v8 = 17;
      }
      v9 = (__int64 *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v15 = MI_READ_PTE_LOCK_FREE(v9);
      v10 = MI_READ_PTE_LOCK_FREE(&v15);
      *(_QWORD *)(a1 + 1528) = 0LL;
      v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
      *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(0LL);
      if ( v8 != 17 )
      {
        LOBYTE(v12) = v8;
        MiUnlockWorkingSetExclusive(a1 + 1280, v12, v13);
      }
      MiReleasePtes((__int64)&qword_1402FF7B0, v9, 1u);
      KeFlushProcessTb((_DWORD)v11 << 12);
      if ( (unsigned int)MiDeleteTopLevelPage(v14, v11) != 3 )
        MiReleaseNonPagedResources((__int64)v3, 1uLL);
    }
  }
}
