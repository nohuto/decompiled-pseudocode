/*
 * XREFs of PopPreallocateHibernateMemory @ 0x14054E350
 * Callers:
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1400BC1BC (MmGetHighestPhysicalPage.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmObtainChargesToLockPagedPool @ 0x14054E540 (MmObtainChargesToLockPagedPool.c)
 *     HvlpPreallocatePageListResources @ 0x1405F6FB8 (HvlpPreallocatePageListResources.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  __int64 v0; // rsi
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // rdi
  unsigned int v5; // r8d
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  SIZE_T v11; // rbp
  char *PoolWithTag; // rax
  char *v13; // rbx
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+58h] [rbp-70h]
  __int64 v17; // [rsp+D0h] [rbp+8h]
  __int64 v18; // [rsp+D8h] [rbp+10h]
  __int64 v19; // [rsp+E0h] [rbp+18h]

  if ( dword_1402D6390 == 2 )
    v0 = 102400LL;
  else
    v0 = v15;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < HighestPhysicalPage || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v17 = v2;
  v5 = ((unsigned int)v4 >> 3) + v2;
  v18 = v5;
  v19 = (v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v6 = (((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8;
  v7 = v6 + 176;
  if ( v3 == 2 )
  {
    v8 = ((_DWORD)v6 + 183) & 0xFFFFFFF8;
    v7 = v8 + 56;
  }
  else
  {
    v8 = v16;
  }
  v9 = (v7 + 7) & 0xFFFFFFF8;
  v10 = ((_DWORD)v9 + 135) & 0xFFFFFFF8;
  if ( (HvlpFlags & 4) == 0 || (result = HvlpPreallocatePageListResources(), (int)result >= 0) )
  {
    v11 = ((((_DWORD)v10 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x72626968u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (unsigned int)MmObtainChargesToLockPagedPool(PoolWithTag, (unsigned int)v11) )
      {
        qword_1402DE348 = (__int64)(v13 + 4096);
        Length = v11;
        qword_1402DE330 = v13;
        qword_1402DE340 = (__int64)v13;
        if ( dword_1402D6390 == 2 )
          qword_1402DE398 = (__int64)&v13[v0];
        else
          qword_1402DE398 = 0LL;
        LODWORD(xmmword_1402DE360) = v4;
        *((_QWORD *)&xmmword_1402DE360 + 1) = &v13[v17];
        LODWORD(xmmword_1402DE350) = v4;
        *((_QWORD *)&xmmword_1402DE350 + 1) = &v13[v18];
        qword_1402DE370 = (__int64)&v13[v19];
        if ( dword_1402D6390 == 2 )
          qword_1402DE3A0 = (__int64)&v13[v8];
        else
          qword_1402DE3A0 = 0LL;
        qword_1402DE378 = &v13[v10];
        qword_1402DE380 = &v13[((_DWORD)v10 + 4159) & 0xFFFFF000];
        qword_1402DE388 = &v13[v9];
        qword_1402DE390 = (__int64)&v13[v6];
        return 0LL;
      }
      ExFreePoolWithTag(v13, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
