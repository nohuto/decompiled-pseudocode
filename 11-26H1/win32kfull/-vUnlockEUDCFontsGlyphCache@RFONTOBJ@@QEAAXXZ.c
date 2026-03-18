/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1401BB23C
 * Callers:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1401BB14C (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x14007009C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x140070268 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this)
{
  int v2; // eax
  __int64 i; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  RFONTOBJ::vUnlockSystemTTGlyphCache(this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x101) == 1 )
  {
    v2 = *(_DWORD *)(*(_QWORD *)this + 848LL) - 1;
    for ( i = v2; i >= 0; --i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v4);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v4);
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)this + 744LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v4);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v4);
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)this + 736LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v4);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v4);
    }
  }
}
