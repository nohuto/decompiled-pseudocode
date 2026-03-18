/*
 * XREFs of MiUpdateLargePagePfns @ 0x140230120
 * Callers:
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdateLargePagePfns(__int64 a1, int a2)
{
  _KPROCESS *Process; // r13
  __int64 DemandZeroPte; // rbx
  __int64 v5; // r10
  __int64 v6; // rdx
  _KPROCESS **v7; // rsi
  unsigned int v8; // r15d
  _KPROCESS **v9; // r9
  volatile signed __int32 *v10; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v12; // ebp
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  _KPROCESS **v18; // [rsp+68h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v7 = (_KPROCESS **)(48 * v6 - 0x58000000000LL);
  v8 = 0;
  v9 = v7 + 3072;
  v18 = v7 + 3072;
  v10 = (volatile signed __int32 *)(v7 + 3);
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v12 = 0;
    if ( _interlockedbittestandset64(v10, 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( *(__int64 *)v10 < 0 || _interlockedbittestandset64(v10, 0x3FuLL) );
      v9 = v18;
      v5 = a1;
    }
    v13 = *((_QWORD *)v10 + 2) & 0xFE3FFFF000000000uLL | 0x40000FFFFFFFFDLL;
    *((_QWORD *)v10 - 2) = 0xFFFFF68000000000uLL;
    *(_QWORD *)v10 |= 0x4000000000000000uLL;
    *((_QWORD *)v10 + 2) = v13;
    if ( *((_QWORD *)v10 - 1) == DemandZeroPte )
    {
      v8 = 1;
      v14 = a2 & (unsigned int)dword_14034EBB8 | (((v13 >> 36) & 3) << byte_14034EB98) | ((unsigned __int8)((v13 >> 58) & 0x3F) << byte_14034EB89);
      v15 = 3 * v14;
      *v7 = *(_KPROCESS **)(v5 + 24 * v14 + 16);
      ++*(_QWORD *)(v5 + 8 * v15 + 8);
      *(_QWORD *)(v5 + 8 * v15 + 16) = v7;
    }
    else
    {
      *v7 = Process;
      *((_QWORD *)v10 - 1) = DemandZeroPte;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    ++a2;
    v7 += 6;
    v10 += 12;
  }
  while ( v7 != v9 );
  return v8;
}
