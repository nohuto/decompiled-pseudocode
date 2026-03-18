/*
 * XREFs of CmpSignalUnloadEventArrayForHive @ 0x1404EE670
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpSignalUnloadEventArrayForHive(__int64 a1)
{
  __int64 i; // rsi

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4088); i = (unsigned int)(i + 1) )
  {
    KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(a1 + 4096) + 8 * i), 0, 0);
    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(a1 + 4096) + 8 * i));
  }
  if ( *(_DWORD *)(a1 + 4088) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 4096), 0);
}
