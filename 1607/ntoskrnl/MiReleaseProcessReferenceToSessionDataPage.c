/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x1404E16A0
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x14053494C (MiSessionObjectDelete.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiReturnPfnReferenceCount @ 0x1400FDD40 (MiReturnPfnReferenceCount.c)
 *     MiUnlinkSessionList @ 0x1401268E4 (MiUnlinkSessionList.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 PteAddress; // rsi
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // r9
  __int64 v11; // r11
  __int64 *v12; // rdi
  __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v15; // rax
  signed __int8 v16; // cf
  _BYTE *v17; // rdi
  char v18; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 *v19; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+48h] [rbp-40h]
  int v21; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v22; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-30h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList(a1);
    v5 = *(_DWORD *)(a1 + 8);
    PteAddress = MiGetPteAddress(a1);
    v7 = PteAddress;
    do
    {
      v8 = MI_GET_PAGE_FRAME_FROM_PTE(v7);
      v7 = v9 + 8;
      *v10 = 48 * v8 - 0x58000000000LL;
    }
    while ( v11 != 1 );
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v21 = 0;
      v19 = &v22;
      v23 = v5;
      v22 = a1;
      v20 = 12;
      EtwTraceKernelEvent((int)&v19, 1, 0x20400000u, 590, 4200450);
    }
    MiReleasePtes((__int64)&qword_140327870, PteAddress, 2u);
    v12 = (__int64 *)&v18;
    v13 = 2LL;
    do
    {
      MiReturnPfnReferenceCount(*v12++);
      --v13;
    }
    while ( v13 );
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v15 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403268D8, 0LL, 0);
    v16 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403268D8, 0LL);
    v17 = v15;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(&qword_1403268D8, v15, (ULONG_PTR)&qword_1403268D8);
    if ( v17 )
      v17[26] |= 1u;
    _bittestandreset((signed __int32 *)qword_140327820->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403268D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403268D8);
    KeAbPostRelease((ULONG_PTR)&qword_1403268D8);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
