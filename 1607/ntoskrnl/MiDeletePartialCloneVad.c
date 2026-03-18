/*
 * XREFs of MiDeletePartialCloneVad @ 0x14066313C
 * Callers:
 *     MiAllocateChildVads @ 0x140527B80 (MiAllocateChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MiDereferenceExtendInfo @ 0x14010EAA4 (MiDereferenceExtendInfo.c)
 *     MiFreeVadEvents @ 0x1401E9280 (MiFreeVadEvents.c)
 *     MiRemoveSharedCommitNode @ 0x14042EA70 (MiRemoveSharedCommitNode.c)
 *     MiFreeVadEventBitmap @ 0x140659D2C (MiFreeVadEventBitmap.c)
 *     MiDereferencePerSessionProtos @ 0x140661CF8 (MiDereferencePerSessionProtos.c)
 *     MiFreeLargePageView @ 0x140662878 (MiFreeLargePageView.c)
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
    MiFreeVadEventBitmap((ULONG_PTR)CurrentThread->ApcState.Process, a1, 4);
  if ( (a2 & 2) != 0 )
    MiFreeLargePageView((__int64)Process, a1, 2);
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
    --*(_QWORD *)(qword_140327F90 + 276840640);
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && *(__int64 *)(a1 + 120) < 0 )
    MiDereferenceExtendInfo(a1, **(_QWORD **)(a1 + 72));
  MiFreeVadEvents(a1);
  ExFreePoolWithTag((PVOID)a1, 0);
}
