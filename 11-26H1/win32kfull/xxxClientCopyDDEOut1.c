/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x14026AF44
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1402D4D2C (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  void *v6; // rbx
  int v8; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-140h] BYREF
  void *Src; // [rsp+50h] [rbp-128h] BYREF
  __int64 v11; // [rsp+58h] [rbp-120h]
  __int128 v12; // [rsp+60h] [rbp-118h] BYREF
  __int128 v13; // [rsp+70h] [rbp-108h]
  __int128 v14; // [rsp+80h] [rbp-F8h]
  __int128 v15; // [rsp+90h] [rbp-E8h]
  __int64 v16; // [rsp+A0h] [rbp-D8h]
  __int128 v17; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v20[2]; // [rsp+E0h] [rbp-98h]
  __int64 v21; // [rsp+F0h] [rbp-88h]
  _OWORD v22[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v23; // [rsp+150h] [rbp-28h]

  Src = 0LL;
  v8 = 0;
  v22[0] = *(_OWORD *)a1;
  v22[1] = *(_OWORD *)(a1 + 16);
  v22[2] = *(_OWORD *)(a1 + 32);
  v22[3] = *(_OWORD *)(a1 + 48);
  v23 = *(_QWORD *)(a1 + 64);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v9);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v22, 72LL, &Src, &v8);
  EtwTraceEndCallback(62LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v9);
  if ( v2 >= 0 && v8 == 24 )
  {
    v9[0] = 0LL;
    RtlCopyFromUser(v9, Src, 8uLL);
    v4 = v9[0];
    v11 = v9[0];
    if ( !v9[0] )
      return v4;
    v5 = *((_QWORD *)PtiCurrent(v3) + 68);
    if ( !v5 || (*(_DWORD *)(v5 + 84) & 1) == 0 || *(__int128 **)(v5 + 96) != &v12 )
    {
      v6 = (void *)*((_QWORD *)Src + 2);
      memset_0(&v17, 0, 0x48uLL);
      RtlCopyFromUser(&v17, v6, 0x48uLL);
      v12 = v17;
      v13 = v18;
      v14 = *(_OWORD *)Address;
      v15 = *(_OWORD *)v20;
      v16 = v21;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v20[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v20[1], (const void *)(a1 + *(int *)(a1 + 40) + 72LL), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v18 + 1) && xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v12) )
      {
        if ( (v13 & 0x800) != 0 )
          v4 = *((_QWORD *)&v13 + 1);
        v11 = v4;
      }
      *(_OWORD *)a1 = v12;
      *(_OWORD *)(a1 + 16) = v13;
      *(_OWORD *)(a1 + 32) = v14;
      *(_OWORD *)(a1 + 48) = v15;
      *(_QWORD *)(a1 + 64) = v16;
      return v4;
    }
  }
  return 0LL;
}
