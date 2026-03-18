/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x140670538
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x14054B5F0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14066D1A8 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall ExpUnicodeStringToNonpagedWStr(const void **a1)
{
  unsigned __int64 v2; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v2 = *(unsigned __int16 *)a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2 + 2, 0x72766E45u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1[1], (unsigned int)v2);
    v4[v2 >> 1] = 0;
  }
  return v4;
}
