/*
 * XREFs of IopDeleteDriver @ 0x1404F380C
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     KeFlushQueuedDpcs @ 0x1400D4B60 (KeFlushQueuedDpcs.c)
 *     IoUnregisterPriorityCallback @ 0x1401F67FC (IoUnregisterPriorityCallback.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 */

void __fastcall IopDeleteDriver(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rbx

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v2 )
  {
    do
    {
      v7 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v7;
    }
    while ( v7 );
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    IoUnregisterPriorityCallback(a1);
  if ( *(_QWORD *)(a1 + 40) )
  {
    KeFlushQueuedDpcs();
    MmUnloadSystemImage(*(_QWORD *)(a1 + 40));
    PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 2, 0, 38LL, 0LL, 0LL);
  }
  v3 = *(void **)(a1 + 64);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(*(_QWORD *)(a1 + 48) + 48LL);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(*(_QWORD *)(a1 + 48) + 56LL);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
