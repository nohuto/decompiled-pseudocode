/*
 * XREFs of DebugService2 @ 0x140167340
 * Callers:
 *     DbgLoadImageSymbols @ 0x1400846BC (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1401306FC (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgCommandString @ 0x140149F10 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x14014C404 (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     DbgUnLoadImageSymbols @ 0x140211200 (DbgUnLoadImageSymbols.c)
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
