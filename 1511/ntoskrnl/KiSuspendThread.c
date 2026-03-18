/*
 * XREFs of KiSuspendThread @ 0x140030EF4
 * Callers:
 *     KeSuspendThread @ 0x140030E48 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x140096FC0 (KiFreezeSingleThread.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x14002DAC8 (KiDecrementProcessStackCount.c)
 *     KiSignalThreadForApc @ 0x140031480 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140031620 (KiInsertQueueApc.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThread @ 0x14007A4E0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiCancelTimer @ 0x1400916F0 (KiCancelTimer.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char v4; // si
  char v6; // r10
  char v7; // al
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  volatile signed __int32 *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  char v17; // al
  char result; // al
  int v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    v4 = 1;
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v6 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || (v7 = *(_BYTE *)(a1 + 3), (v7 & 0x40) != 0)
        || v7 < 0
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v6 )
        {
          LOBYTE(a3) = 2;
          KiSignalThreadForApc(v3, a1 + 648, a3);
        }
      }
      else
      {
        v8 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v8;
        *(_BYTE *)(a1 + 193) = 1;
        *(_QWORD *)(a1 + 64) = 0LL;
        v9 = *(_QWORD *)(a1 + 208);
        v10 = v9 + 17;
        v11 = v9 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v10 < 5u )
          {
            v12 = *(volatile signed __int32 **)(v10 + 15);
            KiAcquireKobjectLockSafe(v12);
            if ( *(_BYTE *)v10 == 4 )
            {
              v13 = *(_QWORD **)(v10 - 9);
              a2 = v10 - 17;
              v14 = *(_QWORD *)(v10 - 17);
              if ( *(_QWORD *)(v14 + 8) != v10 - 17 || *v13 != a2 )
                __fastfail(3u);
              *v13 = v14;
              *(_QWORD *)(v14 + 8) = v13;
            }
            _InterlockedAnd(v12, 0xFFFFFF7F);
            *(_BYTE *)v10 = 6;
          }
          v10 += 48LL;
        }
        while ( v10 - 17 != v11 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(a2) = 1;
          v15 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, a2) )
          {
            v16 = *(_QWORD *)(a1 + 280);
            if ( v16 > v15 )
            {
              if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
                *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v15;
              else
                *(_QWORD *)(a1 + 280) = v15 - v16;
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
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v17 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v17 |= 4u;
        *(_BYTE *)(a1 + 112) = v17;
        if ( (v17 & 0x20) != 0 )
          KiSignalThread(v3, a1, 256LL, 0LL);
      }
    }
  }
  result = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
