/*
 * XREFs of xxxClientGetDDEHookData @ 0x1402D833C
 * Callers:
 *     xxxDDETrackPostHook @ 0x14026E294 (xxxDDETrackPostHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rdx
  int v11; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  void *Src; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-B0h]
  __int128 v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-60h]

  Src = 0LL;
  v11 = 0;
  memset_0(&v19, 0, 0x48uLL);
  v20 = a2;
  v19 = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  EtwTraceBeginCallback(71LL);
  LODWORD(a2) = KeUserModeCallback(71LL, &v19, 72LL, &Src, &v11);
  EtwTraceEndCallback(71LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  if ( (int)a2 < 0 )
    return 0LL;
  if ( v11 != 24 )
    return 0LL;
  v12 = 0LL;
  RtlCopyFromUser(&v12, Src, 8uLL);
  v6 = v12;
  v18 = v12;
  v8 = *((_QWORD *)PtiCurrent(v7) + 68);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 84) & 1) != 0 && *(_QWORD *)(v8 + 96) == a3 )
      return 0LL;
  }
  v9 = (void *)*((_QWORD *)Src + 2);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  RtlCopyFromUser(&v14, v9, 0x38uLL);
  *(_OWORD *)a3 = v14;
  *(_OWORD *)(a3 + 16) = v15;
  *(_OWORD *)(a3 + 32) = v16;
  *(_QWORD *)(a3 + 48) = v17;
  return v6;
}
