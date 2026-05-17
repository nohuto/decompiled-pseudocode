/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1800544D0
 * Callers:
 *     RtlCreateUserThread @ 0x180054460 (RtlCreateUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3B0 (RtlQueryProcessDebugInformation.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D0410 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlSetProcessDebugInformation @ 0x1800D52F0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D8200 (RtlWow64SuspendThreadEx.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtCreateThreadEx @ 0x1800A7AD0 (NtCreateThreadEx.c)
 */

__int64 __fastcall RtlpCreateUserThreadEx(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        HANDLE *a10,
        _OWORD *a11)
{
  int v12; // edx
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  _QWORD v22[10]; // [rsp+B0h] [rbp-50h] BYREF

  v15 = 0LL;
  if ( (a3 & 0xFFFFFFE8) != 0 )
    return 3221225485LL;
  v12 = (a3 & 1) != 0;
  if ( (a3 & 2) != 0 )
    v12 |= 2u;
  if ( (a3 & 4) != 0 )
    v12 |= 4u;
  if ( (a3 & 0x10) != 0 )
    v12 |= 0x10u;
  v17 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  v22[4] = 0LL;
  v20 = a2;
  v22[3] = &v15;
  v16 = 48;
  v19 = 512;
  v22[1] = 65539LL;
  v22[2] = 16LL;
  v22[0] = 40LL;
  result = NtCreateThreadEx(&Handle, 0x1FFFFFLL, &v16, a1, a8, a9, v12, a4, a6, a5, v22);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      NtClose(Handle);
    if ( a11 )
      *a11 = v15;
    return 0LL;
  }
  return result;
}
