/*
 * XREFs of ?GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x18002B024 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     ?GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180148F3C (-GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV-$TMil.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::GetPointerToValidSourceRects(
        CHwDeviceBitmapColorSource *this,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v6; // rsi
  int SharedHandle; // eax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h]

  v12 = a3;
  v6 = 0LL;
  v11 = 0LL;
  (**a2)(a2, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v11);
  if ( v11 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11) == 3 )
  {
    if ( v11 )
      v6 = v11 - 16;
    SharedHandle = (unsigned int)CHwDeviceBitmapColorSource::GetSharedHandle(this);
    LODWORD(v6) = CBitmapOfDeviceBitmaps::GetPointerToValidRectsForSurface(v6, SharedHandle, v12, a4, a5);
  }
  else
  {
    v9 = a5;
    *a4 = 1;
    *v9 = (char *)this + 188;
  }
  return (unsigned int)v6;
}
