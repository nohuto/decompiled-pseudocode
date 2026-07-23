/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140486BA4
 * Callers:
 *     PnpGetSystemPdoList @ 0x140486B1C (PnpGetSystemPdoList.c)
 *     sub_1404D8808 @ 0x1404D8808 (sub_1404D8808.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObject(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
