/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1404240F0
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x140423CF0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140423FA0 (RtlpHashStringToAtom.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1405048B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14054E7E4 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  struct _KTHREAD *v6; // rdx
  __int16 v7; // ax
  struct _KTHREAD *v9; // rcx
  __int64 v10; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)ExMapHandleToPointer(*(_QWORD *)(a1 + 16));
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = (*(__int64 *)v3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    _InterlockedExchangeAdd64(v3, 1uLL);
    _InterlockedOr(v11, 0);
    if ( *(_QWORD *)(v4 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v4 + 48), 0LL);
    v6 = KeGetCurrentThread();
    v7 = v6->KernelApcDisable + 1;
    v6->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
      && !v6->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v5;
  }
  else
  {
    v9 = KeGetCurrentThread();
    v10 = (unsigned __int16)++v9->KernelApcDisable;
    if ( !(_WORD)v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
      && !v9->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
}
