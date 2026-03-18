/*
 * XREFs of KiSuspendThread @ 0x14000CA68
 * Callers:
 *     KeSuspendThread @ 0x14000C978 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x1400D268C (KiFreezeSingleThread.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14000D1B4 (KiInsertQueueApc.c)
 *     KiSignalThread @ 0x14000D8F0 (KiSignalThread.c)
 *     KiCancelTimer @ 0x140066B50 (KiCancelTimer.c)
 *     KiDecrementProcessStackCount @ 0x14009AA60 (KiDecrementProcessStackCount.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char v4; // si
  unsigned int v5; // edi
  char v7; // r10
  char v8; // al
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r14
  volatile signed __int32 *v13; // rsi
  unsigned int v14; // ebp
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  char v20; // al
  char result; // al

  v3 = a2;
  v4 = 0;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v7 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || (v8 = *(_BYTE *)(a1 + 3), (v8 & 0x40) != 0)
        || v8 < 0
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v7 )
        {
          LOBYTE(a3) = 2;
          KiSignalThreadForApc(v3, a1 + 648, a3);
        }
      }
      else
      {
        v9 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v9;
        *(_BYTE *)(a1 + 193) = 1;
        *(_QWORD *)(a1 + 64) = 0LL;
        v10 = *(_QWORD *)(a1 + 208);
        v11 = v10 + 17;
        v12 = v10 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v11 < 5u )
          {
            v13 = *(volatile signed __int32 **)(v11 + 15);
            v14 = 0;
            while ( _interlockedbittestandset(v13, 7u) )
            {
              do
              {
                if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v14);
              }
              while ( (*v13 & 0x80u) != 0 );
            }
            if ( *(_BYTE *)v11 == 4 )
            {
              v15 = *(_QWORD **)(v11 - 9);
              a2 = v11 - 17;
              v16 = *(_QWORD *)(v11 - 17);
              if ( *(_QWORD *)(v16 + 8) != v11 - 17 || *v15 != a2 )
                __fastfail(3u);
              *v15 = v16;
              *(_QWORD *)(v16 + 8) = v15;
            }
            _InterlockedAnd(v13, 0xFFFFFF7F);
            *(_BYTE *)v11 = 6;
          }
          v11 += 48LL;
        }
        while ( v11 - 17 != v12 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(a2) = 1;
          v17 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, a2) )
          {
            v18 = *(_QWORD *)(a1 + 280);
            if ( v18 > v17 )
            {
              if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
                *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v17;
              else
                *(_QWORD *)(a1 + 280) = v17 - v18;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x12u) )
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
        v19 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
          {
            if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v19);
          }
          while ( *(_QWORD *)(a1 + 64) );
        }
        v20 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v20 |= 4u;
        *(_BYTE *)(a1 + 112) = v20;
        if ( (v20 & 0x20) != 0 )
          KiSignalThread(v3, a1, 256LL, 0LL);
      }
    }
    v4 = 1;
  }
  result = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
