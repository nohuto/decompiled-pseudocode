/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x1400C92DC
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlUninitializeOplock @ 0x1400E3B68 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x1400EAD5C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1400F4010 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140103A90 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401ACF44 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1405F4348 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1405F447C (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x1400C93A0 (FsRtlpDoBoost.c)
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
