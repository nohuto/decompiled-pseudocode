/*
 * XREFs of ExpCompleteSoftReboot @ 0x140262F0C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     KsrCleanupPageDatabase_0 @ 0x140001288 (KsrCleanupPageDatabase_0.c)
 */

__int64 ExpCompleteSoftReboot()
{
  signed __int32 v0; // r8d
  bool i; // zf
  __int64 result; // rax

  v0 = ExSoftRebootFlags;
  for ( i = (ExSoftRebootFlags & 2) == 0; ; i = (ExSoftRebootFlags & 2) == 0 )
  {
    _m_prefetchw(&ExSoftRebootFlags);
    if ( i )
      return 0LL;
    if ( v0 == _InterlockedCompareExchange(&ExSoftRebootFlags, v0 & 0xFFFFFFF8 | 1, v0) )
      break;
    v0 = ExSoftRebootFlags;
  }
  result = KsrCleanupPageDatabase_0();
  if ( (int)result < 0 )
  {
    _m_prefetchw(&ExSoftRebootFlags);
    _InterlockedExchange(&ExSoftRebootFlags, ExSoftRebootFlags & 0xFFFFFFF8 | 6);
  }
  return result;
}
