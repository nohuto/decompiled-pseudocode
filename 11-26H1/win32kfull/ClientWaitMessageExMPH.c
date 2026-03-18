/*
 * XREFs of ClientWaitMessageExMPH @ 0x14005C134
 * Callers:
 *     xxxWaitMessageEx @ 0x14005C04C (xxxWaitMessageEx.c)
 *     NtUserWaitMessage @ 0x14005C0C0 (NtUserWaitMessage.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

void *__fastcall ClientWaitMessageExMPH(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  int v6; // ebx
  void *result; // rax
  void *Src[5]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  void *v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF
  int v12; // [rsp+7Ch] [rbp+24h]

  Src[0] = 0LL;
  v9 = 0;
  v11 = a1;
  v12 = a2;
  LODWORD(v10) = GET_USERCRIT_DISPOSITION(a1);
  v3 = 1;
  HIDWORD(v10) = 1;
  if ( (_DWORD)v10 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      v5 = *CurrentThreadWin32Thread;
    else
      v5 = 0LL;
    if ( *(_BYTE *)(v5 + 1708) == 1 )
      v3 = 0;
    HIDWORD(v10) = v3;
    UserSessionSwitchLeaveCrit(v5);
  }
  EtwTraceBeginCallback(89LL);
  v6 = KeUserModeCallback(89LL, &v11, 8LL, Src, &v9);
  EtwTraceEndCallback(89LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  if ( v6 < 0 || v9 != 24 )
    return 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v10, Src[0], 8uLL);
  result = v10;
  Src[1] = v10;
  return result;
}
