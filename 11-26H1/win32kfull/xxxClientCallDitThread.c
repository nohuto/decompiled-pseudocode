/*
 * XREFs of xxxClientCallDitThread @ 0x140198798
 * Callers:
 *     ClientCallDitThread @ 0x140198780 (ClientCallDitThread.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rbx
  void *v18; // [rsp+30h] [rbp-188h] BYREF
  int v19; // [rsp+38h] [rbp-180h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-178h] BYREF
  _OWORD v21[7]; // [rsp+60h] [rbp-158h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-E8h] BYREF
  _OWORD v23[12]; // [rsp+D8h] [rbp-E0h] BYREF

  Src[0] = 0LL;
  v19 = 0;
  memset_0(v23, 0, sizeof(v23));
  v22 = a1;
  v23[0] = *a2;
  v23[1] = a2[1];
  v23[2] = a2[2];
  v23[3] = a2[3];
  v23[4] = a2[4];
  v23[5] = *a3;
  v23[6] = a3[1];
  v23[7] = a3[2];
  v23[8] = a3[3];
  v23[9] = a3[4];
  v23[10] = a3[5];
  v23[11] = a3[6];
  LODWORD(v18) = GET_USERCRIT_DISPOSITION(v6);
  HIDWORD(v18) = 1;
  if ( (_DWORD)v18 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7);
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    HIDWORD(v18) = *(_BYTE *)(v9 + 1708) != 1;
    UserSessionSwitchLeaveCrit(v9);
  }
  EtwTraceBeginCallback(56LL);
  v10 = KeUserModeCallback(56LL, &v22, 200LL, Src, &v19);
  EtwTraceEndCallback(56LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18);
  if ( v10 < 0 || v19 != 24 )
    return 0LL;
  v18 = 0LL;
  RtlCopyFromUser(&v18, Src[0], 8uLL);
  v11 = (unsigned int)v18;
  Src[1] = v18;
  v13 = (_QWORD *)PsGetCurrentThreadWin32Thread(v12);
  v14 = v13 ? *v13 : 0LL;
  v15 = *(_QWORD *)(v14 + 544);
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 84) & 1) != 0 && *(_OWORD **)(v15 + 96) == a3 )
      return 0LL;
  }
  v16 = (void *)*((_QWORD *)Src[0] + 2);
  memset_0(v21, 0, sizeof(v21));
  RtlCopyFromUser(v21, v16, 0x70uLL);
  *a3 = v21[0];
  a3[1] = v21[1];
  a3[2] = v21[2];
  a3[3] = v21[3];
  a3[4] = v21[4];
  a3[5] = v21[5];
  a3[6] = v21[6];
  return v11;
}
