/*
 * XREFs of ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C029B40C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002CD50 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C029B258 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::vLockSystemTTGlyphCache(RFONTOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v1 + 720) & 0x80u) == 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v3 + 528));
      v4 = *(_QWORD *)this;
      v5 = 0LL;
      *(_DWORD *)(v4 + 720) |= 0x80u;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
    }
  }
}
