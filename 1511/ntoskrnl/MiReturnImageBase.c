/*
 * XREFs of MiReturnImageBase @ 0x14041B3BC
 * Callers:
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1404E9FCC (MiFreeRelocations.c)
 * Callees:
 *     MiGetImageBitMapInfo @ 0x140006EF4 (MiGetImageBitMapInfo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1400E94FC (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x1404A6B98 (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(unsigned int *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rsi
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-28h] BYREF
  PRTL_BITMAP v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  if ( (_DWORD)v2 != -1 )
  {
    if ( *((_BYTE *)a1 + 12) == 1 )
    {
      if ( *((_BYTE *)a1 + 13) == 1 )
        MiReturnSystemImageAddress((v2 - 0x8000000) << 16, a1[1] << 16);
    }
    else
    {
      MiGetImageBitMapInfo(a1[2], &BitMapHeader, &v9, 0LL);
      MiZeroCfgSystemWideBitmap((__int64)a1, v9 - ((*a1 + (unsigned __int64)a1[1]) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v4 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE448, 0LL, 0LL);
      v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE448, 0LL);
      v6 = v4;
      if ( v5 )
        ExfAcquirePushLockExclusiveEx(&qword_1402FE448, v4, (ULONG_PTR)&qword_1402FE448);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      if ( v8 )
        RtlClearBits(v8, *a1, a1[1]);
      RtlClearBits(BitMapHeader, *a1, a1[1]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE448);
      KeAbPostRelease((ULONG_PTR)&qword_1402FE448);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
}
