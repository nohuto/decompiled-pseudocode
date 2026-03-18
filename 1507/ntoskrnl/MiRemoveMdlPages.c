/*
 * XREFs of MiRemoveMdlPages @ 0x1406A28CC
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiSetPfnOwnedAndActive @ 0x1401225E4 (MiSetPfnOwnedAndActive.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 */

_DWORD *__fastcall MiRemoveMdlPages(char *P, int a2)
{
  __int64 *v2; // r14
  size_t v3; // r13
  _DWORD *v5; // rsi
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // r15
  int v9; // edx
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  ULONG_PTR v12; // r12
  __int64 v13; // rax
  __int64 *v14; // rdx
  bool v15; // zf
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rbx
  unsigned int v18; // r8d
  int v21; // [rsp+88h] [rbp+10h]
  unsigned int v22; // [rsp+90h] [rbp+18h]
  char *v23; // [rsp+98h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v5 = P;
  v23 = &P[8 * v3 + 48];
  qsort(P + 48, v3, 8uLL, (int (__cdecl *)(const void *, const void *))MiPartitionMdlPageSort);
  v7 = 0;
  v8 = -1LL;
  v9 = 0;
  v21 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = -1LL;
  v13 = -1LL;
  if ( (a2 & 0x100000) != 0 )
    v9 = 8;
  v22 = v9;
  v14 = (__int64 *)v23;
  v15 = v2 == (__int64 *)v23;
  if ( v2 <= (__int64 *)v23 )
  {
    do
    {
      if ( v15 || (v8 = *v2, *v2 != v13) )
      {
        if ( v10 )
        {
          if ( v7 < 0 || (v21 = MiRemovePhysicalMemory(v12, v10, v22, v6), v7 = v21, v21 < 0) )
          {
            v16 = v10;
            v17 = (_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL);
            do
            {
              v18 = *((unsigned __int8 *)v17 - 6) >> 6;
              *v17 &= ~0x200000000000000uLL;
              MiSetPfnOwnedAndActive((__int64)(v17 - 5), -8LL, v18, 2LL);
              v17 += 6;
              --v16;
            }
            while ( v16 );
            MiFreeContiguousPages((__int64)MiSystemPartition, v12, v10);
            v7 = v21;
            v11 += v10;
          }
          v14 = (__int64 *)v23;
        }
        v12 = v8;
        v10 = 1LL;
      }
      else
      {
        ++v10;
      }
      ++v2;
      v13 = v8 + 1;
      v15 = v2 == v14;
    }
    while ( v2 <= v14 );
    v5 = P;
  }
  _InterlockedExchangeAdd64(&qword_14034FCE0, -(__int64)v3);
  if ( v11 )
  {
    if ( v11 == v3 )
    {
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    else
    {
      v5[10] += -4096 * v11;
    }
  }
  return v5;
}
