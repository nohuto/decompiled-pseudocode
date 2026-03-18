/*
 * XREFs of MiFlushFileOnlyMdl @ 0x14023092C
 * Callers:
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x14005AC60 (MI_IS_PFN_FILE_ONLY.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiIssueSynchronousFlush @ 0x140112590 (MiIssueSynchronousFlush.c)
 *     MiReadyFlushMdlToWrite @ 0x14011A498 (MiReadyFlushMdlToWrite.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiPersistMemory @ 0x140230CF4 (MiPersistMemory.c)
 */

__int64 __fastcall MiFlushFileOnlyMdl(int a1, __int64 a2, char a3, unsigned int *a4)
{
  __int64 v5; // r10
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  PVOID v9; // r15
  __int64 *v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 *PrototypePteDirect; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int8 v22; // [rsp+78h] [rbp+10h] BYREF
  char v23; // [rsp+80h] [rbp+18h]

  v23 = a3;
  v5 = (*(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 44)) & 0xFFF;
  v6 = *(unsigned int *)(a2 + 40) + 4095LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *a4 = 0;
  v7 = (unsigned __int64)(v5 + v6) >> 12;
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v9 = *(PVOID *)(a2 + 24);
  else
    v9 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( v9 )
  {
    MiPersistMemory(v9, v7 << 12);
    MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
  v10 = (__int64 *)(a2 + 48);
  v11 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v12 = 48 * *v10 - 0x58000000000LL;
      if ( !v9 )
      {
        v13 = MiMapPageInHyperSpaceWorker(*v10, &v22);
        MiPersistMemory(v13, 4096LL);
        MiUnmapPageInHyperSpaceWorker(v13, v22);
      }
      if ( !(unsigned int)MI_IS_PFN_FILE_ONLY(v12) )
        break;
      ++v11;
      ++v10;
      if ( v11 >= v7 )
        goto LABEL_11;
    }
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v12 + 16), v14, v15, v16);
    v19 = MiReadyFlushMdlToWrite(a2, PrototypePteDirect, 0);
    MiIssueSynchronousFlush(a1, a2, v19, v23, (NTSTATUS *)a4);
    v20 = *((_QWORD *)a4 + 1) + (v11 << 12);
    *((_QWORD *)a4 + 1) = v20;
    if ( (*a4 & 0x80000000) == 0 && ((v20 + 4095) & 0xFFFFFFFFFFFFF000uLL) < v7 << 12 )
      *a4 = -1073741801;
    return *a4;
  }
  else
  {
LABEL_11:
    *((_QWORD *)a4 + 1) = v7 << 12;
    result = 0LL;
    *a4 = 0;
  }
  return result;
}
