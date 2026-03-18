/*
 * XREFs of PnpProcessCompletedEject @ 0x140603BA0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PnpInvalidateRelationsInList @ 0x1404A00B8 (PnpInvalidateRelationsInList.c)
 *     IopFreeRelationList @ 0x1404A0570 (IopFreeRelationList.c)
 *     PnpCompleteDeviceEvent @ 0x1404E08EC (PnpCompleteDeviceEvent.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x14060E1DC (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpSetDeviceRemovalSafe @ 0x14060E930 (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x1406178CC (IopWarmEjectDevice.c)
 */

void __fastcall PnpProcessCompletedEject(void *a1)
{
  int v1; // esi
  __int64 v3; // r8
  _QWORD *v4; // rcx
  void **v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  void *v8; // rcx

  v1 = 0;
  if ( *((_DWORD *)a1 + 23) > 1u )
  {
    *((_BYTE *)a1 + 89) = 0;
    v1 = IopWarmEjectDevice(*((_QWORD *)a1 + 7));
  }
  v3 = *((_QWORD *)a1 + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 12) + 24LL))(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL));
  }
  PpDevNodeLockTree(1);
  v4 = *(_QWORD **)a1;
  v5 = (void **)*((_QWORD *)a1 + 1);
  if ( *(void **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  v6 = *((_QWORD *)a1 + 7);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( *((_QWORD *)a1 + 8) )
  {
    if ( *((_BYTE *)a1 + 88) )
      PpProfileMarkAllTransitioningDocksEjected();
    PnpInvalidateRelationsInList(*((_QWORD **)a1 + 8), 4u, 0, 1);
    IopFreeRelationList(*((_QWORD **)a1 + 8));
    *(_QWORD *)(v7 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)a1 + 89) = 0;
  }
  PpDevNodeUnlockTree(1);
  v8 = (void *)*((_QWORD *)a1 + 6);
  if ( v8 )
    PnpCompleteDeviceEvent(v8, v1);
  if ( *((_BYTE *)a1 + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)a1 + 7));
  ObfDereferenceObject(*((PVOID *)a1 + 7));
  ExFreePoolWithTag(a1, 0);
}
