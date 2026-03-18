/*
 * XREFs of MiRemoveMdlPages @ 0x14062358C
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x1400C0054 (MiSetPfnOwnedAndActive.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 */

_DWORD *__fastcall MiRemoveMdlPages(char *P, int a2)
{
  __int64 *v2; // r14
  size_t v3; // r13
  _DWORD *v5; // rsi
  int v6; // ecx
  __int64 v7; // r15
  int v8; // edx
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  ULONG_PTR v11; // r12
  __int64 v12; // rax
  __int64 *v13; // rdx
  bool v14; // zf
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rbx
  int v17; // r8d
  int v20; // [rsp+88h] [rbp+10h]
  int v21; // [rsp+90h] [rbp+18h]
  char *v22; // [rsp+98h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v5 = P;
  v22 = &P[8 * v3 + 48];
  qsort(P + 48, v3, 8uLL, (int (__cdecl *)(const void *, const void *))MiPartitionMdlPageSort);
  v6 = 0;
  v7 = -1LL;
  v8 = 0;
  v20 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = -1LL;
  v12 = -1LL;
  if ( (a2 & 0x100000) != 0 )
    v8 = 8;
  v21 = v8;
  v13 = (__int64 *)v22;
  v14 = v2 == (__int64 *)v22;
  if ( v2 <= (__int64 *)v22 )
  {
    do
    {
      if ( v14 || (v7 = *v2, *v2 != v12) )
      {
        if ( v9 )
        {
          if ( v6 < 0 || (v20 = MiRemovePhysicalMemory(v11, v9, v21), v6 = v20, v20 < 0) )
          {
            v15 = v9;
            v16 = (_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL);
            do
            {
              v17 = *((unsigned __int8 *)v16 - 6) >> 6;
              *v16 &= ~0x200000000000000uLL;
              MiSetPfnOwnedAndActive((__int64)(v16 - 5), -8LL, v17, 2);
              v16 += 6;
              --v15;
            }
            while ( v15 );
            MiFreeContiguousPages((__int64)MiSystemPartition, v11, v9);
            v6 = v20;
            v10 += v9;
          }
          v13 = (__int64 *)v22;
        }
        v11 = v7;
        v9 = 1LL;
      }
      else
      {
        ++v9;
      }
      ++v2;
      v12 = v7 + 1;
      v14 = v2 == v13;
    }
    while ( v2 <= v13 );
    v5 = P;
  }
  _InterlockedExchangeAdd64(&qword_1402FF820, -(__int64)v3);
  if ( v10 )
  {
    if ( v10 == v3 )
    {
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    else
    {
      v5[10] += -4096 * v10;
    }
  }
  return v5;
}
