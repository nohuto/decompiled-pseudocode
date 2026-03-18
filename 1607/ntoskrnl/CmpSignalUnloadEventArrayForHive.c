/*
 * XREFs of CmpSignalUnloadEventArrayForHive @ 0x14049FC28
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404806D8 (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
