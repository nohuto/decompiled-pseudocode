/*
 * XREFs of PopCleanCoolingExtension @ 0x1406B202C
 * Callers:
 *     PopAssociateThermalRequest @ 0x1405C3744 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140138BC0 (PnpUnregisterPlugPlayNotification.c)
 */

void __fastcall PopCleanCoolingExtension(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    PnpUnregisterPlugPlayNotification(v5, 1, a3, a4);
  if ( *(_BYTE *)(a1 + 64) )
    (*(void (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 96));
  ExFreePoolWithTag((PVOID)a1, 0x6C6F4350u);
}
