/*
 * XREFs of ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180093780
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFDC0 (-QueryInterface@CCompositionSurfaceBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFDD0 (-QueryInterface@CCompositionSurfaceBitmap@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFDE0 (-QueryInterface@CCompositionSurfaceBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFDF0 (-QueryInterface@CCompositionSurfaceBitmap@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180093D10 (-HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::QueryInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 (*v6)(void); // rax
  int Interface; // eax
  void (*v8)(void); // rax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
      if ( (char *)v6 == (char *)CCompositionSurfaceBitmap::HrFindInterface )
        Interface = CCompositionSurfaceBitmap::HrFindInterface(this, a2, a3);
      else
        Interface = v6();
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
    v8 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
    if ( (char *)v8 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)*a3);
    else
      v8();
  }
  return v4;
}
