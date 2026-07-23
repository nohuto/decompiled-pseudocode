/*
 * XREFs of IopIssueTrEERequest @ 0x1401CC048
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140628630 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140628B9C (IopGetEnvironmentVariableTrEE.c)
 *     IopQueryEnvironmentVariableInfoTrEE @ 0x140629084 (IopQueryEnvironmentVariableInfoTrEE.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140629260 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140628D34 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopIssueTrEERequest(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        _DWORD *a9)
{
  int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned int v12; // [rsp+50h] [rbp-58h] BYREF
  _DWORD InputBuffer[4]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v14; // [rsp+68h] [rbp-40h]
  __int64 v15; // [rsp+70h] [rbp-38h]
  __int64 v16; // [rsp+78h] [rbp-30h]
  __int64 v17; // [rsp+80h] [rbp-28h]
  __int64 v18; // [rsp+88h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp-18h]

  InputBuffer[3] = a1;
  v15 = a5;
  v17 = a7;
  v16 = a6;
  v14 = a4;
  v9 = IopIssueSystemEnvironmentRequest(0x568004u, InputBuffer, 0x30u, &v18, 0x10u, (__int64)&v12);
  if ( v9 >= 0 )
  {
    if ( v12 < 0x10 )
      return (unsigned int)-1073741434;
    v10 = v19;
    if ( a9 )
    {
      if ( v19 > 0xFFFFFFFF )
      {
        *a9 = -1;
        v9 = -1073741675;
      }
      else
      {
        *a9 = v19;
        v9 = 0;
      }
    }
    if ( v10 < a8 )
      return (unsigned int)-1073741434;
  }
  return (unsigned int)v9;
}
