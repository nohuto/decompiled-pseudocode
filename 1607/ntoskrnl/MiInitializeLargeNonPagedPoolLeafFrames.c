/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x140094FC0
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 CurrentIrql; // r14
  __int16 v6; // r9
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 result; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h]

  v2 = a1;
  v3 = 48 * a2 - 0x58000000000LL;
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  __writecr8(2uLL);
  v7 = v6 & 0x1FF;
  if ( v7 < 0x200 )
  {
    v8 = 512 - v7;
    do
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0 );
      }
      *(_QWORD *)(v3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      v9 = *(_QWORD *)(v3 + 24) & 0xC000000000000001uLL;
      *(_QWORD *)(v3 + 8) = v2;
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 24) = v9 | 1;
      *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0xF8 | 6;
      *(_WORD *)(v3 + 32) = 1;
      *(_QWORD *)(v3 + 40) = v4 | *(_QWORD *)(v3 + 40) & 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 += 48LL;
      v2 += 8LL;
      --v8;
    }
    while ( v8 );
    LOBYTE(CurrentIrql) = v12;
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
