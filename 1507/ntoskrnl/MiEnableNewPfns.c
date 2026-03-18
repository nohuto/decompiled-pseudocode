/*
 * XREFs of MiEnableNewPfns @ 0x1402128C8
 * Callers:
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall MiEnableNewPfns(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned int v9; // r15d
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp+8h]

  v2 = 48 * a1 - 0x58000000000LL;
  v3 = a2 - a1;
  v5 = a1;
  if ( a1 < a2 )
  {
    v6 = v2 + 24552;
    do
    {
      if ( (v5 & 0x1FF) != 0 || a2 - v5 < 0x200 )
      {
        MiLockAndInsertPageInFreeList(v2);
        ++v5;
        v2 += 48LL;
        v6 += 48LL;
      }
      else
      {
        v7 = v2 + 24528;
        v8 = v6;
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v9 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
          {
            do
            {
              if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v9);
            }
            while ( *(__int64 *)v8 < 0 );
          }
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
          *(_BYTE *)(v8 + 10) = *(_BYTE *)(v8 + 10) & 0xF8 | 1;
          if ( v7 == v2 )
            MiInsertLargePageInNodeList(v5, 0x200uLL, 1);
          _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          v7 -= 48LL;
          v8 -= 48LL;
        }
        while ( v7 >= v2 );
        v5 += 512LL;
        v2 += 24576LL;
        v6 += 24576LL;
      }
    }
    while ( v5 < a2 );
  }
  MiReturnResidentAvailable(v3);
  _InterlockedExchangeAdd64(&qword_14034F9E8, v3);
}
