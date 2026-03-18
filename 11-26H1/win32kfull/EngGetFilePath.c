/*
 * XREFs of EngGetFilePath @ 0x140312850
 * Callers:
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140349ED4 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

BOOL __stdcall EngGetFilePath(HANDLE h, WCHAR (*pDest)[261])
{
  char *v2; // r8

  v2 = (char *)*((_QWORD *)h + 10);
  return v2 && (int)StringCchCopyW((char *)pDest, 261LL, v2) >= 0;
}
