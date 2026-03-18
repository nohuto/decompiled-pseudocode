/*
 * XREFs of MiFreeLargePageChain @ 0x14022D01C
 * Callers:
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiGetLargePageChain @ 0x1401021A8 (MiGetLargePageChain.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiFreeLargePageChain(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v2; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v4; // edi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = *(volatile signed __int32 **)v1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v4 = 0;
      while ( _interlockedbittestandset64(v1 + 6, 0x3FuLL) )
      {
        do
        {
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
        while ( *((__int64 *)v1 + 3) < 0 );
      }
      MiInsertLargePageInNodeList((__int64)(v1 + 0x16000000000LL) / 48, 0x200uLL, *((_BYTE *)v1 + 34) & 7);
      _InterlockedAnd64((volatile signed __int64 *)v1 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
