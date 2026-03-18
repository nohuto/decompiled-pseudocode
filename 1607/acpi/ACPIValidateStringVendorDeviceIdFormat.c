/*
 * XREFs of ACPIValidateStringVendorDeviceIdFormat @ 0x1C00803DC
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C0080000 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C008EEB4 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C008F2C0 (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIValidateStringVendorDeviceIdFormat(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // r9
  char v5; // cl
  unsigned __int8 v6; // cl
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // cl
  unsigned __int64 v10; // rax
  __int64 v11; // rcx

  if ( a2 - 7 <= 1 )
  {
    v3 = 0;
    v4 = 3;
    if ( a2 != 7 )
      v4 = 4;
    while ( 1 )
    {
      v5 = *(_BYTE *)(v3 + a1);
      if ( (unsigned __int8)(v5 - 97) > 0x19u )
      {
        v9 = v5 - 48;
        if ( v9 > 0x2Au )
          break;
        v10 = v9;
        v11 = 0x7FFFFFE03FFLL;
        if ( !_bittest64(&v11, v10) )
          break;
      }
      if ( ++v3 >= v4 )
      {
        while ( v3 < a2 )
        {
          v6 = *(_BYTE *)(v3 + a1) - 48;
          if ( v6 > 0x36u )
            return 0;
          v7 = v6;
          v8 = 0x7E0000007E03FFLL;
          if ( !_bittest64(&v8, v7) )
            return 0;
          ++v3;
        }
        return 1;
      }
    }
  }
  return 0;
}
