/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180091810
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BCF90 (-QueryInterface@CPrimitiveGroup@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180091E20 (-HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(CPrimitiveGroup *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  CBitmapOfDeviceBitmaps *v6; // rbx
  __int64 (__fastcall *v7)(CBitmapOfDeviceBitmaps *); // rsi
  __int64 (__fastcall *v9)(CPrimitiveGroup *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v9 = *(__int64 (__fastcall **)(CPrimitiveGroup *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v9 == CPrimitiveGroup::HrFindInterface )
        Interface = CPrimitiveGroup::HrFindInterface(this, a2, a3);
      else
        Interface = v9(this, a2, a3);
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
    v6 = (CBitmapOfDeviceBitmaps *)*a3;
    v7 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v6 + 8LL);
    if ( v7 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v6);
    else
      v7(v6);
  }
  return v4;
}
