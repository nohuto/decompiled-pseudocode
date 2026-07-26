/*
 * XREFs of WPP_SF_qSD @ 0x1C003F2E8
 * Callers:
 *     ndisMNotifyMachineName @ 0x1C00ACAB8 (ndisMNotifyMachineName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qSD(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const wchar_t *v6; // rax
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v7 = a3;
  if ( a4 )
  {
    if ( *a4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a4[v5] );
      v4 = 2 * v5 + 2;
    }
    else
    {
      v4 = 14LL;
    }
  }
  else
  {
    v4 = 10LL;
  }
  if ( a4 )
  {
    v6 = L"<NULL>";
    if ( *a4 )
      v6 = a4;
  }
  else
  {
    v6 = L"NULL";
  }
  ndisWppFastTraceMessage(&WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, 0x65u, &v7, 8LL, v6, v4, va, 4LL, 0LL);
}
