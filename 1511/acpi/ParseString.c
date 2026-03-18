/*
 * XREFs of ParseString @ 0x1C000CDDC
 * Callers:
 *     ParsePackage @ 0x1C000E2B0 (ParsePackage.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseArg @ 0x1C0016648 (ParseArg.c)
 *     ParseOpcode @ 0x1C00166B0 (ParseOpcode.c)
 * Callees:
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseString(const void **a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  _BYTE *v8; // rcx
  void *v9; // rax

  v3 = 0;
  if ( *(_BYTE *)*a1 == 13 )
  {
    *a1 = (char *)*a1 + 1;
    *(_WORD *)(a2 + 2) = 2;
    v7 = -1LL;
    v8 = *a1;
    do
      ++v7;
    while ( v8[v7] );
    *(_DWORD *)(a2 + 24) = v7 + 1;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("\"%s\"");
    v9 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL, *(unsigned int *)(a2 + 24));
    *(_QWORD *)(a2 + 32) = v9;
    if ( v9 )
    {
      memmove(v9, *a1, *(unsigned int *)(a2 + 24));
    }
    else
    {
      LogError(3221225626LL);
      PrintDebugMessage(139, 0, 0, 0, 0LL);
      v3 = -1073741670;
    }
    *a1 = (char *)*a1 + *(unsigned int *)(a2 + 24);
  }
  else
  {
    if ( !a3 )
    {
      LogError(3222536193LL);
      PrintDebugMessage(140, *(unsigned __int8 *)*a1, (unsigned int)*a1, 0, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v3;
}
