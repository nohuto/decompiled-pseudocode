/*
 * XREFs of ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0031B9C
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z @ 0x1C0027C60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002D428 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C012A3A8 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C0140ABC (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z.c)
 *     NtGdiGetETM @ 0x1C02B3C70 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::flFontType(PFEOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( (*(_DWORD *)(v2 + 48) & 1) != 0 )
    v3 = 4;
  else
    v3 = (*(_DWORD *)(v2 + 48) & 2u) >> 1;
  v4 = *(_DWORD *)(v1 + 12);
  v5 = (2 * (v4 & 1)) | v3;
  v6 = *(_DWORD *)(v2 + 48);
  if ( v6 < 0 )
  {
    v5 |= 0x200000u;
    if ( (v6 & 0x4000) != 0 )
      v5 |= 0x400000u;
    if ( (v6 & 0x4000000) != 0 )
      v5 |= 0x100000u;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v5 |= 0x1000000u;
    if ( (v4 & 0x100) != 0 )
      v5 |= 0x800000u;
  }
  return v5;
}
