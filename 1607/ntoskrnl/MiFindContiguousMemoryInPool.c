/*
 * XREFs of MiFindContiguousMemoryInPool @ 0x14009AAEC
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     MiScanNonPagedPoolVa @ 0x14001A5E0 (MiScanNonPagedPoolVa.c)
 *     MiPhysicalPoolCheck @ 0x14009C20C (MiPhysicalPoolCheck.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 */

unsigned __int64 *__fastcall MiFindContiguousMemoryInPool(
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
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 *v15; // rsi
  int v16; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  char v20; // [rsp+70h] [rbp-18h]
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  if ( a4 > 0x200000 )
    return 0LL;
  if ( MmProtectFreedNonPagedPool == 1 )
    return 0LL;
  v7 = ((a4 & 0xFFF) != 0) + (a4 >> 12);
  if ( v7 >= 0x200 )
    return 0LL;
  if ( a3 )
  {
    v13 = a3 & 0x1FF;
    if ( (a3 & 0x1FF) != 0 )
    {
      if ( v13 > 512 - v13 )
        v13 = 512 - v13;
      if ( v7 > v13 )
        return 0LL;
    }
  }
  v8 = a5;
  v9 = &qword_1403269F0[26 * a5];
  Region = v9[16].Region;
  if ( !Region || a2 < Region || a1 > v9[17].Alignment )
    return 0LL;
  v17 = a2;
  v18 = a1;
  v19 = a3;
  v16 = 1;
  v20 = 0;
  v12 = MiScanNonPagedPoolVa(v7, a5, 0LL, (__int64)&v16);
  if ( v12 != -1 )
    return (unsigned __int64 *)(v9[20].Region + (v12 << 12));
  v14 = MiExpandNonPagedPool(512, v7, v8, -1, 1, (__int64)&v21);
  if ( v14 == -1 )
    return 0LL;
  v15 = (unsigned __int64 *)(v9[20].Region + (v14 << 12));
  if ( MiPhysicalPoolCheck(0, v14, v7, v7, v17, v18, v19, v8) == -1 )
  {
    MiFreePoolPages(v15, v7 << 12);
    return 0LL;
  }
  return v15;
}
