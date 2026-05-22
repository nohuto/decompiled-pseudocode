/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E160
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18002E500 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  float v3; // xmm2_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  bool v11; // bp
  float v12; // xmm0_4
  float v13; // xmm0_4
  bool v14; // di
  int v15; // xmm1_4
  int v16; // eax
  bool v17; // dl
  bool v18; // al
  bool v19; // cl
  float v20; // xmm2_4
  float v21; // xmm1_4
  MPCGestureHandler *v22; // rcx
  _QWORD v23[240]; // [rsp+20h] [rbp-788h] BYREF

  v3 = *((float *)this + 634);
  v5 = *((double *)this + 270);
  v6 = *((double *)this + 269);
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  v11 = 1;
  if ( v8 <= v3 )
  {
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
    if ( v10 <= v3 )
      v11 = 0;
  }
  v7 = *((double *)this + 277);
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  v14 = 1;
  if ( v12 <= v3 )
  {
    v9 = *((double *)this + 278);
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    if ( v13 <= v3 )
      v14 = 0;
  }
  memset(v23, 0, 0x760uLL);
  v15 = *((_DWORD *)a2 + 198);
  v16 = *((_DWORD *)a2 + 204);
  LODWORD(v23[158]) = *((_DWORD *)a2 + 197);
  HIDWORD(v23[158]) = v15;
  LODWORD(v23[161]) = v16;
  *(_OWORD *)&v23[159] = *(_OWORD *)((char *)a2 + 796);
  v17 = v11 && !v14 && !*((_DWORD *)this + 632);
  v18 = *((_BYTE *)a2 + 785) && *((_BYTE *)a2 + 787);
  v19 = *((_DWORD *)this + 632) == 1 && (!v11 || !v18);
  if ( v18 && v17 )
    *((_DWORD *)this + 632) = 1;
  if ( v19 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( *((_DWORD *)this + 632) == 1 )
  {
    v20 = *((float *)this + 636);
    v21 = *((float *)this + 656);
    v22 = (MPCGestureHandler *)*((_QWORD *)this + 25);
    LODWORD(v23[156]) = 5;
    HIDWORD(v23[156]) = COERCE_UNSIGNED_INT((float)(v20 * v6) * v21) ^ _xmm;
    *(float *)&v23[157] = (float)(v20 * v5) * v21;
    MPCGestureHandler::DownLevelTo2D(v22, (struct InputInfo *)v23);
  }
}
