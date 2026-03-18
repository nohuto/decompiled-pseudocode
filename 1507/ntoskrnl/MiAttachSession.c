/*
 * XREFs of MiAttachSession @ 0x140123F38
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  int v1; // esi
  char v2; // cl
  __int64 result; // rax
  unsigned int v4; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = a1;
  MEMORY[0xFFFFF6FB7DBEDF90] = *(_QWORD *)(a1 + 7680);
  v1 = dword_14034EAC8;
  _InterlockedOr(v5, 0);
  v2 = KiTbFlushTimeStamp;
  result = (unsigned int)(KiTbFlushTimeStamp - v1);
  if ( (unsigned int)result <= 2 )
  {
    while ( (v1 & 1) != 0 || (unsigned int)result < 2 )
    {
      if ( (v2 & 1) == 0 )
        return KeFlushTb(1, 0);
      v4 = 0;
      _InterlockedOr(v5, 0);
      while ( _bittest(&KiTbFlushTimeStamp, 0) )
      {
        if ( (++v4 & HvlLongSpinCountMask) != 0
          || (result = (unsigned int)HvlEnlightenments, (HvlEnlightenments & 0x40) == 0) )
        {
          _mm_pause();
        }
        else
        {
          result = HvlNotifyLongSpinWait(v4);
        }
      }
      if ( (v1 & 1) != 0 )
      {
        _InterlockedOr(v5, 0);
        v2 = KiTbFlushTimeStamp;
        result = (unsigned int)(KiTbFlushTimeStamp - v1);
        if ( (unsigned int)result <= 2 )
          continue;
      }
      return result;
    }
  }
  return result;
}
