/*
 * XREFs of PnpProcessCompletedEject @ 0x14062DF9C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PnpCompleteDeviceEvent @ 0x1403EFD70 (PnpCompleteDeviceEvent.c)
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 *     PnpInvalidateRelationsInList @ 0x1404C54CC (PnpInvalidateRelationsInList.c)
 *     IopFreeRelationList @ 0x1404C59AC (IopFreeRelationList.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1406425E8 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpSetDeviceRemovalSafe @ 0x140642D3C (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x14064C5EC (IopWarmEjectDevice.c)
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
