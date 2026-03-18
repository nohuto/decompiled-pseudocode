/*
 * XREFs of IopDeleteDevice @ 0x1403F2C78
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopCleanupNotifications @ 0x1401302A4 (IopCleanupNotifications.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopDestroyDeviceNode @ 0x1403F2CD4 (IopDestroyDeviceNode.c)
 *     IoDeleteAllDependencyRelations @ 0x1403F2DD8 (IoDeleteAllDependencyRelations.c)
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
