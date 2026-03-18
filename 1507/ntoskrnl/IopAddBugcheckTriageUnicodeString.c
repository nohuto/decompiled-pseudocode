/*
 * XREFs of IopAddBugcheckTriageUnicodeString @ 0x1401F9C68
 * Callers:
 *     IopAddBugcheckTriageDevice @ 0x1401F9814 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401F991C (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14016F880 (IopIsAddressRangeValid.c)
 */

__int64 __fastcall IopAddBugcheckTriageUnicodeString(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // ebx
  int v3; // r10d
  __int64 v4; // r11
  int v5; // r10d
  __int64 v6; // r11

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( v1 )
  {
    if ( v1 > 0x100u )
    {
      if ( IopIsAddressRangeValid(*(_QWORD *)(a1 + 8), 256LL) )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(v6 + 8), v5);
        return (unsigned int)-2147483643;
      }
    }
    else if ( IopIsAddressRangeValid(*(_QWORD *)(a1 + 8), 8 * (((unsigned __int64)v1 + 7) >> 3)) )
    {
      IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 8), 8 * v3);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v2;
}
