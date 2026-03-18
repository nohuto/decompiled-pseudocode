/*
 * XREFs of MiReturnImageBase @ 0x14042EDB4
 * Callers:
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14042C2BC (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x14052CC54 (MiFreeRelocations.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     RtlClearBits @ 0x14002D6E0 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     MiGetImageBitMapInfo @ 0x14007CA7C (MiGetImageBitMapInfo.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1400AA66C (MiZeroCfgSystemWideBitmap.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiReturnSystemImageAddress @ 0x1405448F0 (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(unsigned int *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rsi
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-28h] BYREF
  PRTL_BITMAP v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  if ( (_DWORD)v2 != -1 )
  {
    if ( *((_BYTE *)a1 + 12) == 1 )
    {
      if ( *((_BYTE *)a1 + 13) == 1 )
        MiReturnSystemImageAddress((v2 - 0x80000000LL) << 16, a1[1] << 16);
    }
    else
    {
      MiGetImageBitMapInfo(a1[2], &BitMapHeader, &v9, 0LL);
      MiZeroCfgSystemWideBitmap((__int64)a1, v9 - ((*a1 + (unsigned __int64)a1[1]) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326710, 0LL, 0);
      v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326710, 0LL);
      v6 = v4;
      if ( v5 )
        ExfAcquirePushLockExclusiveEx(&qword_140326710, v4, (ULONG_PTR)&qword_140326710);
      if ( v6 )
        v6[26] |= 1u;
      if ( v8 )
        RtlClearBits(v8, *a1, a1[1]);
      RtlClearBits(BitMapHeader, *a1, a1[1]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326710, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326710);
      KeAbPostRelease((ULONG_PTR)&qword_140326710);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
}
