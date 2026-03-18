/*
 * XREFs of IopDeleteDevice @ 0x140534BEC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopCleanupNotifications @ 0x14011C4BC (IopCleanupNotifications.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopDestroyDeviceNode @ 0x140534C48 (IopDestroyDeviceNode.c)
 *     IoDeleteAllDependencyRelations @ 0x140534DB0 (IoDeleteAllDependencyRelations.c)
 */

void __fastcall IopDeleteDevice(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  void *v4; // rcx
  void *v5; // rcx

  IoDeleteAllDependencyRelations(a1);
  IopDestroyDeviceNode(*(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) & 0x1000) != 0 )
    IopCleanupNotifications(*(PVOID *)(a1 + 8), (PVOID)a1, v2, v3);
  v4 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    ObfDereferenceObject(v5);
}
