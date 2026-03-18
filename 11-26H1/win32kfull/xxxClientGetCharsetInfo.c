/*
 * XREFs of xxxClientGetCharsetInfo @ 0x14024102C
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x140240F30 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rdx
  int v9; // [rsp+30h] [rbp-88h] BYREF
  __int64 v10; // [rsp+38h] [rbp-80h] BYREF
  void *Src; // [rsp+40h] [rbp-78h] BYREF
  __int128 v12; // [rsp+48h] [rbp-70h] BYREF
  __int128 v13; // [rsp+58h] [rbp-60h]
  __int64 v14; // [rsp+68h] [rbp-50h]
  int v15; // [rsp+80h] [rbp-38h] BYREF
  __int128 v16; // [rsp+84h] [rbp-34h]
  __int128 v17; // [rsp+94h] [rbp-24h]

  Src = 0LL;
  v9 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v15 = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  EtwTraceBeginCallback(69LL);
  v3 = KeUserModeCallback(69LL, &v15, 36LL, &Src, &v9);
  EtwTraceEndCallback(69LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  if ( v3 < 0 )
    return 0LL;
  if ( v9 != 24 )
    return 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v10, Src, 8uLL);
  v4 = v10;
  v14 = v10;
  v6 = *((_QWORD *)PtiCurrent(v5) + 68);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 84) & 1) != 0 && *(_OWORD **)(v6 + 96) == a2 )
      return 0LL;
  }
  v7 = (void *)*((_QWORD *)Src + 2);
  v12 = 0LL;
  v13 = 0LL;
  RtlCopyFromUser(&v12, v7, 0x20uLL);
  *a2 = v12;
  a2[1] = v13;
  return v4;
}
