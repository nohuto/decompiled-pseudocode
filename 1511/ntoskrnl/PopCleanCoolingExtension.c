/*
 * XREFs of PopCleanCoolingExtension @ 0x1406333F8
 * Callers:
 *     PopAssociateThermalRequest @ 0x14054C3E0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x1401071B4 (PnpUnregisterPlugPlayNotification.c)
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
