/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x14051D8AC
 * Callers:
 *     sub_1404F587C @ 0x1404F587C (sub_1404F587C.c)
 *     PnpGetSystemPdoList @ 0x14051D824 (PnpGetSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
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
