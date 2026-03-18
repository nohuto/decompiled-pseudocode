/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x140495A9C
 * Callers:
 *     sub_14045751C @ 0x14045751C (sub_14045751C.c)
 *     PnpGetSystemPdoList @ 0x140495A14 (PnpGetSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
