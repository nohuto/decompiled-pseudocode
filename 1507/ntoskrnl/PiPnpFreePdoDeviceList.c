/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x14040AA28
 * Callers:
 *     PnpGetSystemPdoList @ 0x14040A9A0 (PnpGetSystemPdoList.c)
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
