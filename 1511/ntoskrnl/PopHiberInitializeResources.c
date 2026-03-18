/*
 * XREFs of PopHiberInitializeResources @ 0x1404F61A4
 * Callers:
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1400FA8AC (RtlGetCompressionWorkSpaceSize.c)
 *     IoGetDumpStackTransferSizes @ 0x140118370 (IoGetDumpStackTransferSizes.c)
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmMarkHiberRange @ 0x1404F6464 (MmMarkHiberRange.c)
 *     PopCalculateHiberFileSize @ 0x1404F9E4C (PopCalculateHiberFileSize.c)
 *     MmAllocateDumpHibernateResources @ 0x1404FA284 (MmAllocateDumpHibernateResources.c)
 */

void __fastcall PopHiberInitializeResources(_QWORD *MemoryMap)
{
  unsigned int v1; // r14d
  size_t v3; // rsi
  unsigned __int64 v4; // r15
  ULONG v5; // eax
  unsigned __int64 v6; // rdi
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdi
  __int64 *PoolWithTag; // rdi
  __int64 DumpHibernateResources; // r13
  char *v11; // rcx
  char *v12; // rsi
  unsigned int v13; // r10d
  __int64 *v14; // rdx
  unsigned __int64 v15; // r8
  char *v16; // r9
  __int64 v17; // r11
  SIZE_T v18; // r15
  PVOID v19; // r8
  int v20; // r13d
  int v21; // r15d
  unsigned __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+40h] [rbp-38h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]
  unsigned __int64 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+58h] [rbp-20h]
  SIZE_T v28; // [rsp+60h] [rbp-18h]
  ULONG CompressBufferWorkSpaceSize; // [rsp+C0h] [rbp+48h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+D0h] [rbp+58h] BYREF
  int v32; // [rsp+D8h] [rbp+60h] BYREF

  v1 = KeNumberProcessors_0;
  v31 = 0;
  v3 = 0LL;
  v32 = 0;
  v23 = 0LL;
  if ( (PopSimulate & 0x10000000) != 0 )
    goto LABEL_23;
  v4 = (unsigned __int64)(unsigned int)KeNumberProcessors_0 << 7;
  if ( RtlGetCompressionWorkSpaceSize(0x104u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) < 0 )
    goto LABEL_23;
  v5 = CompressBufferWorkSpaceSize;
  v24 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( CompressFragmentWorkSpaceSize > CompressBufferWorkSpaceSize )
    v5 = CompressFragmentWorkSpaceSize;
  CompressBufferWorkSpaceSize = v5;
  v6 = v1 * v5 + ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IoGetDumpStackTransferSizes(&v32, &v31);
  v7 = v31 >> 12;
  if ( v31 >> 12 < 0x10 )
    v7 = 16;
  if ( v7 > 0x100 )
    v7 = 256;
  if ( PopHiberChecksummingEnabledReg )
  {
    v8 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v23 = v8;
    PopCalculateHiberFileSize(&v22, 0LL);
    v3 = 2 * (v22 >> 9);
    v6 = v3 + v8;
  }
  v25 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v22) = ~((v7 << 12) - 1) & (69632 * v7 + 65668 * v1 - 1);
  v26 = (unsigned int)v22 + v25;
  v28 = (v26 + (v1 << 17) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x72626968u);
  if ( !PoolWithTag )
    goto LABEL_23;
  v27 = v1 << 16;
  DumpHibernateResources = MmAllocateDumpHibernateResources();
  if ( !DumpHibernateResources )
  {
    ExFreePoolWithTag(PoolWithTag, 0x72626968u);
LABEL_23:
    PoolWithTag = (__int64 *)qword_1402DE388;
    v1 = 1;
    v20 = 1;
    v7 = 1;
    memset(qword_1402DE388, 0, 0x80uLL);
    v21 = 12288;
    PoolWithTag[1] = xmmword_1402DE308;
    v19 = qword_1402DE380;
    v12 = (char *)qword_1402DE380;
    goto LABEL_21;
  }
  if ( PopHiberChecksummingEnabledReg )
  {
    v11 = (char *)PoolWithTag + v23;
    MemoryMap[56] = v3;
    MemoryMap[55] = v11;
    memset(v11, 0, v3);
  }
  v12 = (char *)PoolWithTag + v25;
  memset(PoolWithTag, 0, (unsigned __int64)v1 << 7);
  v13 = 0;
  if ( v1 )
  {
    v14 = PoolWithTag + 1;
    v15 = v24;
    v16 = (char *)PoolWithTag + v26;
    v17 = DumpHibernateResources;
    do
    {
      *(v14 - 1) = (__int64)v16;
      v14[2] = (__int64)(v16 + 0x10000);
      *v14 = v17;
      if ( CompressBufferWorkSpaceSize )
        v14[1] = (__int64)PoolWithTag + v15 + v13 * CompressBufferWorkSpaceSize;
      ++v13;
      v16 += 0x20000;
      v17 += 0x10000LL;
      v14 += 16;
    }
    while ( v13 < v1 );
  }
  MmMarkHiberRange(MemoryMap);
  v18 = v28;
  PoSetHiberRange(MemoryMap, 0x8000u, (char *)PoolWithTag + v24, v28 - v24, 0x72626968u);
  MemoryMap[37] = PoolWithTag;
  MemoryMap[38] = v18;
  MemoryMap[39] = DumpHibernateResources;
  v19 = qword_1402DE380;
  v20 = 16;
  v21 = v22;
LABEL_21:
  PoSetHiberRange(MemoryMap, 0x8000u, v19, 0x3000uLL, 0x72626968u);
  *((_DWORD *)MemoryMap + 66) = v1;
  MemoryMap[34] = PoolWithTag;
  MemoryMap[35] = v12;
  *((_DWORD *)MemoryMap + 72) = v21;
  *((_DWORD *)MemoryMap + 73) = v20;
  *((_DWORD *)MemoryMap + 104) = v7;
}
