/*
 * XREFs of ndisHandleLegacyTransport @ 0x1C00B14B0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisHandleLegacyTransport(__int64 a1)
{
  char v2; // al
  const WCHAR *v3; // rdx
  NTSTATUS v4; // eax
  int v5; // ebx
  PCWSTR v7; // rdi
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  __int64 Context; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v11[16]; // [rsp+58h] [rbp-B0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall *v13)(__int64, int, const void *, unsigned int, _DWORD *, void **); // [rsp+A0h] [rbp-68h]
  int v14; // [rsp+A8h] [rbp-60h]
  const wchar_t *v15; // [rsp+B0h] [rbp-58h]
  PCWSTR *p_SourceString; // [rsp+B8h] [rbp-50h]
  int v17; // [rsp+C0h] [rbp-48h]
  __int64 v18; // [rsp+D8h] [rbp-30h]
  int v19; // [rsp+E0h] [rbp-28h]
  __int64 v20; // [rsp+E8h] [rbp-20h]

  SourceString = 0LL;
  v2 = byte_1C008530C;
  if ( (unsigned __int8)byte_1C008530C >= 4u )
  {
    WPP_SF_q(0x2Bu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a1);
    v2 = byte_1C008530C;
  }
  Context = 0LL;
  if ( ndisTdiRegisterCallback )
  {
    v3 = *(const WCHAR **)(a1 + 8);
    QueryTable.Name = (wchar_t *)L"Linkage";
    QueryTable.QueryRoutine = 0LL;
    v13 = ndisReadParameter;
    v14 = 20;
    v15 = L"Export";
    QueryTable.Flags = 1;
    p_SourceString = &SourceString;
    v17 = 0;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v4 = RtlQueryRegistryValuesEx(1u, v3, &QueryTable, &Context, 0LL);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( (_DWORD)Context == 7 )
      {
        v7 = SourceString;
        if ( !SourceString )
        {
LABEL_9:
          if ( (unsigned __int8)byte_1C008530C >= 4u )
            WPP_SF_(0x2Du, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
          return (unsigned int)v5;
        }
        do
        {
          if ( !*v7 )
            break;
          RtlInitUnicodeString(&DestinationString, v7);
          v5 = ((__int64 (__fastcall *)(_UNICODE_STRING *, _BYTE *))ndisTdiRegisterCallback)(&DestinationString, v11);
          if ( v5 < 0 )
            break;
          v7 = (PCWSTR)((char *)v7 + DestinationString.MaximumLength);
        }
        while ( v7 );
      }
      else
      {
        v5 = -1073741823;
      }
    }
    else if ( v4 == -1073741772 )
    {
      v5 = 0;
    }
    if ( SourceString )
      ExFreePoolWithTag((PVOID)SourceString, 0);
    goto LABEL_9;
  }
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_(0x2Cu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  return 3221225473LL;
}
