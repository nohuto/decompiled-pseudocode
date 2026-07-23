/*
 * XREFs of PopPreallocateHibernateMemory @ 0x14056D238
 * Callers:
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14000F70C (MmGetHighestPhysicalPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmObtainChargesToLockPagedPool @ 0x14056D428 (MmObtainChargesToLockPagedPool.c)
 *     HvlpPreallocatePageListResources @ 0x1406206D8 (HvlpPreallocatePageListResources.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  __int64 v0; // rsi
  unsigned __int64 HighestPhysicalPage; // rax
  int v2; // edx
  unsigned int v3; // ecx
  unsigned __int64 v4; // rdi
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  SIZE_T v10; // rbp
  char *PoolWithTag; // rax
  char *v12; // rbx
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+58h] [rbp-70h]
  __int64 v16; // [rsp+D0h] [rbp+8h]
  __int64 v17; // [rsp+D8h] [rbp+10h]
  __int64 v18; // [rsp+E0h] [rbp+18h]

  if ( dword_1402FD030 == 2 )
    v0 = 102400LL;
  else
    v0 = v14;
  HighestPhysicalPage = MmGetHighestPhysicalPage();
  v4 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < HighestPhysicalPage || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v16 = v3;
  v17 = ((unsigned int)v4 >> 3) + v3;
  v18 = (((unsigned int)v4 >> 3) + v3 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v5 = ((_DWORD)v18 + 247) & 0xFFFFFFF8;
  v6 = v5 + 176;
  if ( v2 == 2 )
  {
    v7 = ((_DWORD)v5 + 183) & 0xFFFFFFF8;
    v6 = v7 + 56;
  }
  else
  {
    v7 = v15;
  }
  v8 = (v6 + 7) & 0xFFFFFFF8;
  v9 = ((_DWORD)v8 + 135) & 0xFFFFFFF8;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpPreallocatePageListResources(), (int)result >= 0) )
  {
    v10 = ((((_DWORD)v9 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x72626968u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (unsigned int)MmObtainChargesToLockPagedPool(PoolWithTag, (unsigned int)v10) )
      {
        qword_140303528 = (__int64)(v12 + 4096);
        Length = v10;
        qword_140303510 = v12;
        qword_140303520 = (__int64)v12;
        if ( dword_1402FD030 == 2 )
          qword_140303578 = (__int64)&v12[v0];
        else
          qword_140303578 = 0LL;
        LODWORD(xmmword_140303540) = v4;
        *((_QWORD *)&xmmword_140303540 + 1) = &v12[v16];
        LODWORD(xmmword_140303530) = v4;
        *((_QWORD *)&xmmword_140303530 + 1) = &v12[v17];
        qword_140303550 = (__int64)&v12[v18];
        if ( dword_1402FD030 == 2 )
          qword_140303580 = (__int64)&v12[v7];
        else
          qword_140303580 = 0LL;
        qword_140303558 = &v12[v9];
        qword_140303560 = &v12[((_DWORD)v9 + 4159) & 0xFFFFF000];
        qword_140303568 = &v12[v8];
        qword_140303570 = (__int64)&v12[v5];
        return 0LL;
      }
      ExFreePoolWithTag(v12, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
