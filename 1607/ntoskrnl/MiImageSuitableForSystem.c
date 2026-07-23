/*
 * XREFs of MiImageSuitableForSystem @ 0x1404B2AA0
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageSuitableForSystem(__int64 a1, _DWORD *a2)
{
  if ( **(_QWORD **)(a1 + 96) )
  {
    *a2 = 1;
    if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
      return *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
