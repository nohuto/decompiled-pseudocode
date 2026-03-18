/*
 * XREFs of ExpWorkerHotAddProcessor @ 0x1403B3244
 * Callers:
 *     <none>
 * Callees:
 *     KeSelectIdealProcessor @ 0x1400937E0 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404AE288 (KeSynchronizeWithDynamicProcessors.c)
 *     ExpCreateSystemThreadForNode @ 0x1404D1234 (ExpCreateSystemThreadForNode.c)
 */

void __fastcall ExpWorkerHotAddProcessor(_QWORD *P)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // r9
  HANDLE v5; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = P[4];
  if ( *(_QWORD *)(v2 + 136) && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 1308), 0) )
  {
    KeQueryNodeActiveAffinity(*(_WORD *)(v2 + 146), &Affinity, 0LL);
    v3 = KeSelectIdealProcessor(v2, (__int64)&Affinity, 0LL);
    v4 = *(unsigned __int16 *)(v2 + 146);
    *(_DWORD *)(v2 + 1304) = v3;
    if ( (int)ExpCreateSystemThreadForNode(&Handle, v2, &ExpWorkerThreadBalanceManager, v4) < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v2 + 1308), 0);
      *P = 0LL;
      P[2] = ExpWorkerHotAddProcessor;
      P[3] = P;
      ExQueueWorkItemEx((ULONG_PTR)P, 1u, 0);
      return;
    }
    ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
    v5 = Handle;
    *(_QWORD *)(v2 + 1296) = Object;
    ZwClose(v5);
  }
  ExFreePoolWithTag(P, 0);
}
