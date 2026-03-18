/*
 * XREFs of DebugService2 @ 0x140166DD0
 * Callers:
 *     DbgLoadImageSymbols @ 0x1400B1044 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14013018C (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgCommandString @ 0x1401499A0 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x14014BE94 (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     DbgUnLoadImageSymbols @ 0x1402113D4 (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DebugService2(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return result;
}
