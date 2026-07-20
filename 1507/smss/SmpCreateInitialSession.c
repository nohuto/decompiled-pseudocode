/*
 * XREFs of SmpCreateInitialSession @ 0x140002E30
 * Callers:
 *     <none>
 * Callees:
 *     SmpStartCsr @ 0x140005CC0 (SmpStartCsr.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140013128 (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x1400131B8 (SmpUnhandledExceptionFilter.c)
 */

__int64 SmpCreateInitialSession()
{
  __int64 result; // rax
  int v1; // ebx
  unsigned __int64 Parameters[2]; // [rsp+28h] [rbp-190h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v4[8]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v5; // [rsp+58h] [rbp-160h]
  int v6; // [rsp+78h] [rbp-140h]
  int v7; // [rsp+80h] [rbp-138h]
  int v8; // [rsp+84h] [rbp-134h]

  v7 = -1;
  v8 = 0;
  v6 = 5;
  v5 = SmpUniqueProcessId;
  result = SmpStartCsr(v4, 0LL, 0LL);
  v1 = result;
  if ( (int)result < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Session Manager Core Session failure");
    Parameters[0] = (unsigned __int64)&DestinationString;
    Parameters[1] = v1;
    SmpTerminate(Parameters, 1u, 2u);
    JUMPOUT(0x14000D15ALL);
  }
  return result;
}
