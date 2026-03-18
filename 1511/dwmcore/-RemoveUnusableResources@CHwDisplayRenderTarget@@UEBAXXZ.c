/*
 * XREFs of ?RemoveUnusableResources@CHwDisplayRenderTarget@@UEBAXXZ @ 0x180081780
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::RemoveUnusableResources(CHwDisplayRenderTarget *this)
{
  CD3DDeviceLevel1 *v1; // rcx

  v1 = (CD3DDeviceLevel1 *)*((_QWORD *)this - 2);
  if ( v1 )
  {
    if ( *((_DWORD *)v1 + 200) == -2003304307 )
      CD3DDeviceLevel1::ProcessUnusable(v1, 0);
  }
}
