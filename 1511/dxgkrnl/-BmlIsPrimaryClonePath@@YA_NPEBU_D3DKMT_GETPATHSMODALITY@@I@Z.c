/*
 * XREFs of ?BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00A90E4
 * Callers:
 *     sub_1C00A7420 @ 0x1C00A7420 (sub_1C00A7420.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsPrimaryClonePath(const struct _D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  __int64 v3; // r8
  unsigned __int16 v4; // r9
  int v5; // edi
  int v6; // ebx
  int v7; // r8d
  __int64 v8; // rdx

  v3 = 216LL * a2;
  v4 = 0;
  v5 = *(_DWORD *)((char *)a1 + v3 + 56);
  v6 = *(_DWORD *)((char *)a1 + v3 + 60);
  v7 = *(_DWORD *)((char *)a1 + v3 + 64);
  while ( 1 )
  {
    v8 = 216LL * v4;
    if ( *(_DWORD *)((char *)a1 + v8 + 56) == v5
      && *(_DWORD *)((char *)a1 + v8 + 60) == v6
      && *(_DWORD *)((char *)a1 + v8 + 64) == v7 )
    {
      break;
    }
    ++v4;
  }
  return v4 == a2;
}
