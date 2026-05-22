/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18004A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCClickerProcessor::OnGazeUpdate(MPCClickerProcessor *this, struct InputInfo *a2)
{
  int v2; // xmm1_4
  int v3; // eax
  MPCGestureHandler *v4; // rcx
  __int128 v5; // xmm0
  _BYTE v6[1248]; // [rsp+20h] [rbp-768h] BYREF
  int v7; // [rsp+500h] [rbp-288h]
  int v8; // [rsp+510h] [rbp-278h]
  int v9; // [rsp+514h] [rbp-274h]
  __int128 v10; // [rsp+518h] [rbp-270h]
  int v11; // [rsp+528h] [rbp-260h]

  if ( *((_BYTE *)a2 + 785) )
  {
    v2 = *((_DWORD *)a2 + 198);
    v3 = *((_DWORD *)a2 + 204);
    v4 = (MPCGestureHandler *)*((_QWORD *)this + 255);
    v8 = *((_DWORD *)a2 + 197);
    v5 = *(_OWORD *)((char *)a2 + 796);
    v11 = v3;
    v9 = v2;
    v10 = v5;
    v7 = 4;
    MPCGestureHandler::DownLevelTo2D(v4, (struct InputInfo *)v6);
  }
}
