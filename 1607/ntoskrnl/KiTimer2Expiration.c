/*
 * XREFs of KiTimer2Expiration @ 0x140059C20
 * Callers:
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x140124018 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KiSendClockInterruptToClockOwner @ 0x14009D67C (KiSendClockInterruptToClockOwner.c)
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1400EA620 (KiUpdateTimer2Flags.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiInsertTimer2 @ 0x1400EC8F8 (KiInsertTimer2.c)
 *     KiRemoveTimer2 @ 0x1400F76D0 (KiRemoveTimer2.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 result; // rax
  int v9; // r12d
  int v10; // eax
  __int64 v11; // r14
  __int64 *v12; // r15
  __int64 i; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // r14
  char v17; // al
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  char inserted; // al
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-48h]
  _QWORD *v24; // [rsp+28h] [rbp-40h] BYREF
  _QWORD **v25; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v27; // [rsp+78h] [rbp+10h] BYREF

  result = KiNextTimer2DueTime;
  if ( a2 >= KiNextTimer2DueTime )
  {
    v25 = &v24;
    v24 = &v24;
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    v9 = 0;
    v10 = 4;
    v23 = 4;
    if ( !a3 )
    {
      v10 = 2;
      v23 = 2;
      v9 = 1;
    }
    v11 = v9;
    if ( v9 < (__int64)v10 )
    {
      v12 = (__int64 *)((char *)&unk_14030E328 + 24 * v9);
      do
      {
        for ( i = *v12; *v12; i = *v12 )
        {
          v14 = (_QWORD *)(i - 24 * ((unsigned __int64)(unsigned int)v9 >> 1));
          if ( a2 < v14[6] )
            break;
          KiRemoveTimer2(v14 - 3);
          KiUpdateTimer2Flags(v14 - 3, 2LL, 1LL);
          v19 = v25;
          if ( *v25 != &v24 )
            __fastfail(3u);
          v14[1] = v25;
          *v14 = &v24;
          *v19 = v14;
          v25 = (_QWORD **)v14;
        }
        ++v9;
        ++v11;
        v12 += 3;
      }
      while ( v11 < v23 );
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
    v15 = v24;
    while ( v15 != &v24 )
    {
      v16 = v15 - 3;
      v15 = (_QWORD *)*v15;
      KiAcquireKobjectLockSafe(v16);
      v17 = *((_BYTE *)v16 + 1);
      v18 = v16;
      if ( (v17 & 2) == 0 )
      {
        v20 = 0LL;
        if ( (v17 & 8) == 0 )
        {
          v22 = 4LL;
          goto LABEL_27;
        }
        inserted = KiInsertTimer2(v16, 0LL, &v27);
        v18 = v16;
        if ( inserted )
        {
          v22 = 0LL;
          v20 = 1LL;
LABEL_27:
          KiUpdateTimer2Flags(v18, v20, v22);
          continue;
        }
      }
      KiExpireTimer2(v18, a1, a2, a4);
    }
    if ( *(_QWORD *)(a1 + 11400) )
      KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
    result = (unsigned __int8)KiHRTimerClockActive;
    if ( !KiHRTimerClockActive )
    {
      result = MEMORY[0xFFFFF78000000008] + KeMaximumIncrement;
      if ( qword_14030E348 < result )
        return KiSendClockInterruptToClockOwner(MEMORY[0xFFFFF78000000008], qword_14030E348);
    }
  }
  return result;
}
