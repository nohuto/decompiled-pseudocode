/*
 * XREFs of LdrpResolveDelayLoadDescriptor @ 0x180017030
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800BCD10 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall LdrpResolveDelayLoadDescriptor(char *a1, __int64 a2)
{
  unsigned int v2; // edi
  char *v3; // rbx
  __int64 v4; // r14
  __int64 *v7; // rax

  v2 = 0;
  v3 = &a1[*(unsigned int *)(a2 + 12)];
  LODWORD(v4) = 0;
  if ( *(_QWORD *)v3 )
  {
    v7 = (__int64 *)&a1[*(unsigned int *)(a2 + 12)];
    do
    {
      if ( !LdrResolveDelayLoadedAPI(a1, (_BYTE *)a2, 0LL, 0LL, v7, 0) )
        v2 = -1073740782;
      v4 = (unsigned int)(v4 + 1);
      v7 = (__int64 *)&v3[8 * v4];
    }
    while ( *v7 );
  }
  return v2;
}
