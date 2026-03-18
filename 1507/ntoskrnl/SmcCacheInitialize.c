/*
 * XREFs of SmcCacheInitialize @ 0x1406DAFB8
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     memset @ 0x140195A80 (memset.c)
 *     StEtaInitialize @ 0x140195E54 (StEtaInitialize.c)
 */

int __fastcall SmcCacheInitialize(_QWORD *a1)
{
  unsigned __int64 v2; // rax
  _DWORD *v3; // rbx
  _DWORD *v4; // rsi
  volatile signed __int64 *v5; // rdi

  memset(a1, 0, 0x428uLL);
  memset(a1 + 5, 0, 0x40uLL);
  LODWORD(v2) = (unsigned int)StEtaInitialize(a1 + 13);
  a1[20] = 0LL;
  v3 = a1 + 21;
  v4 = v3 + 96;
  if ( v3 < v3 + 96 )
  {
    v5 = (volatile signed __int64 *)(v3 + 4);
    do
    {
      *v3 = -1;
      *v5 = 0LL;
      v2 = _InterlockedCompareExchange64(v5, 1LL, 0LL);
      if ( v2 >= 2 )
        LODWORD(v2) = ExfWaitForRundownProtectionRelease(v5, v2);
      v3 += 6;
      v5 += 3;
    }
    while ( v3 < v4 );
  }
  return v2;
}
