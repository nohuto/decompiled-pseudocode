/*
 * XREFs of DebugService2 @ 0x14018B410
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140025574 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x140153D04 (DbgLoadImageSymbols.c)
 *     DbgLoadUserImageSymbols @ 0x14017027C (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     DbgCommandString @ 0x140246570 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x140246660 (DbgUnLoadImageSymbols.c)
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
