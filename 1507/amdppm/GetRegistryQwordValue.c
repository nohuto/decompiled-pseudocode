/*
 * XREFs of GetRegistryQwordValue @ 0x1C001BEBC
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
 * Callees:
 *     memset @ 0x1C00062C0 (memset.c)
 */

__int64 __fastcall GetRegistryQwordValue(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD v6[14]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v7; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v8; // [rsp+C0h] [rbp+6Fh] BYREF

  v7 = 0LL;
  v8 = 4294967288LL;
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[1]) = 32;
  v6[2] = L"Capabilities";
  LODWORD(v6[4]) = 11;
  v6[3] = &v8;
  LODWORD(v6[6]) = 8;
  v6[5] = &v7;
  result = RtlQueryRegistryValuesEx(
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
             v6,
             0LL,
             0LL);
  v5 = v8;
  if ( (_DWORD)result )
    v5 = 0LL;
  *a3 = v5;
  return result;
}
