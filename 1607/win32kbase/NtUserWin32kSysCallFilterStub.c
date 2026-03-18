/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C00BC100
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _TlgWriteAgg @ 0x1C00BC1D8 (_TlgWriteAgg.c)
 *     EtwSyscallFilterMessage @ 0x1C00CBFE0 (EtwSyscallFilterMessage.c)
 */

BOOLEAN __fastcall NtUserWin32kSysCallFilterStub(int a1)
{
  BOOLEAN result; // al
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v5; // [rsp+20h] [rbp-78h]
  int v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v6 = a1;
  EtwSyscallFilterMessage();
  result = PsIsWin32KFilterAuditEnabled();
  if ( result && (unsigned int)dword_1C0118750 > 5 )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1C0118750, 0x800000000000uLL);
    if ( result )
    {
      v11 = 0;
      v14 = 0;
      v9 = &v7;
      v12 = &v6;
      v7 = 1LL;
      v10 = 8;
      v13 = 4;
      return TlgWriteAgg(v2, (int)&dword_1C0103C5E, v3, v4, v5, &v8);
    }
  }
  return result;
}
