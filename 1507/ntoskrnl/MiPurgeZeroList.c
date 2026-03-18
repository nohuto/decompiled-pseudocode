/*
 * XREFs of MiPurgeZeroList @ 0x140144E54
 * Callers:
 *     MiFinishResume @ 0x140144E14 (MiFinishResume.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 MiPurgeZeroList()
{
  __int64 result; // rax
  unsigned int v1; // ebp
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v6; // r14d

  result = (unsigned int)dword_14034EBBC;
  v1 = 0;
  if ( dword_14034EBBC )
  {
    v2 = (unsigned __int64 *)(qword_1403542C0 + 16);
    do
    {
      v3 = *v2;
      if ( *v2 != 0xFFFFFFFFFLL )
      {
        do
        {
          v4 = 48 * v3 - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v6 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v6);
            }
            while ( *(__int64 *)(v4 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v4 + 34) & 7) == 0 && (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFELL )
          {
            MiUnlinkFreeOrZeroedPage(v3, 0LL);
            MiInsertPageInFreeOrZeroedList(v3, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          v3 = *v2;
        }
        while ( *v2 != 0xFFFFFFFFFLL );
        result = (unsigned int)dword_14034EBBC;
      }
      ++v1;
      v2 += 5;
    }
    while ( v1 < (unsigned int)result );
  }
  byte_14034F140 = 0;
  return result;
}
