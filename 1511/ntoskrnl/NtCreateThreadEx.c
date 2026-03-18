/*
 * XREFs of NtCreateThreadEx @ 0x14044528C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspDeleteCreateProcessContext @ 0x1404454E0 (PspDeleteCreateProcessContext.c)
 *     PspCreateThread @ 0x14044564C (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x14044629C (PspBuildCreateProcessContext.c)
 */

__int64 __fastcall NtCreateThreadEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned int Thread; // ebx
  _BYTE v18[8]; // [rsp+70h] [rbp-708h] BYREF
  __int64 v19; // [rsp+78h] [rbp-700h]
  __int64 v20; // [rsp+80h] [rbp-6F8h]
  __int64 v21; // [rsp+88h] [rbp-6F0h]
  _QWORD v22[8]; // [rsp+90h] [rbp-6E8h] BYREF
  _QWORD v23[50]; // [rsp+D0h] [rbp-6A8h] BYREF
  _QWORD v24[154]; // [rsp+260h] [rbp-518h] BYREF

  v14 = a1;
  memset(v22, 0, sizeof(v22));
  memset(v24, 0, sizeof(v24));
  if ( (a7 & 0xFFFFFFE0) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = *a1;
  }
  v18[0] = 0;
  v20 = a9;
  v21 = a10;
  v19 = a8;
  memset(v23, 0, sizeof(v23));
  if ( !a11
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v15, 1LL, v23),
        (int)result >= 0) )
  {
    v24[6] = 0x1F800010000BLL;
    v24[31] = PspUserThreadStart;
    v24[16] = a5;
    v24[17] = a6;
    *(_DWORD *)((char *)&v24[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v24[7] + 6) = 2818131;
    WORD1(v24[8]) = 43;
    LOWORD(v24[7]) = 51;
    LOWORD(v24[32]) = 639;
    LODWORD(v24[35]) = 8064;
    Thread = PspCreateThread(v14, a2, a3, a4, 0LL, v23, v23[2], v24, v22, a7, a5, a6, v18);
    PspDeleteCreateProcessContext(v23);
    return Thread;
  }
  return result;
}
