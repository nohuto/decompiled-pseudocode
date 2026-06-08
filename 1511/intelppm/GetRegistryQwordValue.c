/*
 * XREFs of GetRegistryQwordValue @ 0x1C0016238
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00230C0 (ProcLibGlobalInit.c)
 * Callees:
 *     memset @ 0x1C0002D00 (memset.c)
 *     GetRegistryDwordValue @ 0x1C00162F0 (GetRegistryDwordValue.c)
 */

__int64 __fastcall GetRegistryQwordValue(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v6; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v7; // [rsp+B8h] [rbp+10h] BYREF

  v7 = a2;
  v6 = 4294967288LL;
  memset(v5, 0, 0x70uLL);
  v5[3] = &v6;
  LODWORD(v5[1]) = 292;
  v5[2] = L"Capabilities";
  LODWORD(v5[4]) = 184549376;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
              v5,
              0LL,
              0LL) >= 0 )
  {
    result = v6;
  }
  else
  {
    GetRegistryDwordValue(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor", L"Capabilities", &v7);
    result = (unsigned int)v7;
  }
  *a3 = result;
  return result;
}
