/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E350
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18002E500 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  float v4; // xmm0_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  int v8; // xmm1_4
  int v9; // eax
  float v10; // xmm2_4
  __int128 v11; // xmm0
  char v12; // al
  float v13; // xmm1_4
  char v14; // dl
  float v15; // xmm0_4
  char v16; // cl
  char v17; // r8
  float v18; // xmm6_4
  MPCGestureHandler *v19; // rcx
  _QWORD v20[240]; // [rsp+20h] [rbp-788h] BYREF

  v4 = *((double *)this + 265);
  v5 = *((double *)this + 274);
  v6 = (float)*((double *)this + 266) - v4;
  v7 = v5 - (float)*((double *)this + 273);
  memset(v20, 0, 0x760uLL);
  v8 = *((_DWORD *)a2 + 198);
  v9 = *((_DWORD *)a2 + 204);
  v10 = *((float *)this + 634);
  LODWORD(v20[158]) = *((_DWORD *)a2 + 197);
  v11 = *(_OWORD *)((char *)a2 + 796);
  LODWORD(v20[161]) = v9;
  v12 = 1;
  HIDWORD(v20[158]) = v8;
  *(_OWORD *)&v20[159] = v11;
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v13 <= v10 || (v14 = 1, !*((_BYTE *)a2 + 785)) )
    v14 = 0;
  if ( !*((_BYTE *)a2 + 785) || (v16 = 1, !*((_BYTE *)a2 + 787)) )
    v16 = 0;
  if ( !v14 || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm), v15 > v10) || (v17 = 1, *((_DWORD *)this + 632)) )
    v17 = 0;
  if ( *((_DWORD *)this + 632) != 2 )
  {
LABEL_14:
    v12 = 0;
    goto LABEL_15;
  }
  if ( v14 )
  {
    if ( !v16 )
      goto LABEL_18;
    goto LABEL_14;
  }
LABEL_15:
  if ( v16 && v17 )
    *((_DWORD *)this + 632) = 2;
LABEL_18:
  if ( v12 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( *((_DWORD *)this + 632) == 2 )
  {
    v18 = v6 * *((float *)this + 637);
    v19 = (MPCGestureHandler *)*((_QWORD *)this + 25);
    LODWORD(v20[156]) = 6;
    *((float *)&v20[157] + 1) = (float)(v18 * *((float *)this + 656)) + 1.0;
    MPCGestureHandler::DownLevelTo2D(v19, (struct InputInfo *)v20);
  }
}
