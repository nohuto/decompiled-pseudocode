/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x14050550C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x140569CC8 (MiSessionObjectDelete.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReturnPfnReferenceCount @ 0x1400E0858 (MiReturnPfnReferenceCount.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiUnlinkSessionList @ 0x14014C870 (MiUnlinkSessionList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

void __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  unsigned int v2; // r13d
  __int64 v3; // rbp
  __int64 v4; // r15
  _BYTE *v5; // r12
  unsigned __int64 PteShadow; // r14
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rsi
  __int16 v15; // ax
  _BYTE v16[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-40h]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF) == 1 )
  {
    MiUnlinkSessionList(a1);
    v2 = *(_DWORD *)(a1 + 8);
    v3 = 2LL;
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = &v16[-v4];
    do
    {
      PteShadow = *(_QWORD *)v4;
      if ( MiPteInShadowRange(v4) )
        PteShadow = MiReadPteShadow(v4, PteShadow);
      *(_QWORD *)&v5[v4] = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v4 += 8LL;
      --v3;
    }
    while ( v3 );
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v19 = v2;
      v17[0] = &v18;
      v18 = a1;
      v17[1] = 12LL;
      EtwTraceKernelEvent((int)v17, 1, 0x20400000u, 0x24Eu, 4200450);
    }
    MiReleasePtes((__int64)&qword_14034FC70, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 2u);
    v7 = (__int64 *)v16;
    v8 = 2LL;
    do
    {
      MiReturnPfnReferenceCount(*v7++);
      --v8;
    }
    while ( v8 );
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&qword_14034EAC0, 0LL, 0LL, v9);
    v13 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034EAC0, 0LL);
    v14 = v11;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx(&qword_14034EAC0, v11, (ULONG_PTR)&qword_14034EAC0, v12);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    _bittestandreset((signed __int32 *)qword_14034FC20->Buffer, v2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAC0);
    KeAbPostRelease((ULONG_PTR)&qword_14034EAC0);
    v15 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v15;
    if ( !v15
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
