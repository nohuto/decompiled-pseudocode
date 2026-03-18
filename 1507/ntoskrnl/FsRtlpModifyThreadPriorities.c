/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x14007262C
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1400726F0 (FsRtlpOplockBreakToII.c)
 *     FsRtlUninitializeOplock @ 0x140122A5C (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToNone @ 0x1401313A8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140133958 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E2F5C (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14066D2C4 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14066D484 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlpDoBoost @ 0x140074438 (FsRtlpDoBoost.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int CurrentThread; // ebp
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v10; // rcx
  _QWORD *i; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = a2;
  if ( (_BYTE)a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = a1 + 144;
    }
    else
    {
      if ( !a2 )
      {
LABEL_12:
        for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
          result = FsRtlpDoBoost(i[5], CurrentThread, (int)a1 + 32, (int)i + 48, a1);
        return result;
      }
      v7 = *(_QWORD *)(a2 + 40);
      v8 = a2 + 48;
    }
    if ( v7 )
      return FsRtlpDoBoost(v7, CurrentThread, (int)a1 + 32, v8, a1);
    goto LABEL_12;
  }
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 48);
    if ( (result & 0x20) != 0 )
    {
      LOBYTE(a3) = 1;
      v10 = *(_QWORD *)(a2 + 40);
      LOBYTE(a2) = 1;
      result = PsBoostThreadIoEx(v10, a2, a3, a1);
      *(_DWORD *)(v4 + 48) &= ~0x20u;
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 144);
    if ( (result & 0x20) != 0 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(a2) = 1;
      result = PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), a2, a3, a1);
      *(_DWORD *)(a1 + 144) &= ~0x20u;
    }
  }
  return result;
}
