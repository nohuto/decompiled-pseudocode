/*
 * XREFs of RtlWriteTryAcquireTickLock @ 0x140083F64
 * Callers:
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KiSchedulerDpc @ 0x140232694 (KiSchedulerDpc.c)
 * Callees:
 *     <none>
 */

char RtlWriteTryAcquireTickLock()
{
  signed __int64 v0; // rdx
  signed __int64 v1; // rax

  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v0 = MEMORY[0xFFFFF78000000340];
  if ( (MEMORY[0xFFFFF78000000340] & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v0 + 1, v0);
    if ( v0 == v1 )
      break;
    v0 = v1;
    _mm_pause();
    if ( (v1 & 1) != 0 )
      return 0;
  }
  return 1;
}
