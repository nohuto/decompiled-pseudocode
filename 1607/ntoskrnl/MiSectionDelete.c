/*
 * XREFs of MiSectionDelete @ 0x14042D110
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiLogSectionObjectEvent @ 0x1406593F0 (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // r14
  _BYTE *v8; // rax
  _BYTE *v9; // rbp
  __int64 v10; // rdx

  v2 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403265A0, 0LL, 0);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403265A0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_1403265A0, v8, (ULONG_PTR)&qword_1403265A0);
    if ( v9 )
      v9[26] |= 1u;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140326598, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403265A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403265A0);
    KeAbPostRelease((ULONG_PTR)&qword_1403265A0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( (_bittest((const signed __int32 *)(a1 + 56), 0x1Bu) & ((*(_DWORD *)(v4 + 56) & 0x20) == 0)) != 0
    && *(_QWORD *)(v4 + 64) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  if ( (*(_DWORD *)(v4 + 56) & 0x4000000) != 0 )
  {
    v10 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( (_DWORD)v10 == 0x7FFFF )
      v10 = 0xFFFFFFFFLL;
    MiDereferencePerSessionProtos(v4, v10);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v4, v2);
}
