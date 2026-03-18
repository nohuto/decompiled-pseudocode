/*
 * XREFs of ClientGetMessageMPH @ 0x1C0104E3C
 * Callers:
 *     NtUserPeekMessage @ 0x1C007F4F0 (NtUserPeekMessage.c)
 *     NtUserGetMessage @ 0x1C0080190 (NtUserGetMessage.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00DFFA0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _OWORD *v6; // rdi
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

  v6 = a1;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v17 = a5;
  v18 = a6;
  if ( gdwInAtomicOperation )
  {
    a1 = (_OWORD *)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(73LL);
  v7 = KeUserModeCallback(73LL, &v14, 24LL, &v19, &a5);
  EtwTraceEndCallback(73LL);
  EnterCrit(0LL, 1LL);
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
  *v6 = *v10;
  v6[1] = v11;
  v6[2] = v12;
  return (unsigned int)v9;
}
