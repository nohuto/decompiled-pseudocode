/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x140424810
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x140424320 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140428260 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140428450 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1404C4A6C (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14051B968 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v5; // rdi
  signed __int64 *v6; // rbx
  signed __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 4 * a2;
  --CurrentThread->KernelApcDisable;
  v5 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 0x3FC) != 0 && (v6 = (signed __int64 *)ExpLookupHandleTableEntry(*(_QWORD *)(a1 + 16), v3)) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v6);
        v7 = *v6;
        if ( (*v6 & 1) != 0 )
          break;
        if ( !v7 )
          goto LABEL_9;
        ExpBlockOnLockedHandleEntry(v5, v6, v7);
      }
    }
    while ( v7 != _InterlockedCompareExchange64(v6, v7 - 1, v7) );
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (*v6 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    _InterlockedExchangeAdd64(v6, 1uLL);
    _InterlockedOr(v11, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    KeLeaveCriticalRegion();
    return v9;
  }
  else
  {
LABEL_9:
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
