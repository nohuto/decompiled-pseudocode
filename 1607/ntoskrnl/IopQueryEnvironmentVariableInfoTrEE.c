/*
 * XREFs of IopQueryEnvironmentVariableInfoTrEE @ 0x140629084
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopIssueTrEERequest @ 0x1401CC048 (IopIssueTrEERequest.c)
 *     IopEfiStatusToNTSTATUS @ 0x1406283B0 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopQueryEnvironmentVariableInfoTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v7; // edx
  int v9; // [rsp+50h] [rbp-48h] BYREF
  int v10; // [rsp+54h] [rbp-44h] BYREF
  unsigned __int64 v11[4]; // [rsp+58h] [rbp-40h] BYREF

  v9 = a3;
  v7 = IopIssueTrEERequest(2, a1, a2, (__int64)&v9, 4u, (__int64)v11, 0x20u, 0x20u, &v10);
  if ( v7 >= 0 )
  {
    if ( v11[0] )
    {
      return (unsigned int)IopEfiStatusToNTSTATUS(v11[0]);
    }
    else
    {
      *a4 = v11[1];
      *a5 = v11[2];
      *a6 = v11[3];
    }
  }
  return (unsigned int)v7;
}
