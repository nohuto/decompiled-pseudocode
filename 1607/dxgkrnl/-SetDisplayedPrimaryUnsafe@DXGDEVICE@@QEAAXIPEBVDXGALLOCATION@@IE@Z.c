/*
 * XREFs of ?SetDisplayedPrimaryUnsafe@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0007E24
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0007DD4 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0007E9C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

void __fastcall DXGDEVICE::SetDisplayedPrimaryUnsafe(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int a4,
        char a5)
{
  __int64 v5; // rsi
  unsigned __int64 v8; // rbx

  v5 = a2;
  *((_QWORD *)this + a2 + 101) = a3;
  *((_DWORD *)this + a2 + 234) = a4;
  if ( a3 )
  {
    if ( a5 )
    {
      v8 = (unsigned __int64)a2 << 6;
      memset((char *)this + v8 + 1320, 0, 0x40uLL);
      *((_DWORD *)this + v5 + 586) = 0;
      *(_QWORD *)((char *)this + v8 + 1320) = a3;
    }
  }
}
