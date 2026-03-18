/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x14067DB34
 * Callers:
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1401718C0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopFindPassiveInterruptBlock @ 0x1401FAE24 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1401FAEE4 (IopInsertPassiveInterruptBlock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
        v8 = off_140321940();
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
