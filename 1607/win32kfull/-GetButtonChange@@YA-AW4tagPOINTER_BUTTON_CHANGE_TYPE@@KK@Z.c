/*
 * XREFs of ?GetButtonChange@@YA?AW4tagPOINTER_BUTTON_CHANGE_TYPE@@KK@Z @ 0x1C01C0D5C
 * Callers:
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C109C (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetButtonChange(int a1, int a2)
{
  unsigned int v2; // r9d

  v2 = 0;
  if ( a1 != a2 )
  {
    if ( (a1 & 0x10) == 0 && (a2 & 0x10) != 0 )
    {
      return 1;
    }
    else if ( (a1 & 0x10) != 0 && (a2 & 0x10) == 0 )
    {
      return 2;
    }
    else if ( (a1 & 0x20) == 0 && (a2 & 0x20) != 0 )
    {
      return 3;
    }
    else if ( (a1 & 0x20) != 0 && (a2 & 0x20) == 0 )
    {
      return 4;
    }
  }
  return v2;
}
