/*
 * XREFs of MiChangePageAttributeBatch @ 0x1400E57F0
 * Callers:
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MiGetZeroedPages @ 0x140077560 (MiGetZeroedPages.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiConvertContiguousPages @ 0x14010FEA0 (MiConvertContiguousPages.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiAbortCombineScan @ 0x1400E59F8 (MiAbortCombineScan.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     KeInvalidateAllCaches @ 0x140139E60 (KeInvalidateAllCaches.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall MiChangePageAttributeBatch(volatile signed __int32 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v8; // esi
  int v9; // r14d
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // ebp
  int v12; // ebp
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // ecx
  char v15; // al
  unsigned int v16; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  volatile signed __int32 *v19; // [rsp+60h] [rbp+8h]

  if ( a1 )
  {
    v4 = &retaddr;
    v19 = a1;
    v5 = a1;
    v6 = 0LL;
    CurrentIrql = 17;
    do
    {
      v8 = 0;
      v9 = 1;
      v10 = v5;
      do
      {
        if ( v8 >= 0x1000 )
          break;
        if ( v8 )
        {
          if ( _interlockedbittestandset64(v10 + 6, 0x3FuLL) )
            break;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v11 = 0;
          while ( _interlockedbittestandset64(v10 + 6, 0x3FuLL) )
          {
            do
            {
              if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v11);
            }
            while ( *((__int64 *)v10 + 3) < 0 );
          }
        }
        if ( (*((_BYTE *)v10 + 34) & 0xC0) != 0xC0 )
          v9 = 0;
        LOBYTE(v4) = MiAbortCombineScan(v10);
        v10 = (volatile signed __int32 *)*((_QWORD *)v10 + 2);
        ++v8;
      }
      while ( v10 );
      v5 = v19;
      if ( !v9 )
      {
        ++dword_14034EBC8;
        HvlFlushTbAllPartitions(a1, v6, a3, a4);
        LOBYTE(v4) = KeFlushTb(3, 2);
        if ( v8 >= dword_14034EBD4 && a2 != 1 )
        {
          ++dword_14034EBCC;
          LOBYTE(v4) = KeInvalidateAllCaches();
        }
      }
      v6 = 0LL;
      v12 = 0;
      v13 = v19;
      if ( !v19 )
        break;
      do
      {
        v14 = *((unsigned __int8 *)v13 + 34);
        v15 = ((_BYTE)a2 << 6) | v14 & 0x3F;
        v16 = v14 >> 6;
        *((_BYTE *)v13 + 34) = v15;
        if ( v8 < dword_14034EBD4 && !v9 && a2 != 1 && v16 != a2 && v16 == 1 )
        {
          ++dword_14034EBD0;
          MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE((__int64)(v13 + 0x16000000000LL) / 48, 1LL, a2);
          v6 = 0LL;
        }
        a1 = v13 + 4;
        *((_QWORD *)v13 + 3) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v12;
        _InterlockedAnd64((volatile signed __int64 *)v13 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v12 == v8 )
        {
          __writecr8(CurrentIrql);
          v5 = *(volatile signed __int32 **)a1;
          v13 = 0LL;
        }
        else
        {
          v13 = *(volatile signed __int32 **)a1;
        }
        LOBYTE(v4) = a3;
        if ( a3 != -1 )
          *(_QWORD *)a1 = a3;
      }
      while ( v13 );
      v19 = v5;
    }
    while ( v5 );
  }
  return (char)v4;
}
