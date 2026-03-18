/*
 * XREFs of MiDeletePartialCloneVad @ 0x14062CC30
 * Callers:
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MiDereferenceExtendInfo @ 0x14010384C (MiDereferenceExtendInfo.c)
 *     MiFreeVadEvents @ 0x1401D75E8 (MiFreeVadEvents.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 *     MiFreeVadEventBitmap @ 0x140623EA4 (MiFreeVadEventBitmap.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiDeletePartialCloneVad(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rsi
  unsigned int SessionId; // eax
  int v7; // ecx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (a2 & 1) != 0 )
    MiFreeVadEventBitmap(CurrentThread->ApcState.Process, a1, 4LL);
  if ( (a2 & 2) != 0 )
    MiFreeLargePageView((__int64)Process, a1, 2LL);
  if ( (a2 & 4) != 0 )
  {
    SessionId = MmGetSessionIdEx(Process);
    MiDereferencePerSessionProtos(**(__int64 ***)(a1 + 72), SessionId);
  }
  if ( (a2 & 8) != 0 )
    ObfDereferenceObject(*(PVOID *)(a1 + 128));
  if ( (a2 & 0x10) != 0 )
    MiRemoveSharedCommitNode(**(_QWORD **)(a1 + 72), (unsigned __int64)Process, 0);
  v7 = *(_DWORD *)(a1 + 48);
  if ( (v7 & 7) == 2 && (v7 & 0x10000) != 0 )
    --MEMORY[0xFFFFF580108042B8];
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && *(__int64 *)(a1 + 120) < 0 )
    MiDereferenceExtendInfo(a1, **(_QWORD **)(a1 + 72));
  MiFreeVadEvents(a1);
  ExFreePoolWithTag((PVOID)a1, 0);
}
