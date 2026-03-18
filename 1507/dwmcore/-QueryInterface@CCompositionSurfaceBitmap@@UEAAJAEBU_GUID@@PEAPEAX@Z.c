/*
 * XREFs of ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008D00
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A2E0 (-QueryInterface@CCompositionSurfaceBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A2F0 (-QueryInterface@CCompositionSurfaceBitmap@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A300 (-QueryInterface@CCompositionSurfaceBitmap@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800086D0 (-HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::QueryInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CCompositionSurfaceBitmap *, const struct _GUID *, void **); // rdi
  int Interface; // eax
  CBitmapOfDeviceBitmaps *v8; // rbx
  unsigned int (__fastcall *v9)(CBitmapOfDeviceBitmaps *__hidden); // rsi

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v6 == CCompositionSurfaceBitmap::HrFindInterface )
        Interface = CCompositionSurfaceBitmap::HrFindInterface(this, a2, a3);
      else
        Interface = v6(this, a2, a3);
      v4 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    v8 = (CBitmapOfDeviceBitmaps *)*a3;
    v9 = *(unsigned int (__fastcall **)(CBitmapOfDeviceBitmaps *__hidden))(*(_QWORD *)v8 + 8LL);
    if ( v9 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v8);
    else
      v9(v8);
  }
  return v4;
}
