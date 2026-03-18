/*
 * XREFs of fnHkINLPCHARHOOKSTRUCT @ 0x14003D96C
 * Callers:
 *     xxxCallCtfHook @ 0x14003CF78 (xxxCallCtfHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall fnHkINLPCHARHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-98h] BYREF
  __int128 v15; // [rsp+40h] [rbp-88h]
  __int64 v16; // [rsp+50h] [rbp-78h]
  int v17; // [rsp+70h] [rbp-58h] BYREF
  __int64 v18; // [rsp+78h] [rbp-50h]
  __int64 v19; // [rsp+80h] [rbp-48h]
  __int64 v20; // [rsp+88h] [rbp-40h]
  __int128 v21; // [rsp+90h] [rbp-38h]
  __int128 v22; // [rsp+A0h] [rbp-28h]
  int v23; // [rsp+B0h] [rbp-18h]
  int v24; // [rsp+D0h] [rbp+8h] BYREF
  void *Src; // [rsp+E8h] [rbp+20h] BYREF

  Src = 0LL;
  v24 = 0;
  memset_0(&v17, 0, 0x48uLL);
  v17 = a1;
  v18 = a2;
  v21 = *a3;
  v22 = a3[1];
  v23 = 0;
  v19 = 0LL;
  v20 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(130LL);
  v8 = KeUserModeCallback(130LL, &v17, 72LL, &Src, &v24);
  EtwTraceEndCallback(130LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v8 < 0 )
    return 0LL;
  if ( v24 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  v9 = a5;
  v16 = a5;
  v11 = *((_QWORD *)PtiCurrent(v10) + 68);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(__int128 **)(v11 + 96) == a3 )
      return 0LL;
  }
  v12 = (void *)*((_QWORD *)Src + 2);
  v14 = 0LL;
  v15 = 0LL;
  RtlCopyFromUser(&v14, v12, 0x20uLL);
  *a3 = v14;
  a3[1] = v15;
  return v9;
}
