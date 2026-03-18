/*
 * XREFs of ?RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x1800BA5A4
 * Callers:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B8390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x18012D784 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualTree::RemoveTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  __int64 v2; // r10
  unsigned int v4; // ecx
  __int64 i; // r8
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 106);
  v4 = *((_DWORD *)this + 218);
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
      while ( (unsigned int)i < *((_DWORD *)this + 218) - 1 );
    }
    --*((_DWORD *)this + 218);
  }
  return 0LL;
}
