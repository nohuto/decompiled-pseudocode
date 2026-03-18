/*
 * XREFs of PnpiBiosAddressHandleMemoryFlags @ 0x1C0086804
 * Callers:
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00843F0 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0085F40 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C009F3C4 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PnpiBiosAddressHandleMemoryFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // cl
  __int64 result; // rax

  v3 = a2;
  v4 = *(_BYTE *)(a1 + 5);
  result = v4 & 0x1E;
  if ( (v4 & 0x1E) != 0 )
  {
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
      default:
        LOBYTE(a2) = 2;
        result = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   13,
                   10,
                   (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
                   v4);
        break;
    }
  }
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    *(_WORD *)(v3 + 4) |= 1u;
  return result;
}
