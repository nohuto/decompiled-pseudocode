/*
 * XREFs of ?IsMultiResourceSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180142990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::IsMultiResourceSwapChain(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // dl
  unsigned int v3; // r10d
  int v4; // r8d
  unsigned int v5; // r9d

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 104);
    v4 = 0;
    v5 = 0;
    if ( v3 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 80) + 8LL * v5) + 272LL) || (unsigned int)++v4 <= 1 )
      {
        if ( ++v5 >= v3 )
          return v2;
      }
      return 1;
    }
  }
  return v2;
}
