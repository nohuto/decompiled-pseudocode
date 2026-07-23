/*
 * XREFs of PopGetConsoleDisplayRequestCount @ 0x140008870
 * Callers:
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140008650 (RtlGetActiveConsoleId.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     TtmIsEnabled @ 0x1403F27E8 (TtmIsEnabled.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x140678740 (TtmGetSessionDisplayRequiredCount.c)
 */

__int64 PopGetConsoleDisplayRequestCount()
{
  unsigned int v0; // ebx
  int v1; // eax
  unsigned int v2; // ecx
  _QWORD v4[6]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+10h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  ULONG ActiveConsoleId; // [rsp+70h] [rbp+20h] BYREF

  v0 = 0;
  v5 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId == -1 )
    {
      return v5;
    }
    else if ( (unsigned __int8)TtmIsEnabled(ActiveConsoleId) )
    {
      return (unsigned int)TtmGetSessionDisplayRequiredCount();
    }
    else
    {
      memset(v4, 0, 0x28uLL);
      v6 = 0;
      LODWORD(v4[1]) = 4;
      v4[2] = &v6;
      LODWORD(v4[3]) = 4;
      v4[4] = &v5;
      LODWORD(v4[0]) = 2;
      v1 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, ULONG *))PsInvokeWin32Callout)(
             5LL,
             v4,
             1LL,
             &ActiveConsoleId);
      v2 = v5;
      if ( v1 < 0 )
        return 0;
      return v2;
    }
  }
  return v0;
}
