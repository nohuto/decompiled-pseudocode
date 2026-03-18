/*
 * XREFs of WmipGenerateMofResourceNotification @ 0x140543820
 * Callers:
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 *     WmipMRCleanup @ 0x14065EC40 (WmipMRCleanup.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x1403D1CFC (WmipProcessEvent.c)
 */

void __fastcall WmipGenerateMofResourceNotification(_WORD *Src, _WORD *a2, _OWORD *a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // ebx
  char *PoolWithTag; // rax
  char *v14; // rdi
  int v15; // eax
  size_t v16; // rsi
  char *v17; // rbx
  __int64 v18; // rdx

  v4 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Src[v6] );
  v10 = 2 * v6 + 4;
  do
    ++v4;
  while ( a2[v4] );
  v11 = 2 * v4 + 4;
  v12 = v10 + 2 * v4 + 76;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10 + 2 * v4 + 76, 0x70696D57u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = v12;
    *((_DWORD *)PoolWithTag + 1) = a4;
    *((_QWORD *)PoolWithTag + 1) = 1LL;
    *((_DWORD *)PoolWithTag + 11) = 266;
    *(_OWORD *)(PoolWithTag + 24) = *a3;
    *((_QWORD *)PoolWithTag + 2) = MEMORY[0xFFFFF78000000014];
    v15 = v10 + v11;
    *((_DWORD *)v14 + 14) = 72;
    v16 = v10 - 2;
    *((_DWORD *)v14 + 15) = v15;
    *((_DWORD *)v14 + 12) = 64;
    *((_WORD *)v14 + 32) = 0;
    v17 = &v14[*((unsigned int *)v14 + 14)];
    *(_WORD *)v17 = v16;
    memmove(v17 + 2, Src, v16);
    v16 >>= 1;
    *(_WORD *)&v17[2 * v16 + 2] = v11 - 2;
    memmove(&v17[2 * v16 + 4], a2, v11 - 2);
    LOBYTE(v18) = 1;
    WmipProcessEvent(v14, v18, 0);
    ExFreePoolWithTag(v14, 0);
  }
}
