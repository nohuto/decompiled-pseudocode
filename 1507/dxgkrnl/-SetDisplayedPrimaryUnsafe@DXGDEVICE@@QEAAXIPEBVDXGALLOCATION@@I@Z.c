/*
 * XREFs of ?SetDisplayedPrimaryUnsafe@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B4EC
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C000B49C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B51C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::SetDisplayedPrimaryUnsafe(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int a4)
{
  bool v4; // zf

  *((_QWORD *)this + a2 + 570) = a3;
  v4 = *((_DWORD *)this + a2 + 4548) == 0;
  *((_DWORD *)this + a2 + 1172) = a4;
  if ( v4 )
  {
    if ( a3 )
      *((_QWORD *)this + 8 * (unsigned __int64)a2 + 2146) = a3;
  }
}
