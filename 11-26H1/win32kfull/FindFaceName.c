/*
 * XREFs of FindFaceName @ 0x1400CA5C0
 * Callers:
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400CA000 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall FindFaceName(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9

  v3 = a1;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v5 = *(_QWORD *)(v4 + 19696);
  v6 = *(_QWORD *)(v4 + 19704);
  while ( v5 < v6 )
  {
    if ( (unsigned __int16)*(_DWORD *)v5 == v3 )
      return (const wchar_t *)(v6 + 2LL * *(unsigned __int16 *)(v5 + 2));
    v5 += 4LL;
  }
  return &pszFormat;
}
