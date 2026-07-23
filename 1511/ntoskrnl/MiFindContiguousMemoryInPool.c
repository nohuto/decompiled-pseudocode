/*
 * XREFs of MiFindContiguousMemoryInPool @ 0x1400BD920
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     MiScanNonPagedPoolVa @ 0x1400B35F0 (MiScanNonPagedPoolVa.c)
 *     MiPhysicalPoolCheck @ 0x1401380C8 (MiPhysicalPoolCheck.c)
 */

ULONG_PTR __fastcall MiFindContiguousMemoryInPool(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // rbx
  unsigned int v8; // ebp
  _SLIST_HEADER *v9; // rdi
  unsigned __int64 Region; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  ULONG_PTR v15; // rsi
  _DWORD *v16; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]
  unsigned __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]
  char v21; // [rsp+70h] [rbp-18h]
  char v22; // [rsp+A8h] [rbp+20h] BYREF

  if ( a4 > 0x200000 )
    return 0LL;
  if ( MmProtectFreedNonPagedPool == 1 )
    return 0LL;
  v7 = ((a4 & 0xFFF) != 0) + (a4 >> 12);
  if ( v7 >= 0x200 )
    return 0LL;
  if ( a3 )
  {
    v12 = a3 & 0x1FF;
    if ( (a3 & 0x1FF) != 0 )
    {
      if ( v12 > 512 - v12 )
        v12 = 512 - v12;
      if ( v7 > v12 )
        return 0LL;
    }
  }
  v8 = a5;
  v9 = &qword_1402FE6C0[26 * a5];
  Region = v9[16].Region;
  if ( !Region || a2 < Region || a1 > v9[17].Alignment )
    return 0LL;
  v18 = a2;
  v19 = a1;
  v20 = a3;
  v17 = 1;
  v21 = 0;
  v13 = MiScanNonPagedPoolVa(v7, a5, 0LL, (__int64)&v17);
  if ( v13 != -1 )
    return v9[20].Region + (v13 << 12);
  LODWORD(v16) = 1;
  v14 = MiExpandNonPagedPool(512, v7, v8, -1, v16, (unsigned __int64)&v22);
  if ( v14 == -1 )
    return 0LL;
  ++dword_1402E17C0;
  v15 = v9[20].Region + (v14 << 12);
  if ( MiPhysicalPoolCheck(0, v14, v7, v7, v18, v19, v20, v8) == -1 )
  {
    MiFreePoolPages(v15, v7 << 12);
    return 0LL;
  }
  return v15;
}
