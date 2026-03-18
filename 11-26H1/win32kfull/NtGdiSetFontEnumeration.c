/*
 * XREFs of NtGdiSetFontEnumeration @ 0x140326750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiSetFontEnumeration()
{
  __int64 v0; // rdx
  int v1; // ecx

  EngSetLastError(0x32u);
  return *(unsigned int *)(*(_QWORD *)(W32GetSessionState(v1, v0) + 96) + 20348LL);
}
