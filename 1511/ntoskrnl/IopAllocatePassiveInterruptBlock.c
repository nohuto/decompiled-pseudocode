/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x140602CC8
 * Callers:
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140143840 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopFindPassiveInterruptBlock @ 0x1401BF514 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401BF574 (IopInsertPassiveInterruptBlock.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, __int128 *a2)
{
  unsigned int v4; // esi
  int inserted; // edi
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx
  char v8; // al
  __int128 v9; // xmm0
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 1 || a1[2] )
  {
    return (unsigned int)-1073741585;
  }
  else
  {
    v4 = a1[3];
    if ( IopFindPassiveInterruptBlock(v4) )
    {
      return 0;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x6269704Bu);
      v7 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xC0uLL);
        *(_QWORD *)(v7 + 8) = v7;
        *(_QWORD *)v7 = v7;
        *(_DWORD *)(v7 + 20) = a1[16];
        *(_DWORD *)(v7 + 16) = v4;
        *(_DWORD *)(v7 + 28) = a1[6];
        v8 = off_1402D27F0();
        v9 = *a2;
        *(_BYTE *)(v7 + 24) = v8;
        *(_OWORD *)(v7 + 32) = v9;
        KeInitializeEvent((PRKEVENT)(v7 + 160), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v7 + 96), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v7);
        *(_QWORD *)(v7 + 48) = 0LL;
        *(_QWORD *)(v7 + 64) = 0LL;
        *(_QWORD *)(v7 + 80) = IopPassiveInterruptWorker;
        *(_QWORD *)(v7 + 88) = v7;
        *(_BYTE *)(v7 + 97) = 2;
        inserted = IopInsertPassiveInterruptBlock(v7, &v11);
        if ( inserted < 0 || !v11 )
          ExFreePoolWithTag((PVOID)v7, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)inserted;
}
