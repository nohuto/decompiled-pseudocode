/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x1403E3390
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1404F5798 (MiSessionObjectDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiReturnPfnReferenceCount @ 0x1400EC1DC (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiUnlinkSessionList @ 0x1401DBC90 (MiUnlinkSessionList.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // r12d
  _QWORD *PteAddress; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rax
  signed __int8 v15; // cf
  __int64 v16; // rdi
  _BYTE v17[16]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v18; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+48h] [rbp-50h]
  int v20; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-40h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList(a1);
    v5 = *(_DWORD *)(a1 + 8);
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v7 = v17;
    v8 = (__int64)PteAddress;
    v9 = 2LL;
    do
    {
      v10 = MI_GET_PAGE_FRAME_FROM_PTE(v8);
      v8 += 8LL;
      *v7++ = 48 * v10 - 0x58000000000LL;
      --v9;
    }
    while ( v9 );
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v20 = 0;
      v18 = &v21;
      v22 = v5;
      v21 = a1;
      v19 = 12;
      EtwTraceKernelEvent((int)&v18, 1, 0x20400000u, 0x24Eu, 4200450);
    }
    MiReleasePtes((__int64)&qword_1402FF7B0, PteAddress, 2u);
    v11 = (__int64 *)v17;
    v12 = 2LL;
    do
    {
      MiReturnPfnReferenceCount(*v11++);
      --v12;
    }
    while ( v12 );
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v14 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE610, 0LL, 0LL);
    v15 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE610, 0LL);
    v16 = v14;
    if ( v15 )
      ExfAcquirePushLockExclusiveEx(&qword_1402FE610, v14, (ULONG_PTR)&qword_1402FE610);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    _bittestandreset((signed __int32 *)qword_1402FF760->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE610);
    KeAbPostRelease((ULONG_PTR)&qword_1402FE610);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
