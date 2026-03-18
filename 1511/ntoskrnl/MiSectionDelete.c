/*
 * XREFs of MiSectionDelete @ 0x14047B400
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     MiLogSectionObjectEvent @ 0x140623CDC (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx

  v2 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE2A0, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE2A0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1402FE2A0, v9, (ULONG_PTR)&qword_1402FE2A0);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1402FE298, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
    KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( (v6 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v6 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( (_bittest((const signed __int32 *)(a1 + 56), 0x1Bu) & ((*(_DWORD *)(v4 + 56) & 0x20) == 0)) != 0
    && *(_QWORD *)(v4 + 64) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  if ( (*(_DWORD *)(v4 + 56) & 0x4000000) != 0 )
  {
    v11 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( (_DWORD)v11 == 0x7FFFF )
      v11 = 0xFFFFFFFFLL;
    MiDereferencePerSessionProtos(v4, v11);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v4, v2, v5);
}
