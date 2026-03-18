/*
 * XREFs of ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C025A5F4
 * Callers:
 *     GreGetCharSet @ 0x1C0023BD8 (GreGetCharSet.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGotFonts(PDEVOBJ *this)
{
  return ((unsigned __int8)*(_DWORD *)(*(_QWORD *)this + 56LL) >> 6) & 1;
}
