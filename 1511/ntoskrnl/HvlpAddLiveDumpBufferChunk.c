/*
 * XREFs of HvlpAddLiveDumpBufferChunk @ 0x1401B3598
 * Callers:
 *     HvlSetupLiveDumpBufferInSk @ 0x1401B349C (HvlSetupLiveDumpBufferInSk.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __fastcall HvlpAddLiveDumpBufferChunk(char *BaseAddress)
{
  int v2; // edi
  __int64 v3; // rbx
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 104);
  v2 = 64;
  do
  {
    v3 = 0LL;
    do
    {
      --v2;
      v5[v3 + 2] = MmGetPhysicalAddress(BaseAddress).QuadPart >> 12;
      BaseAddress += 4096;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < 0xB && v2 );
    LODWORD(v5[1]) = v3;
    result = HvlpEnterIumSecureMode(1u, 35, 0, (unsigned __int8 *)v5);
  }
  while ( result >= 0 && v2 );
  return result;
}
