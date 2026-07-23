/*
 * XREFs of PpmInstallNewIdleDomains @ 0x140200AAC
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 */

__int64 __fastcall PpmInstallNewIdleDomains(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // esi

  v2 = *(_QWORD *)(a1 + 23808);
  v3 = 0;
  if ( v2 && (v5 = *(_DWORD *)(v2 + 28), v5 == *(_DWORD *)(a2 + 4)) )
  {
    v6 = 0;
    if ( v5 )
    {
      do
      {
        KeCopyAffinityEx(248LL * v6 + v2 + 800, (unsigned __int16 *)(168LL * v6 + a2 + 176));
        ++v6;
      }
      while ( v6 < *(_DWORD *)(v2 + 28) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
