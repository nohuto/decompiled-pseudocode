/*
 * XREFs of ACPISystemPowerProcessSxD @ 0x1C0071D10
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0020F2C (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     ACPISystemPowerGetSxD @ 0x1C0067CD8 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerProcessSxD(signed __int64 *a1, __int64 a2, _BYTE *a3)
{
  int *v5; // rbx
  int i; // edi
  int v7; // eax
  int v9; // eax
  int v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (int *)(a2 + 4);
  for ( i = 1; i < 7; ++i )
  {
    v7 = AcpiSupportedSystemStates;
    if ( _bittest(&v7, i) )
    {
      if ( (int)ACPISystemPowerGetSxD(a1, i, &v10) >= 0 )
      {
        v9 = v10;
        *a3 = 1;
        if ( v9 > *v5 )
          *v5 = v9;
      }
    }
    else
    {
      *v5 = 0;
    }
    ++v5;
  }
  return 0LL;
}
