/*
 * XREFs of ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C012DA9C
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C025A604 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C02B6618 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     bInitFontTables @ 0x1C037E1D0 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall FHMEMOBJ::FHMEMOBJ(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  _DWORD *v7; // rcx

  *(_QWORD *)a1 = a2;
  if ( a4 > 0x1FFFFFFA )
    *a2 = 0LL;
  else
    **(_QWORD **)a1 = PALLOCMEM2(8 * a4 + 40, 1935763527LL, 1);
  v7 = **(_DWORD ***)a1;
  *(_QWORD *)(a1 + 8) = v7;
  if ( v7 )
  {
    *v7 = 1213415752;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a4;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 0;
    memset((void *)(*(_QWORD *)(a1 + 8) + 40LL), 0, 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = 0LL;
  }
  return a1;
}
