/*
 * XREFs of ?SetDisplayedPrimaryUnsafe@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00022A8
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0002258 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
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
  *((_QWORD *)this + a2 + 98) = a3;
  *((_DWORD *)this + a2 + 228) = a4;
  if ( a3 )
  {
    if ( a5 )
    {
      v8 = (unsigned __int64)a2 << 6;
      memset((char *)this + v8 + 1296, 0, 0x40uLL);
      *((_DWORD *)this + v5 + 580) = 0;
      *(_QWORD *)((char *)this + v8 + 1296) = a3;
    }
  }
}
