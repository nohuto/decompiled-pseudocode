/*
 * XREFs of PopCleanCoolingExtension @ 0x14066B9D4
 * Callers:
 *     PopAssociateThermalRequest @ 0x14056CB00 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140111FA4 (PnpUnregisterPlugPlayNotification.c)
 */

void __fastcall PopCleanCoolingExtension(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    PnpUnregisterPlugPlayNotification(v2, 1);
  if ( *(_BYTE *)(a1 + 64) )
    (*(void (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 96));
  ExFreePoolWithTag((PVOID)a1, 0x6C6F4350u);
}
