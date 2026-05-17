/*
 * XREFs of LdrpResolveDelayLoadDescriptor @ 0x180031788
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800D0EB0 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x1800319E0 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall LdrpResolveDelayLoadDescriptor(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *v3; // rbx
  __int64 v4; // r14
  int v5; // esi
  int v6; // ebp
  _QWORD *v7; // rax

  v2 = 0;
  v3 = (_QWORD *)(a1 + *(unsigned int *)(a2 + 12));
  LODWORD(v4) = 0;
  v5 = a2;
  v6 = a1;
  if ( *v3 )
  {
    v7 = (_QWORD *)(a1 + *(unsigned int *)(a2 + 12));
    do
    {
      if ( !LdrResolveDelayLoadedAPI(v6, v5, 0, 0, (__int64)v7, 0) )
        v2 = -1073740782;
      v4 = (unsigned int)(v4 + 1);
      v7 = &v3[v4];
    }
    while ( *v7 );
  }
  return v2;
}
