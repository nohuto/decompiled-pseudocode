/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x18004BB18
 * Callers:
 *     RtlInitializeHeapManager @ 0x18004BCAC (RtlInitializeHeapManager.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18005802C (RtlpHeapGenerateRandomValue64.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A5780 (NtQuerySystemInformation.c)
 *     memset @ 0x1800AB900 (memset.c)
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
  dword_1801433A4 = 0;
  result = memset(&RtlpDefaultHeapDebuggingOptions, 0, 0x30uLL);
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)RtlpDisableHeapLookaside >> 4) & 3);
    dword_180143A8C = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
  }
  return result;
}
