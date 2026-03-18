/*
 * XREFs of PnpiBiosAddressHandleMemoryFlags @ 0x1C0070404
 * Callers:
 *     PnpiBiosAddressToIoDescriptor @ 0x1C006F148 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C006FCC4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C007DD20 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiBiosAddressHandleMemoryFlags(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_BYTE *)(a1 + 5) & 0x1E;
  switch ( (_DWORD)result )
  {
    case 2:
      *(_WORD *)(a2 + 4) |= 0x20u;
      break;
    case 4:
      *(_WORD *)(a2 + 4) |= 8u;
      break;
    case 6:
      *(_WORD *)(a2 + 4) |= 4u;
      break;
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    *(_WORD *)(a2 + 4) |= 1u;
  return result;
}
