/*
 * XREFs of fnHkINLPRECT @ 0x140265C64
 * Callers:
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rdx
  int v12; // [rsp+30h] [rbp-78h] BYREF
  void *Src; // [rsp+38h] [rbp-70h] BYREF
  __int128 v14; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+50h] [rbp-58h]
  _DWORD v16[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v17; // [rsp+70h] [rbp-38h]
  __int128 v18; // [rsp+78h] [rbp-30h]
  __int64 v19; // [rsp+88h] [rbp-20h]
  __int64 v20; // [rsp+90h] [rbp-18h]

  Src = 0LL;
  v12 = 0;
  v16[1] = 0;
  v16[0] = a1;
  v17 = a2;
  v18 = *a3;
  v19 = a4;
  v20 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  EtwTraceBeginCallback(48LL);
  v6 = KeUserModeCallback(48LL, v16, 48LL, &Src, &v12);
  EtwTraceEndCallback(48LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  if ( v6 < 0 )
    return 0LL;
  if ( v12 != 24 )
    return 0LL;
  *(_QWORD *)&v14 = 0LL;
  RtlCopyFromUser(&v14, Src, 8uLL);
  v7 = v14;
  v15 = v14;
  v9 = *((_QWORD *)PtiCurrent(v8) + 68);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(__int128 **)(v9 + 96) == a3 )
      return 0LL;
  }
  v10 = (void *)*((_QWORD *)Src + 2);
  v14 = 0LL;
  RtlCopyFromUser(&v14, v10, 0x10uLL);
  *a3 = v14;
  return v7;
}
