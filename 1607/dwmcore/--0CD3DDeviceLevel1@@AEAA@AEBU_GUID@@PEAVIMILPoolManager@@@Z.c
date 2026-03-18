/*
 * XREFs of ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x18007FDE0
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180021598 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILP.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::CD3DDeviceLevel1(
        CD3DDeviceLevel1 *this,
        const struct _GUID *a2,
        struct IMILPoolManager *a3)
{
  CD3DDeviceLevel1 *result; // rax

  *((_DWORD *)this + 108) = -1;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *(_QWORD *)this = &CD2DContext::`vftable';
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 24) = (char *)this + 224;
  *((_QWORD *)this + 25) = (char *)this + 224;
  *((_DWORD *)this + 52) = 4;
  *(_QWORD *)((char *)this + 212) = 4LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 64) = -1;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 65) = -1;
  *((_QWORD *)this + 51) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 53) = a3;
  *((_QWORD *)this + 59) = (char *)this + 504;
  *((_QWORD *)this + 60) = (char *)this + 504;
  *((_DWORD *)this + 122) = 1;
  *(_QWORD *)((char *)this + 492) = 1LL;
  *((_DWORD *)this + 128) = 0;
  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 51) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 1LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0xFFFFLL;
  *((_WORD *)this + 356) = 0;
  *((_BYTE *)this + 714) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 110) = &CD3DResourceManager::`vftable';
  *((_DWORD *)this + 250) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 56);
  *((_QWORD *)this + 115) = (char *)this + 912;
  *((_QWORD *)this + 114) = (char *)this + 912;
  *((_QWORD *)this + 117) = (char *)this + 928;
  *((_QWORD *)this + 116) = (char *)this + 928;
  *((_QWORD *)this + 119) = (char *)this + 944;
  *((_QWORD *)this + 118) = (char *)this + 944;
  *((_QWORD *)this + 121) = (char *)this + 960;
  *((_QWORD *)this + 120) = (char *)this + 960;
  *((_QWORD *)this + 124) = (char *)this + 984;
  *((_QWORD *)this + 123) = (char *)this + 984;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 222) = 0;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_BYTE *)this + 1077) = 1;
  *(struct _GUID *)((char *)this + 1080) = *a2;
  *((_QWORD *)this + 153) = 0LL;
  *((_QWORD *)this + 154) = 0LL;
  *((_DWORD *)this + 310) = 0;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *(_QWORD *)((char *)this + 724) = 0LL;
  *(_QWORD *)((char *)this + 732) = 0LL;
  *(_QWORD *)((char *)this + 740) = 0LL;
  *(_QWORD *)((char *)this + 748) = 0LL;
  *(_QWORD *)((char *)this + 756) = 0LL;
  *((_WORD *)this + 536) = 0;
  *((_BYTE *)this + 1074) = 0;
  *((_DWORD *)this + 206) = 0;
  memset_0((char *)this + 828, 0, 0x2CuLL);
  *((_DWORD *)this + 108) = -1;
  *((_BYTE *)this + 1075) = 0;
  *((_BYTE *)this + 1078) = 0;
  *((_QWORD *)this + 236) = 0LL;
  *((_QWORD *)this + 237) = 0LL;
  *((_QWORD *)this + 238) = 0LL;
  *((_QWORD *)this + 239) = 0LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  memset_0((char *)this + 1440, 0, 0xC0uLL);
  memset_0((char *)this + 1632, 0, 0x100uLL);
  result = this;
  *((_QWORD *)this + 241) = 0LL;
  return result;
}
