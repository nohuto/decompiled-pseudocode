/*
 * XREFs of ACPIFanFSTCallback @ 0x1C003B490
 * Callers:
 *     ACPIFanLoop @ 0x1C003B5A8 (ACPIFanLoop.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C0016B08 (AMLIEvalPkgDataElement.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     AcpiDiagTraceFanStatusChange @ 0x1C00348E8 (AcpiDiagTraceFanStatusChange.c)
 *     ACPIFanLoop @ 0x1C003B5A8 (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r14d
  bool v8; // bp
  int v9; // eax
  int v10; // ecx
  _DWORD v12[12]; // [rsp+20h] [rbp-48h] BYREF

  v7 = 0x40000000;
  memset(v12, 0, 0x28uLL);
  v8 = 0;
  if ( a2 >= 0 && *(_WORD *)(a3 + 2) == 4 && **(_DWORD **)(a3 + 32) >= 3u )
  {
    v9 = AMLIEvalPkgDataElement(a3, 1u, v12);
    v8 = v9 >= 0;
    if ( v9 >= 0 && HIWORD(v12[0]) == 1 )
    {
      v10 = v12[4];
      if ( v12[4] != *(_DWORD *)(a4 + 272) )
      {
        *(_DWORD *)(a4 + 272) = v12[4];
        *(_BYTE *)(a4 + 276) = v10 != 0;
        AcpiDiagTraceFanStatusChange(a4);
        v7 = 1073741826;
      }
    }
  }
  if ( a2 >= 0 )
  {
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( v8 )
  {
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs((__int64)v12, 1u);
  }
  return ACPIFanLoop(a4, v7, 0LL);
}
