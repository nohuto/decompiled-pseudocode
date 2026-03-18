/*
 * XREFs of ExReInitializeRundownProtectionCacheAware @ 0x14010C910
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExRundownCompletedCacheAware @ 0x14010C960 (ExRundownCompletedCacheAware.c)
 */

void __stdcall ExReInitializeRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  unsigned int v2; // ecx
  unsigned int i; // r8d
  int v4; // edx

  ExRundownCompletedCacheAware(RunRefCacheAware);
  v2 = *((_DWORD *)RunRefCacheAware + 5);
  for ( i = 0; i < v2; v2 = *((_DWORD *)RunRefCacheAware + 5) )
  {
    v4 = i % v2;
    ++i;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)RunRefCacheAware + (unsigned int)(*((_DWORD *)RunRefCacheAware + 4) * v4)),
      0LL);
  }
}
