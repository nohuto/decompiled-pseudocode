/*
 * XREFs of PpmInstallNewIdleDomains @ 0x1402353BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmInstallNewIdleDomains(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  int v5; // eax
  unsigned int v6; // r9d
  unsigned __int16 v7; // dx
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 23808);
  v3 = 0;
  if ( v2 && (v5 = *(_DWORD *)(v2 + 28), v5 == *(_DWORD *)(a2 + 4)) )
  {
    v6 = 0;
    if ( v5 )
    {
      do
      {
        v7 = 0;
        v8 = a2 + 168LL * v6;
        v9 = v2 + 248LL * v6;
        *(_WORD *)(v9 + 800) = *(_WORD *)(v8 + 176);
        *(_WORD *)(v9 + 802) = *(_WORD *)(v8 + 178);
        *(_DWORD *)(v9 + 804) = 0;
        if ( *(_WORD *)(v8 + 176) )
        {
          do
          {
            v10 = v7++;
            *(_QWORD *)(v9 + 8 * v10 + 808) = *(_QWORD *)(v8 + 8 * v10 + 184);
          }
          while ( v7 < *(_WORD *)(v8 + 176) );
        }
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
