/*
 * XREFs of ??0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z @ 0x18001EA54
 * Callers:
 *     ?Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x18001E980 (-Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z @ 0x18001EB70 (--0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::CDecodeBitmap(CDecodeBitmap *this, const struct _GUID *a2, struct _LUID a3)
{
  __int64 v3; // rcx

  CRenderTargetBitmap::CRenderTargetBitmap(this, a2, 0);
  *(_QWORD *)(v3 + 16) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)v3 = &CDecodeBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v3 + 24) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v3 + 112) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(v3 + 120) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  *(struct _LUID *)(v3 + 216) = a3;
  *(_QWORD *)(v3 + 224) = 0LL;
  *(_DWORD *)(v3 + 232) = 0;
  *(_WORD *)(v3 + 236) = 0;
  return (CDecodeBitmap *)v3;
}
