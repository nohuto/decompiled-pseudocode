/*
 * XREFs of ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0299B7C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0299C1C (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     <none>
 */

struct PFE *__fastcall RFONTOBJ::GetEUDCDefaultFontPFE(RFONTOBJ *this, BOOL a2)
{
  BOOL v2; // r9d
  __int64 v3; // rax
  char v4; // cl
  unsigned int v5; // r8d
  __int64 v6; // rcx

  v2 = a2;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
  v4 = *(_BYTE *)(v3 + 44);
  v5 = *(unsigned __int8 *)(v3 + 45) >> 4;
  if ( v4 == 1
    || (unsigned __int8)(v4 - 3) <= 0xFBu
    || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v4 + 2) & 0xF) == 0 )
  {
    return 0LL;
  }
  if ( v5 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v5) )
    v5 = 6;
  if ( a2 )
  {
    v6 = 664LL * v5;
    if ( !*(_QWORD *)((char *)&FontAssocDefaultTable + v6 + 656) )
      v2 = *(_QWORD *)((char *)&FontAssocDefaultTable + v6 + 648) == 0LL;
  }
  return (struct PFE *)*((_QWORD *)&FontAssocDefaultTable + 83 * v5 + v2 + 81);
}
