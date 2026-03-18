/*
 * XREFs of ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x140070268
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1401BB23C (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x14007009C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z @ 0x1400D5774 (--$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z.c)
 */

void __fastcall RFONTOBJ::vUnlockSystemTTGlyphCache(RFONTOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 720) & 0x180) == 0x80 && *(_QWORD *)(v2 + 728) )
  {
    if ( (unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<5,RFONT *>() )
    {
      v3 = *(_QWORD *)(*(_QWORD *)this + 728LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v3);
      *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x80u;
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v3);
    }
  }
}
