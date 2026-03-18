/*
 * XREFs of PpmInitPolicyConfiguration @ 0x1407E18E0
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x14055D370 (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x1405B9C28 (PpmEnableProfile.c)
 */

int PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_1403D0B50;
  v1 = 42LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_14032C768;
    do
    {
      *v3 |= v2;
      v3 += 174;
    }
    while ( (__int64)v3 < (__int64)qword_14032D248 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_14032D260 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_14032C74C = (__int128)NullGuid;
  dword_14032C75C = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, (__int64)v0);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x2AuLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
