/*
 * XREFs of MiInitializeRelocations @ 0x1407BA558
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeRelocations()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rax
  PVOID v2; // rax
  unsigned int *v3; // rax
  unsigned int v4; // r8d
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !PoolWithTag )
    return 0LL;
  dword_140326758 = 10240;
  qword_140326760 = (__int64)PoolWithTag;
  memset(PoolWithTag, 0, 0x500uLL);
  v1 = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !v1 )
    return 0LL;
  dword_140326770 = 10240;
  qword_140326778 = (__int64)v1;
  memset(v1, 0, 0x500uLL);
  v2 = ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x69526D4Du);
  if ( !v2 )
    return 0LL;
  dword_140326780 = 524286;
  qword_140326788 = (__int64)v2;
  memset(v2, 0, 0x10000uLL);
  v3 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !v3 )
    return 0LL;
  Destination.SizeOfBitMap = 10240;
  Destination.Buffer = v3;
  memset(v3, 0, 0x500uLL);
  dword_140326748 = (unsigned __int8)ExGenRandom(1);
  dword_140326768 = (unsigned int)ExGenRandom(1) % 0x2800;
  v4 = ExGenRandom(1);
  result = 1LL;
  dword_14032676C = v4 % 0x7FFFE;
  return result;
}
