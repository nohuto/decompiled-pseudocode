/*
 * XREFs of ACPICacheCoherencyInterface @ 0x1C006EF90
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C001D4E0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPICacheCoherencyInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  int v4; // ecx

  v2 = *(_QWORD *)(a2 + 24);
  v3 = -1073741637;
  if ( *(_WORD *)(a2 + 16) < 0x28u )
    return (unsigned int)-1073741789;
  if ( *(_WORD *)(a2 + 18) && (*(_DWORD *)(a1 + 904) & 0x1000000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 884) - 2;
    if ( v4 )
    {
      if ( v4 != 1 )
        return v3;
      *(_BYTE *)(v2 + 32) = 0;
    }
    else
    {
      *(_BYTE *)(v2 + 32) = 1;
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = PciConfigPinToLine;
    v3 = 0;
    *(_QWORD *)(v2 + 24) = PciConfigPinToLine;
    *(_DWORD *)v2 = 65576;
  }
  return v3;
}
