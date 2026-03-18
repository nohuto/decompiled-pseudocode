/*
 * XREFs of IopDeleteDevice @ 0x140455DE4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IopCleanupNotifications @ 0x1400D0F40 (IopCleanupNotifications.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopDestroyDeviceNode @ 0x140455E40 (IopDestroyDeviceNode.c)
 *     IoDeleteAllDependencyRelations @ 0x140455F30 (IoDeleteAllDependencyRelations.c)
 */

void __fastcall IopDeleteDevice(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  IoDeleteAllDependencyRelations(a1);
  IopDestroyDeviceNode(*(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) & 0x1000) != 0 )
    IopCleanupNotifications(*(PVOID *)(a1 + 8), (PVOID)a1);
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
}
