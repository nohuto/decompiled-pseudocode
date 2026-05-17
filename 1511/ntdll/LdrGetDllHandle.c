/*
 * XREFs of LdrGetDllHandle @ 0x1800110A0
 * Callers:
 *     CsrClientConnectToServer @ 0x180051EF0 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x1800F5D60 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 */

__int64 __fastcall LdrGetDllHandle(int a1, int a2, int a3, __int64 a4)
{
  return LdrGetDllHandleEx(1, a1, a2, a3, a4);
}
