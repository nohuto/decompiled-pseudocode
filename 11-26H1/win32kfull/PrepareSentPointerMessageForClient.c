/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x140137300
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x140037AA0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1401360C4 (xxxPointerCallHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x140137534 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r14
  void *v5; // rbx
  unsigned int v7; // edi
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerMessage; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  char *v18; // rdx
  unsigned __int64 v20; // rcx
  __int64 result; // rax
  int v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+74h] [rbp-8Ch] BYREF
  int v24; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v25; // [rsp+80h] [rbp-80h] BYREF
  HWND v26; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v29[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-10h]
  __int128 v31; // [rsp+100h] [rbp+0h]
  _OWORD v32[10]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 v33; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v34; // [rsp+1C8h] [rbp+C8h] BYREF
  int v35; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = *a3;
  v5 = *a2;
  v7 = *a1;
  v27 = 0LL;
  v28 = 0LL;
  v33 = 0;
  v34 = 0;
  v24 = 0;
  v26 = 0LL;
  v25 = 0LL;
  v23 = 0;
  v22 = 0;
  v35 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  PointerMessage = CTouchProcessor::PrepareMakePointerMessage(
                     *(CTouchProcessor **)(UserSessionState + 3256),
                     v4,
                     &v25,
                     &v23,
                     &v22,
                     &v35);
  if ( !(unsigned int)MakePointerMessageWorker(
                        PointerMessage,
                        v25,
                        v23,
                        v22,
                        v35,
                        v7,
                        v5,
                        &v27,
                        &v28,
                        &v33,
                        &v34,
                        &v24,
                        &v26) )
    return 0LL;
  v13 = HMValidateHandleNoSecure((__int64)v26, 1);
  memset_0(v29, 0, 0x70uLL);
  if ( v13 )
  {
    LODWORD(v29[0]) = 4;
    *(_QWORD *)&v30 = v13;
    HIDWORD(v30) = 2;
  }
  v16 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 3256);
  v32[0] = v29[0];
  v32[1] = v29[1];
  v32[2] = v29[2];
  v32[3] = v29[3];
  v32[4] = v29[4];
  v32[5] = v30;
  v32[6] = v31;
  v18 = (char *)PtiCurrent(v17) + 1208;
  if ( !(a4
       ? CTouchProcessor::AddThreadPointerHookData(v16, v18, v33, v34, v4, v7, v32)
       : (unsigned int)CTouchProcessor::AddThreadPointerData(v16, v18, v33, v34, v4, v7, v32, 0)) )
    return 0LL;
  v20 = v27;
  result = 1LL;
  *a1 = v7;
  *a2 = (void *)v20;
  *a3 = v28;
  return result;
}
