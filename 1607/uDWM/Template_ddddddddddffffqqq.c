/*
 * XREFs of Template_ddddddddddffffqqq @ 0x18008D380
 * Callers:
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180014C00 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

__int64 __fastcall Template_ddddddddddffffqqq(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19)
{
  _QWORD v20[34]; // [rsp+20h] [rbp-E0h] BYREF
  int v21; // [rsp+160h] [rbp+60h] BYREF
  int v22; // [rsp+168h] [rbp+68h] BYREF

  v22 = a4;
  v21 = a3;
  v20[0] = &v21;
  v20[1] = 4LL;
  v20[2] = &v22;
  v20[3] = 4LL;
  v20[4] = &a5;
  v20[5] = 4LL;
  v20[6] = &a6;
  v20[8] = &a7;
  v20[10] = &a8;
  v20[12] = &a9;
  v20[14] = &a10;
  v20[16] = &a11;
  v20[18] = &a12;
  v20[20] = &a13;
  v20[22] = &a14;
  v20[24] = &a15;
  v20[26] = &a16;
  v20[28] = &a17;
  v20[30] = &a18;
  v20[32] = &a19;
  v20[7] = 4LL;
  v20[9] = 4LL;
  v20[11] = 4LL;
  v20[13] = 4LL;
  v20[15] = 4LL;
  v20[17] = 4LL;
  v20[19] = 4LL;
  v20[21] = 4LL;
  v20[23] = 4LL;
  v20[25] = 4LL;
  v20[27] = 4LL;
  v20[29] = 4LL;
  v20[31] = 4LL;
  v20[33] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAnimatedTransitionVisual_Info, 17LL, v20);
}
