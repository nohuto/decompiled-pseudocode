/*
 * XREFs of ??0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z @ 0x18001EB70
 * Callers:
 *     ??0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z @ 0x18001EA54 (--0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z.c)
 *     ??0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z @ 0x1801319E4 (--0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x180132090 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::CRenderTargetBitmap(
        CRenderTargetBitmap *this,
        const struct _GUID *a2,
        char a3)
{
  __int128 v3; // xmm0
  CRenderTargetBitmap *result; // rax

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCache::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  *((_DWORD *)this + 2) = 0;
  v3 = (__int128)*a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 2) = v3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = (char *)this + 192;
  *((_QWORD *)this + 21) = (char *)this + 192;
  *((_DWORD *)this + 44) = 2;
  *(_QWORD *)((char *)this + 180) = 2LL;
  result = this;
  *((_BYTE *)this + 208) = a3;
  return result;
}
