/*
 * XREFs of DebugService2 @ 0x14015B930
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140002318 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x140002788 (DbgLoadImageSymbols.c)
 *     DbgLoadUserImageSymbols @ 0x140142398 (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     DbgCommandString @ 0x1401F7740 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x1401F7830 (DbgUnLoadImageSymbols.c)
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
