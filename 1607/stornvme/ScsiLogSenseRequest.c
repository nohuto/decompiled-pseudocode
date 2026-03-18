/*
 * XREFs of ScsiLogSenseRequest @ 0x1C000BA5C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiLogSenseRequest(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int8 v5; // r9

  v4 = a2;
  if ( (a3[1] & 1) == 0 && (a3[2] & 0xC0) == 0x40 )
  {
    v5 = a3[2] & 0x3F;
    if ( v5 <= 0x2Fu )
    {
      a2 = 0x800000002001LL;
      if ( _bittest64(&a2, v5) )
      {
        if ( !a3[3] )
        {
          switch ( v5 )
          {
            case 0u:
              return LogSenseSupportedLogPages(a1, v4);
            case 0xDu:
              return LogSenseTemperature(a1, v4);
            case 0x2Fu:
              return LogSenseInformationalExceptions(a1, v4);
          }
        }
      }
    }
  }
  LOBYTE(a4) = 36;
  LOBYTE(a2) = 6;
  NVMeSetSenseData(v4, a2, a3, a4);
  return 3238002694LL;
}
