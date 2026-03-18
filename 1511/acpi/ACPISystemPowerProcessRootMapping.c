/*
 * XREFs of ACPISystemPowerProcessRootMapping @ 0x1C0071C8C
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0020F2C (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00164C0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 */

__int64 __fastcall ACPISystemPowerProcessRootMapping(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  signed int i; // edi
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = (unsigned int *)(a2 + 8);
  for ( i = 2; i <= 6; ++i )
  {
    v5 = AcpiSupportedSystemStates;
    if ( _bittest(&v5, i) )
    {
      v9 = 16;
      if ( (int)ACPISystemPowerDetermineSupportedDeviceStates(a1, i, &v9) < 0 )
      {
        *v3 = 4;
      }
      else
      {
        v6 = *v3;
        if ( (int)*v3 <= 4 )
        {
          v7 = v9;
          while ( !_bittest(&v7, v6) )
          {
            if ( (int)++v6 > 4 )
              goto LABEL_8;
          }
          *v3 = v6;
        }
      }
    }
LABEL_8:
    ++v3;
  }
  return 0LL;
}
