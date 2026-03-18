/*
 * XREFs of MiDeletePartialCloneVad @ 0x1406AA6A8
 * Callers:
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     MiDereferenceExtendInfo @ 0x140133614 (MiDereferenceExtendInfo.c)
 *     MiFreeVadEvents @ 0x14021A2EC (MiFreeVadEvents.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 */

void __fastcall MiDeletePartialCloneVad(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  struct _KPROCESS *Process; // rsi
  __int64 *VadWakeList; // rbp
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned int SessionId; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a2 & 1) != 0 )
  {
    VadWakeList = MiGetVadWakeList(a1, 4);
    v8 = 0;
    if ( VadWakeList )
    {
      v9 = VadWakeList[2];
      LOBYTE(v8) = (v9 & 0x3F) != 0;
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, 8 * (v8 + (v9 >> 6)) + 40);
      ExFreePoolWithTag(VadWakeList, 0);
    }
  }
  if ( (a2 & 2) != 0 )
    MiFreeLargePageView((__int64)Process, a1, 2);
  if ( (a2 & 4) != 0 )
  {
    SessionId = MmGetSessionIdEx(Process);
    MiDereferencePerSessionProtos(**(_QWORD ***)(a1 + 72), SessionId, v11, v12);
  }
  if ( (a2 & 8) != 0 )
    ObfDereferenceObject(*(PVOID *)(a1 + 128));
  if ( (a2 & 0x10) != 0 )
    MiRemoveSharedCommitNode(**(_QWORD **)(a1 + 72), (__int64)Process, 0, a4);
  v13 = *(_DWORD *)(a1 + 48);
  if ( (v13 & 7) == 2 && (v13 & 0x20000) != 0 )
    --MEMORY[0xFFFFF58010804260];
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && *(__int64 *)(a1 + 120) < 0 )
    MiDereferenceExtendInfo(a1, **(_QWORD **)(a1 + 72), a3, a4);
  MiFreeVadEvents(a1);
  ExFreePoolWithTag((PVOID)a1, 0);
}
