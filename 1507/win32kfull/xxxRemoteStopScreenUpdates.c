/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C012DCD8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C0203600 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0203710 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0203760 (xxxRemoteShadowStop.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C021F5A0 (NtUserRemoteStopScreenUpdates.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     RemoteDisableScreen @ 0x1C012DEBC (RemoteDisableScreen.c)
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 xxxRemoteStopScreenUpdates()
{
  __int16 v0; // si
  unsigned __int8 v1; // cl
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+88h] [rbp-80h] BYREF
  int v9; // [rsp+98h] [rbp-70h] BYREF
  __int64 v10; // [rsp+9Ch] [rbp-6Ch]
  __int64 v11; // [rsp+A4h] [rbp-64h]
  __int64 v12; // [rsp+ACh] [rbp-5Ch]
  int v13; // [rsp+B4h] [rbp-54h]
  int v14; // [rsp+B8h] [rbp-50h]
  __int64 v15; // [rsp+BCh] [rbp-4Ch]
  __int64 v16; // [rsp+C4h] [rbp-44h]
  __int64 v17; // [rsp+CCh] [rbp-3Ch]
  int v18; // [rsp+D4h] [rbp-34h]
  int v19; // [rsp+D8h] [rbp-30h]
  __int64 v20; // [rsp+DCh] [rbp-2Ch]
  __int64 v21; // [rsp+E4h] [rbp-24h]
  __int64 v22; // [rsp+ECh] [rbp-1Ch]
  int v23; // [rsp+F4h] [rbp-14h]
  int v24; // [rsp+F8h] [rbp-10h]
  __int64 v25; // [rsp+FCh] [rbp-Ch]
  __int64 v26; // [rsp+104h] [rbp-4h]
  __int64 v27; // [rsp+10Ch] [rbp+4h]
  int v28; // [rsp+114h] [rbp+Ch]
  int v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+11Ch] [rbp+14h]
  __int64 v31; // [rsp+124h] [rbp+1Ch]
  __int64 v32; // [rsp+12Ch] [rbp+24h]
  int v33; // [rsp+134h] [rbp+2Ch]
  int v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+13Ch] [rbp+34h]
  __int64 v36; // [rsp+144h] [rbp+3Ch]
  __int64 v37; // [rsp+14Ch] [rbp+44h]
  int v38; // [rsp+154h] [rbp+4Ch]

  if ( !gbFreezeScreenUpdates )
  {
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskDisconnect )
    {
      v8[0] = 0LL;
      v0 = gwMKButtonState & ~gwMKCurrentButton;
      v1 = gwMKButtonState;
      v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v3 = gliQpcFreq.QuadPart * (unsigned __int64)(unsigned int)v2 / 0x3E8;
      if ( (((unsigned __int8)v0 ^ (unsigned __int8)gwMKButtonState) & 1) != 0 )
      {
        xxxButtonEvent(
          1u,
          gptCursorAsync,
          0LL,
          1,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
          v3,
          0LL,
          0LL,
          0LL,
          0,
          0,
          0,
          0,
          0,
          0LL,
          (__int64)v8);
        v1 = gwMKButtonState;
      }
      if ( (((unsigned __int8)v0 ^ v1) & 2) != 0 )
        xxxButtonEvent(2u, gptCursorAsync, 0LL, 1, v2, v3, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0, 0LL, (__int64)v8);
      v4 = 0LL;
      gwMKButtonState = v0;
      v10 = 0LL;
      v5 = 0;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0;
      v9 = -2136735560;
      v14 = -2119892808;
      v19 = -2136866659;
      v24 = -2120023907;
      v29 = -2136997718;
      v34 = -2120154954;
      do
      {
        xxxProcessKeyEvent((struct tagKE *)(&v9 + 8 * v4), 0LL, 1u, 0, 0LL);
        v4 = ++v5;
      }
      while ( (unsigned __int64)v5 < 6 );
      UpdateKeyLights(1LL, v6);
      RemoteDisableScreen(grpdeskRitInput);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
