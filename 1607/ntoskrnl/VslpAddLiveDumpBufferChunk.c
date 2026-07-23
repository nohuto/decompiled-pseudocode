/*
 * XREFs of VslpAddLiveDumpBufferChunk @ 0x1401C314C
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x1401C2FBC (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __fastcall VslpAddLiveDumpBufferChunk(char *BaseAddress)
{
  int v2; // edi
  __int64 v3; // rbx
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v2 = 64;
  memset(v5, 0, 0x68uLL);
  do
  {
    v3 = 0LL;
    do
    {
      --v2;
      v5[v3 + 2] = (unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12;
      BaseAddress += 4096;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < 0xB && v2 );
    LODWORD(v5[1]) = v3;
    result = VslpEnterIumSecureMode(1, 37LL, 0LL, (__int64)v5);
  }
  while ( result >= 0 && v2 );
  return result;
}
