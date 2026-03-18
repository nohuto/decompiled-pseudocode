/*
 * XREFs of EtwTraceThreadWorkOnBehalfUpdate @ 0x1405108B0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1400D1630 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400D3D20 (PspRevertContainerImpersonation.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceThreadWorkOnBehalfUpdate(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rsi
  BOOLEAN result; // al
  int v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+34h] [rbp-2Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  int *v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  v2 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    if ( a1 )
      v6 = *(_DWORD *)(a1 + 1592);
    else
      v6 = 0;
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v6;
    if ( a2 )
      v7 = *(_DWORD *)(a2 + 1592);
    else
      v7 = 0;
    v10 = 4LL;
    v9 = &v7;
    return EtwWrite(v2, &ThreadWorkOnBehalfUpdate, 0LL, 2u, &UserData);
  }
  return result;
}
