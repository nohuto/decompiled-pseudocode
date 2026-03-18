/*
 * XREFs of ??0DXGGLOBAL@@AEAA@XZ @ 0x1C00E8C00
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00F9EEC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::DXGGLOBAL(DXGGLOBAL *this)
{
  unsigned __int8 v2; // al

  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 42) = 1;
  *((_DWORD *)this + 41) = 9;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 10;
  *((_DWORD *)this + 58) = 1;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 31) = (char *)this + 240;
  *((_QWORD *)this + 30) = (char *)this + 240;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 32;
  *((_DWORD *)this + 72) = 1;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 38) = (char *)this + 296;
  *((_QWORD *)this + 37) = (char *)this + 296;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 35;
  *((_DWORD *)this + 88) = 1;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 101) = 11;
  *((_DWORD *)this + 102) = 21;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 53) = (char *)this + 416;
  *((_QWORD *)this + 52) = (char *)this + 416;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 115) = 12;
  *((_DWORD *)this + 116) = 1;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 134) = -1;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 156) = -1;
  KeInitializeEvent((PRKEVENT)((char *)this + 584), NotificationEvent, 0);
  *((_QWORD *)this + 79) = 0LL;
  *((_WORD *)this + 376) = 1;
  *(_QWORD *)((char *)this + 756) = 0LL;
  *(_QWORD *)((char *)this + 764) = 1LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_DWORD *)this + 196) = 0;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_DWORD *)this + 204) = 0;
  *((_DWORD *)this + 205) = 65;
  *((_DWORD *)this + 206) = 1;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((void **)this + 104, 0, 0);
  v2 = g_IsMobileCore;
  *((_DWORD *)this + 212) = 0;
  *((_DWORD *)this + 213) = v2 != 0 ? 4 : 8;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_DWORD *)this + 218) = 67;
  *((_DWORD *)this + 220) = 0;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 224) = 0;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 243) = 70;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_DWORD *)this + 242) = 0;
  *((_DWORD *)this + 244) = 32;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 124) = (char *)this + 984;
  *((_QWORD *)this + 123) = (char *)this + 984;
  *((_BYTE *)this + 1000) = 0;
  *((_DWORD *)this + 251) = 0;
  *((_QWORD *)this + 126) = 0LL;
  *((_DWORD *)this + 261) = 70;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_DWORD *)this + 260) = 0;
  *((_DWORD *)this + 262) = 24;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 92);
  return this;
}
