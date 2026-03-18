/*
 * XREFs of _PopInternalError @ 0x140233CCC
 * Callers:
 *     PopWriteHiberPages @ 0x1403F2D9C (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1403F4A20 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
