/*
 * XREFs of SmcCacheManagerInitialize @ 0x1407DEDAC
 * Callers:
 *     SmGlobalsInitialize @ 0x1407DEC20 (SmGlobalsInitialize.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     memset @ 0x140195A80 (memset.c)
 */

_QWORD *__fastcall SmcCacheManagerInitialize(_QWORD *a1)
{
  __int64 v2; // rdi
  volatile signed __int64 *v3; // rbx
  unsigned __int64 v4; // rax
  _QWORD *result; // rax

  memset(a1, 0, 0x230uLL);
  v2 = 16LL;
  v3 = a1 + 1;
  do
  {
    *v3 = 0LL;
    v4 = _InterlockedCompareExchange64(v3, 1LL, 0LL);
    if ( v4 >= 2 )
      ExfWaitForRundownProtectionRelease(v3, v4);
    *((_QWORD *)v3 + 1) = 0LL;
    v3 += 4;
    --v2;
  }
  while ( v2 );
  memset(a1 + 64, 0, 0x28uLL);
  a1[64] = 0LL;
  result = a1 + 65;
  a1[66] = a1 + 65;
  a1[65] = a1 + 65;
  return result;
}
