/*
 * XREFs of ClientGetMessageMPH @ 0x1C0067748
 * Callers:
 *     NtUserPeekMessage @ 0x1C0068FB0 (NtUserPeekMessage.c)
 *     NtUserGetMessage @ 0x1C00697F0 (NtUserGetMessage.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007C798 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  int v15; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+54h] [rbp-14h]
  int v17; // [rsp+58h] [rbp-10h]
  int v18; // [rsp+5Ch] [rbp-Ch]
  unsigned __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v14 = a2;
  v15 = a3;
  v16 = a4;
  v17 = a5;
  v18 = a6;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(72LL);
  v7 = KeUserModeCallback(72LL, &v14, 24LL, &v19, &a5);
  EtwTraceEndCallback(72LL);
  EnterCrit(1LL);
  if ( v7 < 0 || a5 != 24 )
    return 0LL;
  v8 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > W32UserProbeAddress )
    v8 = (__int64 *)W32UserProbeAddress;
  v9 = *v8;
  v10 = *(_OWORD **)(v19 + 16);
  if ( v10 + 3 < v10 || (unsigned __int64)(v10 + 3) > W32UserProbeAddress )
    v10 = (_OWORD *)W32UserProbeAddress;
  v11 = v10[1];
  v12 = v10[2];
  *a1 = *v10;
  a1[1] = v11;
  a1[2] = v12;
  return (unsigned int)v9;
}
