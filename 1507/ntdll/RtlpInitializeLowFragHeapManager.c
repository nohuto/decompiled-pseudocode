/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x1800F0798
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800D8010 (RtlInitializeHeapManager.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180035950 (RtlpHeapGenerateRandomValue64.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     memset @ 0x180098540 (memset.c)
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
  dword_180144364 = 0;
  result = memset(&RtlpDefaultHeapDebuggingOptions, 0, 0x30uLL);
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)RtlpDisableHeapLookaside >> 4) & 3);
    dword_180144A4C = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
  }
  return result;
}
