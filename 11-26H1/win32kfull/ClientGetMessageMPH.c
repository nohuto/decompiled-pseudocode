/*
 * XREFs of ClientGetMessageMPH @ 0x1400593E0
 * Callers:
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rdx
  void *Src; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-70h] BYREF
  int v20; // [rsp+40h] [rbp-68h]
  int v21; // [rsp+44h] [rbp-64h]
  int v22; // [rsp+48h] [rbp-60h]
  int v23; // [rsp+4Ch] [rbp-5Ch]
  __int128 v24; // [rsp+50h] [rbp-58h] BYREF
  __int128 v25; // [rsp+60h] [rbp-48h]
  __int128 v26; // [rsp+70h] [rbp-38h]
  __int64 v27; // [rsp+80h] [rbp-28h]
  __int64 v28; // [rsp+B8h] [rbp+10h] BYREF
  int v29; // [rsp+C0h] [rbp+18h] BYREF

  Src = 0LL;
  v29 = 0;
  v19 = a2;
  v20 = a3;
  v21 = a4;
  v22 = a5;
  v23 = a6;
  LODWORD(v28) = GET_USERCRIT_DISPOSITION((__int64)a1);
  HIDWORD(v28) = 1;
  if ( (_DWORD)v28 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7);
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    HIDWORD(v28) = *(_BYTE *)(v9 + 1708) != 1;
    UserSessionSwitchLeaveCrit(v9);
  }
  EtwTraceBeginCallback(73LL);
  v10 = KeUserModeCallback(73LL, &v19, 24LL, &Src, &v29);
  EtwTraceEndCallback(73LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v28);
  if ( v10 < 0 || v29 != 24 )
    return 0LL;
  v28 = 0LL;
  RtlCopyFromUser(&v28, Src, 8uLL);
  v11 = v28;
  v27 = v28;
  v13 = (_QWORD *)PsGetCurrentThreadWin32Thread(v12);
  v14 = v13 ? *v13 : 0LL;
  v15 = *(_QWORD *)(v14 + 544);
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 84) & 1) != 0 && *(_OWORD **)(v15 + 96) == a1 )
      return 0LL;
  }
  v16 = (void *)*((_QWORD *)Src + 2);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  RtlCopyFromUser(&v24, v16, 0x30uLL);
  *a1 = v24;
  a1[1] = v25;
  a1[2] = v26;
  return v11;
}
