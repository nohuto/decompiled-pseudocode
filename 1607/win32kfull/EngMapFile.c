/*
 * XREFs of EngMapFile @ 0x1C027C7A0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     bMapFile @ 0x1C00BCB3C (bMapFile.c)
 */

PVOID __stdcall EngMapFile(LPWSTR pwsz, ULONG cjSize, ULONG_PTR *piFile)
{
  void *v3; // rbx
  _OWORD *v7; // rax
  ULONG_PTR v8; // rdi
  ULONG v9; // r8d
  __int64 v10; // rdx

  v3 = 0LL;
  v7 = PALLOCMEM2(0x50uLL, 1818846791LL, 1);
  v8 = (ULONG_PTR)v7;
  if ( v7 )
  {
    v9 = -1;
    if ( cjSize )
      v9 = cjSize;
    if ( (unsigned int)bMapFile(pwsz, v7, v9, 0LL) )
    {
      *piFile = v8;
      return *(PVOID *)(v8 + 8);
    }
    else
    {
      *piFile = 0LL;
      Win32FreePool(v8, v10);
    }
  }
  return v3;
}
