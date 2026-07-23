/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x18005D588
 * Callers:
 *     RtlInitializeHeapManager @ 0x18005D71C (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180041760 (RtlpHeapGenerateRandomValue64.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void *RtlpInitializeLowFragHeapManager()
{
  char v0; // cl
  unsigned int v1; // ecx
  void *result; // rax
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v4; // [rsp+58h] [rbp-20h]

  RtlpLFHKey = RtlpHeapGenerateRandomValue64();
  if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
  {
    v1 = 1;
  }
  else
  {
    v0 = 0;
    if ( (unsigned int)v4 > 1 )
    {
      do
        ++v0;
      while ( (unsigned int)v4 >> v0 > 1 );
    }
    v1 = ~((1LL << v0) - 1) & ((1LL << v0) + v4 - 1);
    if ( v1 > 0x40 )
      v1 = 64;
  }
  RtlpAffinityState = v1;
  dword_1801503E4 = 0;
  result = memset(&RtlpDefaultHeapDebuggingOptions, 0, 0x30uLL);
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)RtlpDisableHeapLookaside >> 4) & 3);
    dword_180150BCC = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
  }
  return result;
}
