/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C020D020
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     xxxClientCopyDDEOut2 @ 0x1C020D348 (xxxClientCopyDDEOut2.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 *v3; // rbx
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  _DWORD v7[4]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp-138h] BYREF
  __int64 v9; // [rsp+48h] [rbp-130h]
  __int128 v10; // [rsp+60h] [rbp-118h] BYREF
  __int128 v11; // [rsp+70h] [rbp-108h]
  __int128 v12; // [rsp+80h] [rbp-F8h]
  __int128 v13; // [rsp+90h] [rbp-E8h]
  __int64 v14; // [rsp+A0h] [rbp-D8h]
  __int128 v15; // [rsp+B0h] [rbp-C8h]
  __int128 v16; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v18[2]; // [rsp+E0h] [rbp-98h]
  __int64 v19; // [rsp+F0h] [rbp-88h]
  _OWORD v20[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v21; // [rsp+150h] [rbp-28h]

  v1 = a1;
  v20[0] = *(_OWORD *)a1;
  v20[1] = *(_OWORD *)(a1 + 16);
  v20[2] = *(_OWORD *)(a1 + 32);
  v20[3] = *(_OWORD *)(a1 + 48);
  v21 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v20, 72LL, &v8, v7);
  EtwTraceEndCallback(62LL);
  EnterCrit(0LL, 1LL);
  if ( v2 < 0 || v7[0] != 24 )
    return 0LL;
  v3 = (__int64 *)v8;
  if ( v8 + 8 < v8 || v8 + 8 > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  v4 = *v3;
  v9 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v8 + 16);
    if ( v5 + 72 < v5 || v5 + 72 > W32UserProbeAddress )
      v5 = W32UserProbeAddress;
    v15 = *(_OWORD *)v5;
    v16 = *(_OWORD *)(v5 + 16);
    *(_OWORD *)Address = *(_OWORD *)(v5 + 32);
    *(_OWORD *)v18 = *(_OWORD *)(v5 + 48);
    v19 = *(_QWORD *)(v5 + 64);
    v10 = v15;
    v11 = v16;
    v12 = *(_OWORD *)Address;
    v13 = *(_OWORD *)v18;
    v14 = v19;
    if ( *(_DWORD *)(v1 + 40) )
    {
      ProbeForWrite(Address[0], *(int *)(v1 + 40), 1u);
      memmove((void *)Address[0], (const void *)(v1 + 72), *(int *)(v1 + 40));
    }
    if ( *(_DWORD *)(v1 + 64) )
    {
      ProbeForWrite(v18[1], *(int *)(v1 + 64), 1u);
      memmove((void *)v18[1], (const void *)(*(int *)(v1 + 40) + v1 + 72), *(int *)(v1 + 64));
    }
    if ( *((_QWORD *)&v16 + 1) && (unsigned int)xxxClientCopyDDEOut2(&v10) )
    {
      if ( (v11 & 0x800) != 0 )
        v4 = *((_QWORD *)&v11 + 1);
      v9 = v4;
    }
    *(_OWORD *)v1 = v10;
    *(_OWORD *)(v1 + 16) = v11;
    *(_OWORD *)(v1 + 32) = v12;
    *(_OWORD *)(v1 + 48) = v13;
    *(_QWORD *)(v1 + 64) = v14;
  }
  return v4;
}
