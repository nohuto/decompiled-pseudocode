/*
 * XREFs of ?QueryInterface@CBitmapOfDeviceBitmaps@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008AA90
 * Callers:
 *     ?QueryInterface@CBitmapOfDeviceBitmaps@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDCF0 (-QueryInterface@CBitmapOfDeviceBitmaps@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapOfDeviceBitmaps@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDD00 (-QueryInterface@CBitmapOfDeviceBitmaps@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapOfDeviceBitmaps@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDD10 (-QueryInterface@CBitmapOfDeviceBitmaps@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapOfDeviceBitmaps@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDD20 (-QueryInterface@CBitmapOfDeviceBitmaps@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapOfDeviceBitmaps@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDD30 (-QueryInterface@CBitmapOfDeviceBitmaps@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapOfDeviceBitmaps@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDD40 (-QueryInterface@CBitmapOfDeviceBitmaps@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrFindInterface@CBitmapOfDeviceBitmaps@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008AE60 (-HrFindInterface@CBitmapOfDeviceBitmaps@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::QueryInterface(
        CBitmapOfDeviceBitmaps *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CBitmapOfDeviceBitmaps *__hidden, const struct _GUID *, void **); // rsi
  int Interface; // eax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v6 == CBitmapOfDeviceBitmaps::HrFindInterface )
        Interface = CBitmapOfDeviceBitmaps::HrFindInterface(this, a2, a3);
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return v4;
}
