/*
 * XREFs of sub_180022A84 @ 0x180022A84
 * Callers:
 *     sub_180021DA8 @ 0x180021DA8 (sub_180021DA8.c)
 *     sub_180021E40 @ 0x180021E40 (sub_180021E40.c)
 * Callees:
 *     __crtLCMapStringW @ 0x1800265FE (__crtLCMapStringW.c)
 */

__int64 __fastcall sub_180022A84(unsigned int a1, unsigned int a2, __int64 a3, int a4, __int64 a5, int a6, int a7)
{
  return _crtLCMapStringW(0LL, a1, a2, a3, a4, a5, a6, a7);
}
