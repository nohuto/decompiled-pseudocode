/*
 * XREFs of ACPIModuleFilterStartResources @ 0x1C0046E5C
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0082A70 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIModuleFilterStartResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int i; // r9d
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8

  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      if ( !a3 )
        continue;
      v6 = a3 + 4;
    }
    else
    {
      if ( !a2 )
        continue;
      v6 = a2 + 4;
    }
    if ( !v6 )
      return 0LL;
    v7 = *(_DWORD *)(v6 + 12);
    if ( v7 )
    {
      v8 = v6 + 16;
      v9 = v7;
      do
      {
        if ( ((*(_BYTE *)v8 - 3) & 0xFB) == 0 )
          *(_WORD *)(v8 + 2) &= ~0x100u;
        v8 += 20LL;
        --v9;
      }
      while ( v9 );
    }
  }
  return 0LL;
}
