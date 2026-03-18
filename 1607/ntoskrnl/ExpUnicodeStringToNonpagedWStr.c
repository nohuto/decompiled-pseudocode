/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x1406B3228
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x1405810D4 (ExGetFirmwareEnvironmentVariable.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1406AFEC4 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
