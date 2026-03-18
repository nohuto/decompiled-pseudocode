/*
 * XREFs of ?bNeedThunk@UMPDOBJ@@QEAAHPEAX@Z @ 0x1C0284F84
 * Callers:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0285084 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C029D450 (-UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C029E170 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::bNeedThunk(UMPDOBJ *this, PVOID a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *((_DWORD *)this + 109) || a2 >= MmSystemRangeStart )
    return 1;
  return v2;
}
