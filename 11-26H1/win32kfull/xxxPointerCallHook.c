/*
 * XREFs of xxxPointerCallHook @ 0x1401360C4
 * Callers:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkFirstValid @ 0x14003954C (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x140135B9C (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z @ 0x140136220 (-PointerMsgIdFromHookCall@@YA_KPEAUtagTHREADINFO@@I_J@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x140136640 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x140137300 (PrepareSentPointerMessageForClient.c)
 */

__int64 __fastcall xxxPointerCallHook(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r12d
  struct tagTHREADINFO *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  __int64 UserSessionState; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 Valid; // rax
  char *v18; // r8
  _OWORD *v19; // rdx
  _OWORD *v20; // rcx
  int v21; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+48h] [rbp-40h]
  __int128 v24; // [rsp+58h] [rbp-30h]

  v4 = 0;
  v22 = 0LL;
  v21 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v8 = a1;
  v9 = PtiCurrent(a1);
  v12 = PointerMsgIdFromHookCall(v9, a4, (__int64)a3);
  if ( !v12 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v11, v10);
  if ( CTouchProcessor::IsPointerMsgRedirected(*(CTouchProcessor **)(UserSessionState + 3256), v12, &v21) )
  {
    if ( !v21 )
      return 0LL;
  }
  if ( a4 != 3 )
  {
    if ( a4 == 4 )
    {
      v19 = (__int128 *)((char *)a3 + 8);
      v18 = (char *)a3;
      v20 = a3 + 1;
    }
    else
    {
      if ( a4 != 12 )
        return v4;
      v18 = (char *)a3 + 8;
      v19 = a3 + 1;
      v20 = (__int128 *)((char *)a3 + 24);
    }
    if ( !(unsigned int)PrepareSentPointerMessageForClient(v20, v19, v18, 1LL) )
      return v4;
    goto LABEL_8;
  }
  if ( (unsigned int)MakeThreadPointerHookData((struct _LIST_ENTRY *)((char *)v9 + 1208), *((_WORD *)a3 + 8)) )
  {
    v15 = a3[1];
    v22 = *a3;
    v16 = a3[2];
    a3 = &v22;
    v23 = v15;
    v24 = v16;
LABEL_8:
    Valid = PhkFirstValid((__int64)v9, a4);
    v4 = xxxCallHook2(Valid, v8, a2, (__int64)a3, 1u);
    RemoveThreadPointerHookData((struct tagTHREADINFO *)((char *)v9 + 1208));
  }
  return v4;
}
