/*
 * XREFs of ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0073924
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C6C4 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C0073734 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C007380C (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::Create(
        struct DirectComposition::CBatchSharedMemoryPoolSet *a1,
        char a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3)
{
  NTSTATUS v6; // ebx
  struct DirectComposition::CBatchSharedMemoryPool *v7; // rax
  PVOID v8; // rcx
  PVOID MappedBase; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID Section; // [rsp+98h] [rbp+38h] BYREF

  Section = 0LL;
  MappedBase = 0LL;
  ViewSize[0] = 0LL;
  v11 = 4096LL;
  v6 = MmCreateSection(&Section, 6LL, 0LL, &v11, 4, 138412032, 0LL, 0LL);
  if ( v6 < 0
    || (v6 = MmMapViewInSessionSpace(Section, &MappedBase, ViewSize), v6 < 0)
    || (!a2
      ? (v7 = (struct DirectComposition::CBatchSharedMemoryPool *)Win32AllocPoolZInit(0x48uLL))
      : (v7 = (struct DirectComposition::CBatchSharedMemoryPool *)Win32AllocPoolWithQuotaZInit(0x48uLL)),
        !v7
      ? (v6 = -1073741801)
      : (v8 = MappedBase, *((_QWORD *)v7 + 3) = Section, *((_QWORD *)v7 + 7) = v8, *((_QWORD *)v7 + 2) = a1),
        v6 < 0) )
  {
    if ( MappedBase )
      MmUnmapViewInSessionSpace(MappedBase);
    if ( Section )
      ObfDereferenceObject(Section);
  }
  else
  {
    *a3 = v7;
  }
  return (unsigned int)v6;
}
