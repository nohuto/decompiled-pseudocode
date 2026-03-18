/*
 * XREFs of ?RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180041168
 * Callers:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800585D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x1800FA2D4 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualTree::RemoveTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  __int64 v2; // r10
  unsigned int v4; // ecx
  __int64 i; // r8
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 88);
  v4 = *((_DWORD *)this + 182);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct IVisualTreeClient **)(v2 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < v4 )
  {
    if ( (unsigned int)i < v4 - 1 )
    {
      do
      {
        v7 = (unsigned int)i;
        LODWORD(i) = i + 1;
        *(_QWORD *)(v2 + 8 * v7) = *(_QWORD *)(v2 + 8LL * (unsigned int)i);
      }
      while ( (unsigned int)i < *((_DWORD *)this + 182) - 1 );
    }
    --*((_DWORD *)this + 182);
  }
  return 0LL;
}
