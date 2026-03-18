/*
 * XREFs of MiReplenishFromNodeLargePages @ 0x140102214
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiGetLargePageChain @ 0x1401021A8 (MiGetLargePageChain.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x1401023B8 (MiUnlinkNodeLargePage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiReplenishFromNodeLargePages(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // r11
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // edx
  unsigned __int8 *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int8 CurrentIrql; // bp
  char v19; // al
  _QWORD *v21; // rax
  int v23; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+88h] [rbp+20h]

  v4 = a3;
  v5 = 0;
  v6 = a4;
  v7 = *(_QWORD *)(a1 + 40) + 1336LL * a3;
  v8 = a1;
  if ( (a2 & 2) != 0 )
  {
    v10 = 1;
    v25 = 0;
    v23 = 1;
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v23 = 0;
    v25 = 1;
    v10 = 0;
  }
  v11 = MmNumberOfChannels;
  v12 = 0LL;
  v13 = 0LL;
  if ( a4 == 4 && (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v7 + 1317);
    v13 = v7 + 1317 + (unsigned int)MmNumberOfChannels;
  }
  else
  {
    v6 = 0;
  }
  v14 = 0LL;
  v15 = 4LL * v9;
  while ( 1 )
  {
    if ( v12 )
      v6 = *v12;
    v16 = (_QWORD *)(v7 + 16 * (v15 + v6 + 1LL));
    if ( (_QWORD *)*v16 != v16 )
    {
      v17 = MiUnlinkNodeLargePage(v8, v4, v6, (unsigned int)v9);
      if ( v17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v5);
          }
          while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
        }
        v19 = v25 ^ *(_BYTE *)(v17 + 34);
LABEL_12:
        *(_BYTE *)(v17 + 34) ^= v19 & 7;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        return v17;
      }
      v11 = MmNumberOfChannels;
      v10 = v23;
      v4 = a3;
      v8 = a1;
    }
    v21 = (_QWORD *)(v7 + 16 * (v6 + 4 * (v10 + 2 * v14) + 1));
    if ( (_QWORD *)*v21 != v21 )
    {
      v17 = MiUnlinkNodeLargePage(v8, v4, v6, (unsigned int)v10);
      if ( v17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v5);
          }
          while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
        }
        v19 = v23 ^ *(_BYTE *)(v17 + 34);
        goto LABEL_12;
      }
      v11 = MmNumberOfChannels;
      v10 = v23;
    }
    if ( v12 )
    {
      if ( ++v12 == (unsigned __int8 *)v13 )
      {
        v12 -= v11;
      }
      else
      {
        --v14;
        v15 -= 8LL;
      }
    }
    ++v14;
    v15 += 8LL;
    if ( v14 > 1 )
      return 0LL;
    v9 = v25;
    v4 = a3;
    v8 = a1;
  }
}
