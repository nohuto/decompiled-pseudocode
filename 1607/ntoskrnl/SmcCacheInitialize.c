/*
 * XREFs of SmcCacheInitialize @ 0x14069A000
 * Callers:
 *     SmcProcessCreateRequest @ 0x140697548 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     StEtaInitialize @ 0x140171E58 (StEtaInitialize.c)
 */

void __fastcall SmcCacheInitialize(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi

  memset(a1, 0, 0x428uLL);
  StEtaInitialize(&a1[13]);
  a1[20].Count = 0LL;
  v2 = a1 + 21;
  v3 = v2 + 48;
  while ( v2 < v3 )
  {
    LODWORD(v2->Count) = -1;
    v2[2].Count = 0LL;
    ExWaitForRundownProtectionRelease(v2 + 2);
    v2 += 3;
  }
}
