/*
 * XREFs of ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18002E500
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E160 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E350 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall MPCGamepadProcessor::EndGesture(MPCGamepadProcessor *this)
{
  int v2; // xmm1_4
  int v3; // eax
  MPCGestureHandler *v4; // rcx
  __int128 v5; // xmm0
  _QWORD v6[237]; // [rsp+20h] [rbp-768h] BYREF

  memset(v6, 0, 0x760uLL);
  v2 = *((_DWORD *)this + 560);
  v3 = *((_DWORD *)this + 566);
  v4 = (MPCGestureHandler *)*((_QWORD *)this + 25);
  LODWORD(v6[158]) = *((_DWORD *)this + 559);
  v5 = *(_OWORD *)((char *)this + 2244);
  LODWORD(v6[161]) = v3;
  HIDWORD(v6[158]) = v2;
  *(_OWORD *)&v6[159] = v5;
  LODWORD(v6[156]) = 2;
  MPCGestureHandler::DownLevelTo2D(v4, (struct InputInfo *)v6);
  *((_DWORD *)this + 632) = 0;
}
