/*
 * XREFs of ACPIRangeFilterPICInterrupt @ 0x1C0021A20
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C00673C0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0067730 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRangeFilterPICInterrupt(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r11d
  unsigned int v4; // r8d
  __int64 v5; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r10d

  if ( a1 )
  {
    v2 = a1 + 32;
    v3 = 0;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( 1 )
      {
        v4 = 0;
        if ( *(_DWORD *)(v2 + 4) )
          break;
LABEL_6:
        ++v3;
        v2 += (unsigned int)(32 * (*(_DWORD *)(v2 + 4) - 1) + 40);
        if ( v3 >= *(_DWORD *)(a1 + 28) )
          return 0LL;
      }
      while ( 1 )
      {
        v5 = 32LL * v4;
        if ( *(_BYTE *)(v5 + v2 + 9) == 2 )
        {
          v7 = *(_DWORD *)(v5 + v2 + 16);
          if ( v7 == 2 )
          {
            if ( *(_DWORD *)(v5 + v2 + 20) != 2 )
              goto LABEL_15;
            *(_BYTE *)(v5 + v2 + 9) = 0;
          }
          else
          {
            v8 = *(_DWORD *)(v5 + v2 + 20);
            if ( v8 != 2 )
            {
              if ( v7 >= 2 || v8 <= 2 )
                goto LABEL_5;
LABEL_15:
              *(_DWORD *)(v5 + v2 + 16) = 3;
              goto LABEL_5;
            }
            *(_DWORD *)(v5 + v2 + 20) = 1;
          }
        }
LABEL_5:
        if ( ++v4 >= *(_DWORD *)(v2 + 4) )
          goto LABEL_6;
      }
    }
  }
  return 0LL;
}
