/*
 * XREFs of PopPreallocateHibernateMemory @ 0x1405C61D8
 * Callers:
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140045B2C (MmGetHighestPhysicalPage.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmObtainChargesToLockPagedPool @ 0x1405C63C8 (MmObtainChargesToLockPagedPool.c)
 *     HvlpPreallocatePageListResources @ 0x140670DC4 (HvlpPreallocatePageListResources.c)
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

  if ( dword_1403254D0 == 2 )
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
        qword_14032E908 = (__int64)(v13 + 4096);
        Length = v11;
        qword_14032E8F0 = v13;
        qword_14032E900 = (__int64)v13;
        if ( dword_1403254D0 == 2 )
          qword_14032E958 = (__int64)&v13[v0];
        else
          qword_14032E958 = 0LL;
        LODWORD(xmmword_14032E920) = v4;
        *((_QWORD *)&xmmword_14032E920 + 1) = &v13[v17];
        LODWORD(xmmword_14032E910) = v4;
        *((_QWORD *)&xmmword_14032E910 + 1) = &v13[v18];
        qword_14032E930 = (__int64)&v13[v19];
        if ( dword_1403254D0 == 2 )
          qword_14032E960 = (__int64)&v13[v8];
        else
          qword_14032E960 = 0LL;
        qword_14032E938 = &v13[v10];
        qword_14032E940 = &v13[((_DWORD)v10 + 4159) & 0xFFFFF000];
        qword_14032E948 = &v13[v9];
        qword_14032E950 = (__int64)&v13[v6];
        return 0LL;
      }
      ExFreePoolWithTag(v13, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
