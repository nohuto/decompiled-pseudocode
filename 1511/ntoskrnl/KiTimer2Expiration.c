/*
 * XREFs of KiTimer2Expiration @ 0x1400332A0
 * Callers:
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x140115330 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiUpdateTimer2Flags @ 0x1400326AC (KiUpdateTimer2Flags.c)
 *     KiInsertTimer2 @ 0x140033028 (KiInsertTimer2.c)
 *     KiRemoveTimer2 @ 0x1400338E0 (KiRemoveTimer2.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KiReadyThread @ 0x140034300 (KiReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400EC2C0 (KiSendClockInterruptToClockOwner.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceReadyThread @ 0x14020E210 (EtwTraceReadyThread.c)
 */

unsigned __int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r14
  __int64 *v7; // rsi
  int i; // edi
  __int64 j; // rbx
  volatile signed __int32 *v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  char v13; // al
  volatile signed __int32 *v14; // rcx
  __int64 **v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  unsigned __int32 k; // eax
  volatile signed __int32 **v21; // rax
  volatile signed __int32 *v22; // r14
  __int64 *v23; // rcx
  __int64 **v24; // rax
  int v25; // edx
  char v26; // r8
  char inserted; // al
  _QWORD *v28; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v29; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v31; // [rsp+78h] [rbp+10h] BYREF
  int v32; // [rsp+88h] [rbp+20h] BYREF

  result = KiNextTimer2DueTime;
  v5 = a2;
  if ( a2 >= KiNextTimer2DueTime )
  {
    v29 = (volatile signed __int32 *)&v28;
    v28 = &v28;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&KiTimer2CollectionLock);
    }
    v7 = (__int64 *)&unk_1402E8908;
    for ( i = 0; i < 4; ++i )
    {
      for ( j = *v7; *v7; j = *v7 )
      {
        v10 = (volatile signed __int32 *)(j - 24 * ((unsigned __int64)(unsigned int)i >> 1));
        if ( v5 < *((_QWORD *)v10 + 6) )
          break;
        KiRemoveTimer2(v10 - 6);
        a2 = *((unsigned int *)v10 - 6);
        for ( k = _InterlockedCompareExchange(v10 - 6, *(v10 - 6) & 0xFFFFF0FF | 0x200, *((_DWORD *)v10 - 6));
              (_DWORD)a2 != k;
              k = _InterlockedCompareExchange(v10 - 6, k & 0xFFFFF0FF | 0x200, k) )
        {
          a2 = k;
        }
        v21 = (volatile signed __int32 **)v29;
        *(_QWORD *)v10 = &v28;
        *((_QWORD *)v10 + 1) = v21;
        if ( *v21 != (volatile signed __int32 *)&v28 )
          __fastfail(3u);
        *v21 = v10;
        v29 = v10;
      }
      v7 += 3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
    v11 = v28;
    while ( v11 != &v28 )
    {
      v12 = (__int64)(v11 - 3);
      v32 = 0;
      v11 = (_QWORD *)*v11;
      while ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) )
      {
        do
          KeYieldProcessorEx(&v32);
        while ( (*(_DWORD *)v12 & 0x80u) != 0 );
      }
      v13 = *(_BYTE *)(v12 + 1);
      v14 = (volatile signed __int32 *)v12;
      if ( (v13 & 2) == 0 )
      {
        v25 = 0;
        if ( (v13 & 8) == 0 )
        {
          v26 = 4;
LABEL_42:
          KiUpdateTimer2Flags(v14, v25, v26);
          continue;
        }
        inserted = KiInsertTimer2(v12, 0, (__int64)&v31);
        v14 = (volatile signed __int32 *)v12;
        if ( inserted )
        {
          v26 = 0;
          v25 = 1;
          goto LABEL_42;
        }
      }
      KiExpireTimer2(v14, a1, v5, a3);
    }
    v15 = *(__int64 ***)(a1 + 11400);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 11400) = 0LL;
      do
      {
        v16 = *((unsigned __int8 *)v15 + 371);
        v17 = (__int64 *)(v15 - 27);
        v18 = *(v15 - 1);
        v15 = (__int64 **)*v15;
        v19 = &v18[6 * v16];
        do
        {
          if ( *((_BYTE *)v18 + 17) < 5u )
          {
            v22 = (volatile signed __int32 *)v18[4];
            KiAcquireKobjectLockSafe(v22);
            if ( *((_BYTE *)v18 + 17) == 4 )
            {
              v23 = (__int64 *)*v18;
              v24 = (__int64 **)v18[1];
              if ( *(__int64 **)(*v18 + 8) != v18 || *v24 != v18 )
                __fastfail(3u);
              *v24 = v23;
              v23[1] = (__int64)v24;
            }
            _InterlockedAnd(v22, 0xFFFFFF7F);
          }
          v18 += 6;
        }
        while ( v18 != v19 );
        *((_WORD *)v17 + 283) = 1;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        {
          LOBYTE(a2) = 1;
          EtwTraceReadyThread(v17, a2, 0LL, 2LL);
        }
        KiReadyThread(a1, v17);
      }
      while ( v15 );
    }
    result = (unsigned __int8)KiHRTimerClockActive;
    if ( !KiHRTimerClockActive )
    {
      result = MEMORY[0xFFFFF78000000008] + KeMaximumIncrement;
      if ( qword_1402E8928 < result )
        return KiSendClockInterruptToClockOwner(MEMORY[0xFFFFF78000000008], qword_1402E8928);
    }
  }
  return result;
}
