/*
 * XREFs of ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x180023FDC
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800B3A54 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumera.c)
 * Callees:
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::CD3DDeviceLevel1(
        CD3DDeviceLevel1 *this,
        const struct _GUID *a2,
        struct IMILPoolManager *a3)
{
  __int128 v5; // xmm0

  *((_DWORD *)this + 102) = -1;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *(_QWORD *)this = &CD2DContext::`vftable';
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 4;
  *(_QWORD *)((char *)this + 188) = 4LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 58) = -1;
  *((_DWORD *)this + 64) = -1;
  *((_DWORD *)this + 59) = -1;
  *((_QWORD *)this + 48) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 50) = a3;
  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 48) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 1LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0xFFFFLL;
  *((_DWORD *)this + 162) = 0;
  *((_DWORD *)this + 164) = 0;
  *((_QWORD *)this + 106) = &CD3DResourceManager::`vftable';
  InitializeSListHead((PSLIST_HEADER)this + 54);
  *((_QWORD *)this + 111) = (char *)this + 880;
  *((_QWORD *)this + 110) = (char *)this + 880;
  *((_QWORD *)this + 113) = (char *)this + 896;
  *((_QWORD *)this + 112) = (char *)this + 896;
  *((_QWORD *)this + 115) = (char *)this + 912;
  *((_QWORD *)this + 114) = (char *)this + 912;
  *((_QWORD *)this + 117) = (char *)this + 928;
  *((_QWORD *)this + 116) = (char *)this + 928;
  *((_QWORD *)this + 120) = (char *)this + 952;
  *((_QWORD *)this + 119) = (char *)this + 952;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 214) = 0;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_DWORD *)this + 250) = 0;
  *((_BYTE *)this + 1038) = 1;
  v5 = (__int128)*a2;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_OWORD *)this + 65) = v5;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 0;
  *(_QWORD *)((char *)this + 660) = 0LL;
  *(_QWORD *)((char *)this + 668) = 0LL;
  *(_QWORD *)((char *)this + 676) = 0LL;
  *(_QWORD *)((char *)this + 684) = 0LL;
  *(_QWORD *)((char *)this + 692) = 0LL;
  *((_DWORD *)this + 175) = -2003292404;
  *((_DWORD *)this + 177) = -2003292404;
  *((_DWORD *)this + 179) = -2003292404;
  *((_DWORD *)this + 181) = -2003292404;
  *((_DWORD *)this + 183) = -2003292404;
  *((_DWORD *)this + 185) = -2003292404;
  *((_DWORD *)this + 187) = -2003292404;
  *((_DWORD *)this + 189) = -2003292404;
  *(_WORD *)((char *)this + 1033) = 0;
  *((_BYTE *)this + 1035) = 0;
  *((_DWORD *)this + 200) = 0;
  if ( g_pMediaControl )
    *((_QWORD *)this + 126) = 0LL;
  memset_0((char *)this + 804, 0, 0x2CuLL);
  *((_DWORD *)this + 102) = -1;
  *((_BYTE *)this + 1036) = 0;
  *((_BYTE *)this + 1039) = 0;
  *((_QWORD *)this + 202) = 0LL;
  *((_QWORD *)this + 203) = 0LL;
  *((_QWORD *)this + 204) = 0LL;
  *((_QWORD *)this + 205) = 0LL;
  *((_QWORD *)this + 206) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  memset_0((char *)this + 1168, 0, 0xC0uLL);
  memset_0((char *)this + 1360, 0, 0x100uLL);
  return this;
}
