/*
 * XREFs of ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085790
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

__int64 __fastcall CResource::QueryInterface(CResource *this, const struct _GUID *a2, CBitmapOfDeviceBitmaps **a3)
{
  int v4; // esi
  __int64 v5; // rax
  CBitmapOfDeviceBitmaps *v6; // rbx
  __int64 (__fastcall *v7)(CBitmapOfDeviceBitmaps *); // rdi

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v4 = (*(__int64 (__fastcall **)(CResource *, const struct _GUID *, CBitmapOfDeviceBitmaps **))(*(_QWORD *)this + 32LL))(
             this,
             a2,
             a3);
      if ( v4 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    v6 = *a3;
    v7 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)*a3 + 8LL);
    if ( v7 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(v6);
    else
      v7(v6);
  }
  return (unsigned int)v4;
}
