/*
 * XREFs of ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x180090634
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180091D04 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumera.c)
 * Callees:
 *     ??0CD2DContext@@IEAA@XZ @ 0x18008F220 (--0CD2DContext@@IEAA@XZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::CD3DDeviceLevel1(
        CD3DDeviceLevel1 *this,
        const struct _GUID *a2,
        struct IMILPoolManager *a3)
{
  __int128 v6; // xmm0

  *((_DWORD *)this + 104) = -1;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  CD2DContext::CD2DContext(this);
  *((_QWORD *)this + 51) = a3;
  *((_QWORD *)this + 49) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 100) = 0;
  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 49) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 1LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 158) = 0;
  *((_QWORD *)this + 80) = 0xFFFFLL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_QWORD *)this + 112) = &CD3DResourceManager::`vftable';
  InitializeSListHead((PSLIST_HEADER)this + 57);
  *((_QWORD *)this + 117) = (char *)this + 928;
  *((_QWORD *)this + 116) = (char *)this + 928;
  *((_QWORD *)this + 119) = (char *)this + 944;
  *((_QWORD *)this + 118) = (char *)this + 944;
  *((_QWORD *)this + 121) = (char *)this + 960;
  *((_QWORD *)this + 120) = (char *)this + 960;
  *((_QWORD *)this + 123) = (char *)this + 976;
  *((_QWORD *)this + 122) = (char *)this + 976;
  *((_QWORD *)this + 126) = (char *)this + 1000;
  *((_QWORD *)this + 125) = (char *)this + 1000;
  *((_QWORD *)this + 124) = 0LL;
  *((_DWORD *)this + 226) = 0;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_DWORD *)this + 266) = 0;
  *(_WORD *)((char *)this + 1069) = 256;
  v6 = (__int128)*a2;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_OWORD *)this + 67) = v6;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *(_QWORD *)((char *)this + 684) = 0LL;
  *(_QWORD *)((char *)this + 692) = 0LL;
  *(_QWORD *)((char *)this + 700) = 0LL;
  *(_QWORD *)((char *)this + 708) = 0LL;
  *(_QWORD *)((char *)this + 716) = 0LL;
  *((_DWORD *)this + 181) = -2003292404;
  *((_DWORD *)this + 183) = -2003292404;
  *((_DWORD *)this + 185) = -2003292404;
  *((_DWORD *)this + 187) = -2003292404;
  *((_DWORD *)this + 189) = -2003292404;
  *((_DWORD *)this + 191) = -2003292404;
  *((_DWORD *)this + 193) = -2003292404;
  *((_DWORD *)this + 195) = -2003292404;
  *((_WORD *)this + 416) = 0;
  *((_BYTE *)this + 834) = 0;
  *((_DWORD *)this + 209) = 0;
  if ( g_pMediaControl )
    *((_QWORD *)this + 132) = 0LL;
  memset_0((char *)this + 840, 0, 0x2CuLL);
  *((_DWORD *)this + 104) = -1;
  *((_BYTE *)this + 1068) = 0;
  *((_BYTE *)this + 1071) = 0;
  *((_QWORD *)this + 192) = 0LL;
  *((_QWORD *)this + 193) = 0LL;
  *((_QWORD *)this + 194) = 0LL;
  *((_QWORD *)this + 195) = 0LL;
  *((_QWORD *)this + 196) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 149) = 0LL;
  memset_0((char *)this + 1200, 0, 0xC0uLL);
  memset_0((char *)this + 1392, 0, 0x90uLL);
  return this;
}
