/*
 * XREFs of ??0CWindowData@@QEAA@XZ @ 0x18001A154
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C3C0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C850 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002D050 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D410 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002DB60 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DCE0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180037D18 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038B3C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180080280 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 */

CWindowData *__fastcall CWindowData::CWindowData(CWindowData *this)
{
  char v2; // al
  CWindowData *result; // rax

  *((_QWORD *)this + 2) = (char *)this + 1174;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  v2 = IsOpenThemeDataPresent();
  *((_BYTE *)this + 332) = -1;
  *((_DWORD *)this + 146) = 4095;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 576) &= ~8u;
  *((_BYTE *)this + 577) |= 0x20u;
  *((_BYTE *)this + 576) |= 8 * (v2 != 0);
  *((_BYTE *)this + 580) |= 0x10u;
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 180) = *(_QWORD *)((char *)this + 172);
  return result;
}
