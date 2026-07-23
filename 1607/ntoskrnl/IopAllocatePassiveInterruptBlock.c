/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x14062D0F8
 * Callers:
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159800 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopFindPassiveInterruptBlock @ 0x1401CD8E8 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401CD948 (IopInsertPassiveInterruptBlock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, __int128 *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  int inserted; // edi
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  __int128 v9; // xmm0
  int v10; // eax
  int v11; // eax
  char v13; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 == 1 && ((v4 = a1[2]) == 0 || v4 == 3) )
  {
    v5 = a1[3];
    if ( IopFindPassiveInterruptBlock(v5) )
    {
      return 0;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x6269704Bu);
      v8 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xC8uLL);
        v9 = *a2;
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
        *(_DWORD *)(v8 + 16) = a1[2];
        *(_DWORD *)(v8 + 20) = v5;
        v10 = a1[6];
        *(_OWORD *)(v8 + 40) = v9;
        *(_DWORD *)(v8 + 32) = v10;
        v11 = a1[2];
        if ( v11 )
        {
          if ( v11 == 3 )
            *(_BYTE *)(v8 + 28) = 0;
        }
        else
        {
          *(_DWORD *)(v8 + 24) = a1[16];
          *(_BYTE *)(v8 + 28) = off_1402F2490();
        }
        KeInitializeEvent((PRKEVENT)(v8 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v8 + 104), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v8);
        *(_QWORD *)(v8 + 56) = 0LL;
        *(_QWORD *)(v8 + 72) = 0LL;
        *(_QWORD *)(v8 + 88) = IopPassiveInterruptWorker;
        *(_QWORD *)(v8 + 96) = v8;
        *(_BYTE *)(v8 + 105) = 2;
        inserted = IopInsertPassiveInterruptBlock(v8, &v13);
        if ( inserted < 0 || !v13 )
          ExFreePoolWithTag((PVOID)v8, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)inserted;
}
