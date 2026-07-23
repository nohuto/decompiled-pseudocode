/*
 * XREFs of MiRemoveMdlPages @ 0x140658ACC
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x14001B1C0 (MiSetPfnOwnedAndActive.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 */

_DWORD *__fastcall MiRemoveMdlPages(char *P, int a2)
{
  __int64 *v2; // r14
  size_t v3; // r13
  _DWORD *v5; // rsi
  int v6; // ecx
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  int v10; // edx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 *v13; // rdx
  bool v14; // zf
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned int v17; // r9d
  int v20; // [rsp+98h] [rbp+10h]
  int v21; // [rsp+A0h] [rbp+18h]
  char *v22; // [rsp+A8h] [rbp+20h]

  v2 = (__int64 *)(P + 48);
  v3 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v5 = P;
  v22 = &P[8 * v3 + 48];
  qsort(P + 48, v3, 8uLL, (int (__cdecl *)(const void *, const void *))MiMdlPageSort);
  v6 = 0;
  v7 = -1LL;
  v8 = 0LL;
  v20 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = -1LL;
  v12 = -1LL;
  if ( (a2 & 0x80000) != 0 )
    v10 = 8;
  v21 = v10;
  v13 = (__int64 *)v22;
  v14 = v2 == (__int64 *)v22;
  if ( v2 <= (__int64 *)v22 )
  {
    do
    {
      if ( v14 || (v7 = *v2, *v2 != v12) )
      {
        if ( v8 )
        {
          if ( v6 < 0 || (v20 = MiRemovePhysicalMemory(v11, v8, v21), v6 = v20, v20 < 0) )
          {
            v15 = (_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL);
            v16 = v8;
            do
            {
              v17 = *((unsigned __int8 *)v15 - 6) >> 6;
              *v15 &= ~0x200000000000000uLL;
              MiSetPfnOwnedAndActive((__int64)(v15 - 5), 0, -8LL, v17, 2);
              v15 += 6;
              --v16;
            }
            while ( v16 );
            MiFreeContiguousPages((__int64)MiSystemPartition, v11, v8);
            v6 = v20;
            v9 += v8;
          }
          v13 = (__int64 *)v22;
        }
        v11 = v7;
        v8 = 1LL;
      }
      else
      {
        ++v8;
      }
      ++v2;
      v12 = v7 + 1;
      v14 = v2 == v13;
    }
    while ( v2 <= v13 );
    v5 = P;
  }
  _InterlockedExchangeAdd64(&qword_140327928, -(__int64)v3);
  if ( v9 )
  {
    if ( v9 == v3 )
    {
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    else
    {
      v5[10] += -4096 * v9;
    }
  }
  return v5;
}
