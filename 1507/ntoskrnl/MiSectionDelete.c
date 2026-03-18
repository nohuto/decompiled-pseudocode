/*
 * XREFs of MiSectionDelete @ 0x1404B6100
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiLogSectionObjectEvent @ 0x1406A2EF0 (MiLogSectionObjectEvent.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  __int16 v13; // ax
  unsigned int v14; // edx

  v2 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&qword_14034E7A0, 0LL, 0LL, v6);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E7A0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14034E7A0, v10, (ULONG_PTR)&qword_14034E7A0, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14034E798, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
    KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
    v13 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v7 = *(_QWORD *)(a1 + 40);
  if ( (v7 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( (_bittest((const signed __int32 *)(a1 + 56), 0x1Bu) & ((*(_DWORD *)(v4 + 56) & 0x20) == 0)) != 0
    && *(_QWORD *)(v4 + 64) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  if ( (*(_DWORD *)(v4 + 56) & 0x4000000) != 0 )
  {
    v14 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( v14 == 0x7FFFF )
      v14 = -1;
    MiDereferencePerSessionProtos((_QWORD *)v4, v14, v5, v6);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v4, v2);
}
