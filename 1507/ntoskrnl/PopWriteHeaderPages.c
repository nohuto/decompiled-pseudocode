/*
 * XREFs of PopWriteHeaderPages @ 0x1403F2B2C
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     tcpxsum @ 0x14018B100 (tcpxsum.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopWriteHiberPages @ 0x1403F2D9C (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteHeaderPages(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  void *v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int *v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // eax
  size_t v14; // r8
  size_t v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // edx
  ULONG_PTR v19; // rbx
  size_t v20; // r8
  _OWORD *v21; // rax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  unsigned int v25; // eax
  int v26; // edx
  ULONG_PTR v27; // rbx
  unsigned int v28; // eax
  int v29; // edx
  ULONG_PTR v30; // rbx

  v2 = *(_DWORD *)(a1 + 152);
  v4 = *(void **)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 0;
  memset(v4, 0, (unsigned int)(v2 << 12));
  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    if ( (PoDebug & 0x10) != 0 )
      DbgPrint("PopWriteHiberImage: No free pages to pass to the loader!\n");
    return 3221225495LL;
  }
  v7 = (unsigned int)PopHiberScratchPages;
  v8 = *(_DWORD *)(v6 + 40) >> 12;
  a2[18] = v8;
  if ( v8 < (unsigned int)v7 )
  {
    if ( (PoDebug & 0x10) != 0 )
      DbgPrint(
        "PopWriteHiberImage: Attempting to hibernate more pages (0x%08lx) than we have free (0x%08lx)\n",
        PopHiberScratchPages,
        a2[18]);
    return 3221225495LL;
  }
  v9 = (int *)(*(_QWORD *)(a1 + 120) + 48LL);
  if ( (_DWORD)v7 )
  {
    v10 = v4;
    v11 = (unsigned int)v7;
    do
    {
      v12 = *v9;
      v9 += 2;
      *v10++ = v12;
      --v11;
    }
    while ( v11 );
  }
  PopWriteHiberPages(a1, v4, (unsigned __int64)(4 * v7 + 4095) >> 12, (unsigned int)(*(_DWORD *)(a1 + 256) + 2));
  v13 = PopHiberScratchPages;
  a2[18] = PopHiberScratchPages;
  a2[19] = tcpxsum(0, (const char *)v4, (4 * v13 + 4095) & 0xFFFFF000);
  if ( *(_QWORD *)(a1 + 248) )
  {
    v14 = (unsigned int)(*(_DWORD *)(a1 + 152) << 12);
    *(_DWORD *)(a1 + 184) = 1;
    memset(v4, 0, v14);
    v15 = (unsigned int)(*(_DWORD *)(a1 + 256) << 12);
    memmove(v4, *(const void **)(a1 + 248), v15);
    a2[209] = tcpxsum(0, (const char *)v4, v15);
    v16 = *(_DWORD *)(a1 + 256);
    a2[210] = v16;
    PopWriteHiberPages(a1, v4, v16, 2LL);
    v17 = tcpxsum(0, (const char *)v4, v15);
    v18 = a2[209];
    v19 = v17;
    if ( v18 != v17 )
    {
      DbgPrint("Checksum for resume context page changed from %lx to %lx\n", v18, v17);
      KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[209], v19, 0x1B4BuLL);
    }
  }
  v20 = (unsigned int)(*(_DWORD *)(a1 + 152) << 12);
  *(_DWORD *)(a1 + 184) = 2;
  memset(v4, 0, v20);
  v21 = *(_OWORD **)(a1 + 176);
  v22 = 11LL;
  v23 = v4;
  do
  {
    *v23 = *v21;
    v23[1] = v21[1];
    v23[2] = v21[2];
    v23[3] = v21[3];
    v23[4] = v21[4];
    v23[5] = v21[5];
    v23[6] = v21[6];
    v23 += 8;
    v24 = v21[7];
    v21 += 8;
    *(v23 - 1) = v24;
    --v22;
  }
  while ( v22 );
  *v23 = *v21;
  v23[1] = v21[1];
  v23[2] = v21[2];
  a2[20] = tcpxsum(0, (const char *)v4, 0x5B0u);
  PopWriteHiberPages(a1, v4, 1LL, 1LL);
  v25 = tcpxsum(0, (const char *)v4, 0x5B0u);
  v26 = a2[20];
  v27 = v25;
  if ( v26 != v25 )
  {
    DbgPrint("Checksum for context page changed from %lx to %lx\n", v26, v25);
    KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[20], v27, 0x1B61uLL);
  }
  v28 = tcpxsum(0, (const char *)v4, 0x1000u);
  v29 = a2[20];
  v30 = v28;
  if ( v29 != v28 )
  {
    DbgPrint("Checksum for partial context page %lx doesn't match full %lx\n", v29, v28);
    KeBugCheckEx(0xA0u, 4uLL, (unsigned int)a2[20], v30, 0x1B68uLL);
  }
  return 0LL;
}
