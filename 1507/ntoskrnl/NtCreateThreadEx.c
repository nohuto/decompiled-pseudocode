/*
 * XREFs of NtCreateThreadEx @ 0x140450950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140450BA4 (PspDeleteCreateProcessContext.c)
 *     PspCreateThread @ 0x140450CE0 (PspCreateThread.c)
 */

__int64 __fastcall NtCreateThreadEx(
        ULONG64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  unsigned int Thread; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rcx
  _BYTE v22[56]; // [rsp+98h] [rbp-6E0h] BYREF
  _QWORD v23[204]; // [rsp+D0h] [rbp-6A8h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(&v23[50], 0, 1232);
  if ( (a7 & 0xFFFFFFE0) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v21 = (_QWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v21 = (_QWORD *)MmUserProbeAddress;
    *v21 = *v21;
  }
  memset(v23, 0, 0x188uLL);
  if ( !a11
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v15, 1u, (__int64)v23),
        (int)result >= 0) )
  {
    v23[56] = 0x1F800010000BLL;
    v23[81] = PspUserThreadStart;
    v23[66] = a5;
    v23[67] = a6;
    *(_DWORD *)((char *)&v23[57] + 2) = 2818091;
    *(_DWORD *)((char *)&v23[57] + 6) = 2818131;
    WORD1(v23[58]) = 43;
    LOWORD(v23[57]) = 51;
    LOWORD(v23[82]) = 639;
    LODWORD(v23[85]) = 8064;
    Thread = PspCreateThread(a1, a2, a3, a4);
    PspDeleteCreateProcessContext(v23, v18, v19, v20, 0);
    return Thread;
  }
  return result;
}
