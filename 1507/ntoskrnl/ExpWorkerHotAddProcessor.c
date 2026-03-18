/*
 * XREFs of ExpWorkerHotAddProcessor @ 0x1404045E4
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 *     KeSelectIdealProcessor @ 0x14002B7F8 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExpCreateSystemThreadForNode @ 0x1404FA334 (ExpCreateSystemThreadForNode.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14053B960 (KeSynchronizeWithDynamicProcessors.c)
 */

void __fastcall ExpWorkerHotAddProcessor(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // r9
  HANDLE v5; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = BugCheckParameter2[4];
  if ( *(_QWORD *)(v2 + 136) && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 1308), 0) )
  {
    KeQueryNodeActiveAffinity(*(_WORD *)(v2 + 146), &Affinity, 0LL);
    v3 = KeSelectIdealProcessor(v2, (__int64)&Affinity, 0LL);
    v4 = *(unsigned __int16 *)(v2 + 146);
    *(_DWORD *)(v2 + 1304) = v3;
    if ( (int)ExpCreateSystemThreadForNode(&Handle, v2, &ExpWorkerThreadBalanceManager, v4) < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v2 + 1308), 0);
      *BugCheckParameter2 = 0LL;
      BugCheckParameter2[2] = ExpWorkerHotAddProcessor;
      BugCheckParameter2[3] = BugCheckParameter2;
      ExQueueWorkItemEx(BugCheckParameter2, 1, 0LL);
      return;
    }
    ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
    v5 = Handle;
    *(_QWORD *)(v2 + 1296) = Object;
    ZwClose(v5);
  }
  ExFreePoolWithTag(BugCheckParameter2, 0);
}
