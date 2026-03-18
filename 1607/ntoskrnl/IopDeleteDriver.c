/*
 * XREFs of IopDeleteDriver @ 0x140545C94
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     KeFlushQueuedDpcs @ 0x1400841B4 (KeFlushQueuedDpcs.c)
 *     IoUnregisterPriorityCallback @ 0x1401C9328 (IoUnregisterPriorityCallback.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmUnloadSystemImage @ 0x140545D68 (MmUnloadSystemImage.c)
 */

void __fastcall IopDeleteDriver(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v3;
    }
    while ( v3 );
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    IoUnregisterPriorityCallback(a1);
  if ( *(_QWORD *)(a1 + 40) )
  {
    KeFlushQueuedDpcs();
    MmUnloadSystemImage(*(_QWORD *)(a1 + 40));
    PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 2, 0, 38LL, 0LL, 0LL);
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(*(_QWORD *)(a1 + 48) + 48LL);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(*(_QWORD *)(a1 + 48) + 56LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
