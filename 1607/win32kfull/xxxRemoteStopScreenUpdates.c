/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C00EC208
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C01FACC0 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C01FADD0 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C01FAE20 (xxxRemoteShadowStop.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C0218F10 (NtUserRemoteStopScreenUpdates.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     RemoteDisableScreen @ 0x1C00EC3F0 (RemoteDisableScreen.c)
 *     UpdateKeyLights @ 0x1C00EC4CC (UpdateKeyLights.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 xxxRemoteStopScreenUpdates()
{
  __int16 v0; // si
  unsigned __int64 v1; // rbx
  unsigned __int8 v2; // cl
  LONGLONG v3; // rdi
  __int64 v4; // rax
  int v5; // ebx
  _QWORD v7[2]; // [rsp+88h] [rbp-80h] BYREF
  int v8; // [rsp+98h] [rbp-70h] BYREF
  __int64 v9; // [rsp+9Ch] [rbp-6Ch]
  __int64 v10; // [rsp+A4h] [rbp-64h]
  __int64 v11; // [rsp+ACh] [rbp-5Ch]
  int v12; // [rsp+B4h] [rbp-54h]
  int v13; // [rsp+B8h] [rbp-50h]
  __int64 v14; // [rsp+BCh] [rbp-4Ch]
  __int64 v15; // [rsp+C4h] [rbp-44h]
  __int64 v16; // [rsp+CCh] [rbp-3Ch]
  int v17; // [rsp+D4h] [rbp-34h]
  int v18; // [rsp+D8h] [rbp-30h]
  __int64 v19; // [rsp+DCh] [rbp-2Ch]
  __int64 v20; // [rsp+E4h] [rbp-24h]
  __int64 v21; // [rsp+ECh] [rbp-1Ch]
  int v22; // [rsp+F4h] [rbp-14h]
  int v23; // [rsp+F8h] [rbp-10h]
  __int64 v24; // [rsp+FCh] [rbp-Ch]
  __int64 v25; // [rsp+104h] [rbp-4h]
  __int64 v26; // [rsp+10Ch] [rbp+4h]
  int v27; // [rsp+114h] [rbp+Ch]
  int v28; // [rsp+118h] [rbp+10h]
  __int64 v29; // [rsp+11Ch] [rbp+14h]
  __int64 v30; // [rsp+124h] [rbp+1Ch]
  __int64 v31; // [rsp+12Ch] [rbp+24h]
  int v32; // [rsp+134h] [rbp+2Ch]
  int v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+13Ch] [rbp+34h]
  __int64 v35; // [rsp+144h] [rbp+3Ch]
  __int64 v36; // [rsp+14Ch] [rbp+44h]
  int v37; // [rsp+154h] [rbp+4Ch]

  if ( !gbFreezeScreenUpdates )
  {
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskDisconnect )
    {
      v7[0] = 0LL;
      v0 = gwMKButtonState & ~gwMKCurrentButton;
      v1 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v2 = gwMKButtonState;
      v3 = gliQpcFreq.QuadPart * (unsigned int)v1 / 1000;
      if ( (((unsigned __int8)v0 ^ (unsigned __int8)gwMKButtonState) & 1) != 0 )
      {
        xxxButtonEvent(
          1LL,
          gptCursorAsync,
          0LL,
          1u,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
          gliQpcFreq.QuadPart
        * (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        / 1000,
          0LL,
          0LL,
          0LL,
          0,
          0,
          0,
          0,
          0,
          0LL,
          v7);
        v2 = gwMKButtonState;
      }
      if ( (((unsigned __int8)v0 ^ v2) & 2) != 0 )
        xxxButtonEvent(2LL, gptCursorAsync, 0LL, 1u, v1, v3, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0, 0LL, v7);
      v4 = 0LL;
      gwMKButtonState = v0;
      v9 = 0LL;
      v5 = 0;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0;
      v34 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0;
      v8 = -2136735560;
      v13 = -2119892808;
      v18 = -2136866659;
      v23 = -2120023907;
      v28 = -2136997718;
      v33 = -2120154954;
      do
      {
        xxxProcessKeyEvent((struct tagKE *)(&v8 + 8 * v4), 0LL, 1u, 0, 0LL);
        v4 = ++v5;
      }
      while ( (unsigned __int64)v5 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
