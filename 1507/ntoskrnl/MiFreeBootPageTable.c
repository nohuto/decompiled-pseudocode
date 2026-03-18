/*
 * XREFs of MiFreeBootPageTable @ 0x1407C67D8
 * Callers:
 *     MxZeroBootMappings @ 0x1407C6688 (MxZeroBootMappings.c)
 * Callees:
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int16 v3; // ax
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi
  unsigned __int64 v7; // rdx

  v1 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = *(_WORD *)(v1 + 32);
  if ( v3 )
  {
    if ( v3 != 2 || (*(_QWORD *)(v1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( *(__int64 *)(v1 + 24) < 0 );
    }
    *(_WORD *)(v1 + 32) = 0;
    *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(v1 + 34) = *(_BYTE *)(v1 + 34) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(BugCheckParameter2, 0) << 58);
    v7 = *(_QWORD *)(v1 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(BugCheckParameter2) & 3) << 36);
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 40) = v7 | 0x20000000000000LL;
  }
  return MiLockAndInsertPageInFreeList(v1);
}
