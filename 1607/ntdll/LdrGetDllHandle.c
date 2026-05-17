/*
 * XREFs of LdrGetDllHandle @ 0x180012190
 * Callers:
 *     CsrClientConnectToServer @ 0x1800751B0 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrGetDllHandleEx @ 0x180012220 (LdrGetDllHandleEx.c)
 */

__int64 __fastcall LdrGetDllHandle(int a1, int a2, int a3, __int64 a4)
{
  return LdrGetDllHandleEx(1, a1, a2, a3, a4);
}
