/*
 * XREFs of PpmInitPolicyConfiguration @ 0x1407B6F10
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x1404D3718 (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x140577C68 (PpmEnableProfile.c)
 */

LONG PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_1403A9B90;
  v1 = 42LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_1403017C8;
    do
    {
      *v3 |= v2;
      v3 += 174;
    }
    while ( (__int64)v3 < (__int64)qword_1403022A8 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_1403022C0 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_1403017AC = (__int128)NullGuid;
  dword_1403017BC = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, (__int64)v0);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x2AuLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
