/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C0214390
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01EC0CC (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     xxxClientCopyDDEOut2 @ 0x1C0214640 (xxxClientCopyDDEOut2.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 *v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int128 v7; // xmm4
  __int64 v8; // xmm0_8
  int v10; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-130h] BYREF
  __int64 v12; // [rsp+40h] [rbp-128h]
  __int128 v13; // [rsp+50h] [rbp-118h] BYREF
  __int128 v14; // [rsp+60h] [rbp-108h]
  __int128 v15; // [rsp+70h] [rbp-F8h]
  __int128 v16; // [rsp+80h] [rbp-E8h]
  __int64 v17; // [rsp+90h] [rbp-D8h]
  __int128 v18; // [rsp+C0h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-98h]
  volatile void *v20[2]; // [rsp+E0h] [rbp-88h]
  _OWORD v21[4]; // [rsp+100h] [rbp-68h] BYREF
  __int64 v22; // [rsp+140h] [rbp-28h]

  v21[0] = *(_OWORD *)a1;
  v21[1] = *(_OWORD *)(a1 + 16);
  v21[2] = *(_OWORD *)(a1 + 32);
  v21[3] = *(_OWORD *)(a1 + 48);
  v22 = *(_QWORD *)(a1 + 64);
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(61LL);
  v3 = KeUserModeCallback(61LL, v21, 72LL, &v11, &v10);
  EtwTraceEndCallback(61LL);
  EnterCrit(0LL, 1LL);
  if ( v3 < 0 || v10 != 24 )
    return 0LL;
  v4 = (__int64 *)v11;
  if ( v11 + 8 < v11 || v11 + 8 > W32UserProbeAddress )
    v4 = (__int64 *)W32UserProbeAddress;
  v5 = *v4;
  v12 = v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v11 + 16);
    if ( v6 + 72 < v6 || v6 + 72 > W32UserProbeAddress )
      v6 = W32UserProbeAddress;
    v7 = *(_OWORD *)v6;
    v18 = *(_OWORD *)(v6 + 16);
    *(_OWORD *)Address = *(_OWORD *)(v6 + 32);
    *(_OWORD *)v20 = *(_OWORD *)(v6 + 48);
    v8 = *(_QWORD *)(v6 + 64);
    v13 = v7;
    v14 = v18;
    v15 = *(_OWORD *)Address;
    v16 = *(_OWORD *)v20;
    v17 = v8;
    if ( *(_DWORD *)(a1 + 40) )
    {
      ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
      memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
    }
    if ( *(_DWORD *)(a1 + 64) )
    {
      ProbeForWrite(v20[1], *(int *)(a1 + 64), 1u);
      memmove((void *)v20[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
    }
    if ( *((_QWORD *)&v18 + 1) && (unsigned int)xxxClientCopyDDEOut2(&v13) )
    {
      if ( (v14 & 0x800) != 0 )
        v5 = *((_QWORD *)&v14 + 1);
      v12 = v5;
    }
    *(_OWORD *)a1 = v13;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 48) = v16;
    *(_QWORD *)(a1 + 64) = v17;
  }
  return v5;
}
