/*
 * XREFs of LdrGetDllHandle @ 0x180018950
 * Callers:
 *     CsrClientConnectToServer @ 0x180004320 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x1800F6480 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 */

__int64 __fastcall LdrGetDllHandle(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  return LdrGetDllHandleEx(1, a1, a2, a3, a4);
}
