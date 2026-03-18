/*
 * XREFs of ?RemoveUnusableResources@CHwDisplayRenderTarget@@UEBAXXZ @ 0x18008B0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::RemoveUnusableResources(CHwDisplayRenderTarget *this)
{
  CD3DDeviceLevel1 *v1; // rcx

  v1 = (CD3DDeviceLevel1 *)*((_QWORD *)this - 2);
  if ( v1 )
  {
    if ( *((_DWORD *)v1 + 209) == -2003304307 )
      CD3DDeviceLevel1::ProcessUnusable(v1, 0);
  }
}
