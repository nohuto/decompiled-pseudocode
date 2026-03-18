/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x14007B6C8
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400777A4 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400785F4 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14007AA74 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakToII @ 0x14007B78C (FsRtlpOplockBreakToII.c)
 *     FsRtlUninitializeOplock @ 0x1400A101C (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToNone @ 0x1400B563C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14010EEC0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1401343CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401B9498 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9B20 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14061E6A4 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14061E7D8 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x1400918B4 (FsRtlpDoBoost.c)
 */

void __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, char a3)
{
  unsigned int CurrentThread; // ebp
  __int64 v6; // rcx
  int v7; // r9d
  _QWORD *i; // rdi

  if ( a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = a1 + 144;
    }
    else
    {
      if ( !a2 )
      {
LABEL_12:
        for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
          FsRtlpDoBoost(i[5], CurrentThread, a1 + 32, (_DWORD)i + 48, a1);
        return;
      }
      v6 = *(_QWORD *)(a2 + 40);
      v7 = a2 + 48;
    }
    if ( v6 )
    {
      FsRtlpDoBoost(v6, CurrentThread, a1 + 32, v7, a1);
      return;
    }
    goto LABEL_12;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a2 + 40), 1, 1, (void *)a1);
      *(_DWORD *)(a2 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), 1, 1, (void *)a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
