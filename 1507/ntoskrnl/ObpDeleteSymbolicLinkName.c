/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x14055B27C
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 *     ObShutdownSystem @ 0x1406AAF80 (ObShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall ObpDeleteSymbolicLinkName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v6 )
    {
      PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v21, a4);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v8 = (unsigned __int64 *)(v21 + 120);
      v10 = KeAbPreAcquire(v21 + 120, 0LL, 0LL, v9);
      v12 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8, v10, (ULONG_PTR)v8, v11);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      v13 = v21;
      v14 = (unsigned int)(v4 - 1);
      v15 = (unsigned int)~(1 << (v4 - 1));
      *(_DWORD *)(v6 + 28) &= v15;
      *(_BYTE *)(v14 + v6 + 32) = 0;
      if ( v6 == *(_QWORD *)v13 )
        *(_DWORD *)(v13 + 8) &= v15;
      else
        --*(_DWORD *)(v13 + 4 * v14 + 12);
      _m_prefetchw(v8);
      v16 = *v8;
      v17 = *v8 - 16;
      if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v17 = 0LL;
      if ( (v16 & 2) != 0 || (v18 = *v8, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v17, v16)) )
        ExfReleasePushLock(v8, v15);
      KeAbPostRelease((ULONG_PTR)v8);
      v19 = KeGetCurrentThread();
      v20 = v19->SpecialApcDisable + 1;
      v19->SpecialApcDisable = v20;
      if ( !v20 && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
        KiCheckForKernelApcDelivery();
      PsDereferenceMonitorContextServerSilo(v21);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}
