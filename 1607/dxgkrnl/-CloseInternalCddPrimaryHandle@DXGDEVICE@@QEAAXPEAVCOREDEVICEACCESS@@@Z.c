/*
 * XREFs of ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C1C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkPresent @ 0x1C00C8CB0 (DxgkPresent.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01713C4 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C018BB20 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C018C130 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018C640 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::CloseInternalCddPrimaryHandle(DXGDEVICE *this, DXGADAPTER **a2)
{
  __int64 i; // rdi
  struct DXGALLOCATION **v5; // r9

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 716); i = (unsigned int)(i + 1) )
  {
    v5 = (struct DXGALLOCATION **)*((_QWORD *)this + i + 54);
    if ( v5 )
    {
      if ( *((_BYTE *)this + i + 416) )
      {
        DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v5, a2, DXGDEVICE::DestroyFlagsDefault);
        *((_BYTE *)this + i + 416) = 0;
      }
    }
  }
}
