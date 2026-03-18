/*
 * XREFs of CmpSignalUnloadEventArrayForHive @ 0x140499190
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
