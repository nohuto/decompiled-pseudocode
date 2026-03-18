/*
 * XREFs of _PopInternalError @ 0x1401E6AE0
 * Callers:
 *     PopWriteHiberPages @ 0x1403A0160 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1403A1C80 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
