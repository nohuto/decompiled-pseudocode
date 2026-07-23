/*
 * XREFs of MiInitializePageZeroing @ 0x14013B3E0
 * Callers:
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     RtlSetAllBitsEx @ 0x14013B764 (RtlSetAllBitsEx.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x1403E5D7C (PsCreateSystemThreadEx.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

char *MiInitializePageZeroing()
{
  ULONG_PTR v0; // rax
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rbx
  void **PoolWithTag; // rax
  void **v6; // rdi
  void **v7; // rax
  void **v8; // r14
  unsigned __int64 v9; // rbp
  char *v10; // rax
  char *v11; // r15
  unsigned int v12; // ebx
  unsigned int v13; // r10d
  unsigned int v14; // r13d
  unsigned __int64 v15; // r11
  char *v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  char *v19; // rax
  char *v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rbp
  unsigned int v23; // ebx
  unsigned __int64 *ZeroThreadContext; // rdi
  void **v26; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-48h] BYREF
  USHORT Count; // [rsp+B0h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+10h] BYREF

  v0 = ((((qword_140324E10 << 12) + 0x3FFFFFFF) >> 30) / (unsigned __int16)KeNumberNodes) & 0xFFFFFFFFFFFFFFC0uLL;
  if ( v0 < 0x40 )
    v0 = 64LL;
  v1 = v0 * (unsigned __int16)KeNumberNodes;
  if ( v1 > 0x4000 )
  {
    v2 = 0x100000000000LL;
    v1 = 0x4000LL;
  }
  else
  {
    v2 = v1 << 30;
  }
  v3 = (v1 / (unsigned __int16)KeNumberNodes) & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = v3 * (unsigned __int16)KeNumberNodes;
  PoolWithTag = (void **)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0)) + 16, 0x20206D4Du);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = (void *)v4;
  PoolWithTag[1] = PoolWithTag + 2;
  v7 = (void **)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0)) + 16, 0x20206D4Du);
  v8 = v7;
  if ( !v7 )
  {
    v26 = v6;
    goto LABEL_31;
  }
  *v7 = (void *)v4;
  v7[1] = v7 + 2;
  RtlSetAllBitsEx(v6);
  memset(v8[1], 0, 4 * ((((unsigned __int8)*v8 & 0x1F) != 0) + ((unsigned __int64)*v8 >> 5)));
  v9 = qword_140327FA0;
  v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 136LL * (unsigned __int16)KeNumberNodes, 0x20206D4Du);
  v11 = v10;
  if ( !v10 )
  {
    ExFreePoolWithTag(v6, 0);
    v26 = v8;
LABEL_31:
    ExFreePoolWithTag(v26, 0);
    return 0LL;
  }
  v12 = (unsigned __int16)KeNumberNodes;
  memset(v10, 0, 136LL * (unsigned __int16)KeNumberNodes);
  v13 = 0;
  v14 = v12;
  if ( v12 )
  {
    v15 = 0LL;
    v16 = v11 + 48;
    v17 = v9;
    do
    {
      v18 = v15;
      *((_DWORD *)v16 + 8) = v13++ << byte_140326A09;
      *((_QWORD *)v16 + 1) = v16;
      v15 += v3;
      *(_QWORD *)v16 = v16;
      *((_QWORD *)v16 - 1) = v17;
      v17 += v3 << 30;
      v19 = (char *)v6[1];
      *((_QWORD *)v16 - 6) = v3;
      v18 >>= 6;
      *((_QWORD *)v16 - 5) = &v19[8 * v18];
      v20 = (char *)v8[1];
      *((_QWORD *)v16 - 4) = v3;
      *((_QWORD *)v16 - 3) = &v20[8 * v18];
      *((_QWORD *)v16 + 2) = 0LL;
      v16 += 136;
    }
    while ( v13 < v14 );
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(
                        ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL + 8 * (v2 >> 12),
                        6,
                        3u) )
  {
    ExFreePoolWithTag(v6, 0);
    ExFreePoolWithTag(v8, 0);
    v26 = (void **)v11;
    goto LABEL_31;
  }
  word_140324C48 = 263;
  qword_140324C58 = (__int64)&qword_140324C50;
  qword_140324C50 = (__int64)&qword_140324C50;
  v21 = (unsigned __int64)v11;
  byte_140324C4A = 6;
  dword_140324C4C = 0;
  dword_140324C40 = (unsigned __int16)KeNumberNodes;
  v22 = MiReferencePageRuns((__int64)MiSystemPartition, 0);
  v23 = 0;
  if ( !KeNumberNodes )
    goto LABEL_20;
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v23, &Affinity, &Count);
    if ( !Count )
    {
      if ( _InterlockedExchangeAdd(&dword_140324C40, 0xFFFFFFFF) == 1 )
      {
        KeSignalGate((__int64)&word_140324C48, 1u);
        goto LABEL_20;
      }
      goto LABEL_17;
    }
    ZeroThreadContext = MiCreateZeroThreadContext(MiSystemPartition, v21, 1);
    if ( !ZeroThreadContext )
      goto LABEL_28;
    if ( (int)PsCreateSystemThreadEx(
                (unsigned int)&Handle,
                0x1FFFFF,
                0,
                0,
                0LL,
                (__int64)MiZeroNodePages,
                (__int64)ZeroThreadContext,
                (__int64)&Affinity,
                0LL) < 0 )
      break;
    ObCloseHandle(Handle, 0);
LABEL_17:
    ++v23;
    v21 += 136LL;
    if ( v23 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_18;
  }
  MiDeleteZeroThreadContext(ZeroThreadContext);
  ExFreePoolWithTag(ZeroThreadContext, 0);
LABEL_28:
  if ( _InterlockedExchangeAdd(&dword_140324C40, v23 - (unsigned __int16)KeNumberNodes) == (unsigned __int16)KeNumberNodes
                                                                                         - v23 )
  {
    KeSignalGate((__int64)&word_140324C48, 1u);
    v23 = 0;
  }
LABEL_18:
  if ( v23 )
    KeWaitForGate((__int64)&word_140324C48, 0);
LABEL_20:
  MiDereferencePageRuns(v22);
  return v11;
}
