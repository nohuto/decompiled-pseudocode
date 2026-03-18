/*
 * XREFs of MiInitializePageZeroing @ 0x1401312FC
 * Callers:
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     RtlSetAllBitsEx @ 0x1401306A0 (RtlSetAllBitsEx.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x140131D78 (MiDeleteZeroThreadContext.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1404D211C (PsCreateSystemThreadEx.c)
 */

char *MiInitializePageZeroing()
{
  ULONG_PTR v0; // rax
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbp
  signed __int64 **PoolWithTag; // rax
  signed __int64 **v6; // rbx
  void **v7; // rax
  void **v8; // rsi
  char *v9; // rax
  char *v10; // rbp
  unsigned __int16 v11; // r10
  unsigned int v12; // r9d
  char *v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  signed __int64 *v17; // rax
  char *v18; // rax
  char *v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // r8
  __int64 ZeroThreadContext; // rsi
  __int64 v23; // r8
  unsigned __int64 v25; // rcx
  void *v26; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-38h] BYREF
  USHORT Count; // [rsp+A0h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+10h] BYREF

  v0 = ((((qword_140301390 << 12) + 0x3FFFFFFF) >> 30) / (unsigned __int16)KeNumberNodes) & 0xFFFFFFFFFFFFFFC0uLL;
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
  PoolWithTag = (signed __int64 **)ExAllocatePoolWithTag(
                                     NonPagedPoolNx,
                                     8 * ((v4 >> 6) + ((v4 & 0x3F) != 0)) + 16,
                                     0x20206D4Du);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = (signed __int64 *)v4;
  PoolWithTag[1] = (signed __int64 *)(PoolWithTag + 2);
  v7 = (void **)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0)) + 16, 0x20206D4Du);
  v8 = v7;
  if ( !v7 )
  {
    v26 = v6;
    goto LABEL_34;
  }
  *v7 = (void *)v4;
  v7[1] = v7 + 2;
  RtlSetAllBitsEx(v6);
  if ( qword_1402FE5B0 )
  {
    v25 = qword_1402FE5B0 << 25 >> 16;
    if ( v25 + 0x600000000000LL < v2 )
      _bittestandreset64(v6[1], (__int64)(((v25 >> 27) & 0x1FFFF8) - 1310713) >> 3);
  }
  memset(v8[1], 0, 4 * ((((unsigned __int8)*v8 & 0x1F) != 0) + ((unsigned __int64)*v8 >> 5)));
  v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 112LL * (unsigned __int16)KeNumberNodes, 0x20206D4Du);
  v10 = v9;
  if ( !v9 )
  {
    ExFreePoolWithTag(v6, 0);
    v26 = v8;
LABEL_34:
    ExFreePoolWithTag(v26, 0);
    return 0LL;
  }
  v11 = KeNumberNodes;
  v12 = 0;
  if ( KeNumberNodes )
  {
    v13 = v9 + 64;
    do
    {
      *(_DWORD *)v13 = v12 << byte_1402FE6D9;
      *((_DWORD *)v13 + 1) = 0;
      *((_DWORD *)v13 + 8) = 0;
      *((_QWORD *)v13 + 5) = 0LL;
      v13 += 112;
      v14 = v12++;
      v15 = v3 * v14;
      v16 = v15 - 98304;
      v15 >>= 6;
      *((_QWORD *)v13 - 16) = v16 << 30;
      v17 = v6[1];
      *((_QWORD *)v13 - 22) = v3;
      *((_QWORD *)v13 - 21) = &v17[v15];
      v18 = (char *)v8[1];
      *((_QWORD *)v13 - 20) = v3;
      *((_QWORD *)v13 - 19) = &v18[8 * v15];
      *((_QWORD *)v13 - 18) = 0LL;
      *((_QWORD *)v13 - 17) = 0LL;
    }
    while ( v12 < v11 );
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(0xFFFFF6D000000000uLL, 8 * (v2 >> 12) - 0x93000000008LL, 6, 3u) )
  {
    ExFreePoolWithTag(v6, 0);
    ExFreePoolWithTag(v8, 0);
    v26 = v10;
    goto LABEL_34;
  }
  qword_1403011A0 = (__int64)&qword_140301198;
  v19 = v10;
  qword_140301198 = (__int64)&qword_140301198;
  v20 = 0;
  word_140301190 = 263;
  byte_140301192 = 6;
  dword_140301194 = 0;
  dword_140301188 = (unsigned __int16)KeNumberNodes;
  if ( !KeNumberNodes )
    return v10;
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v20, &Affinity, &Count);
    if ( !Count )
    {
      if ( _InterlockedExchangeAdd(&dword_140301188, 0xFFFFFFFF) == 1 )
      {
        KeSignalGate((__int64)&word_140301190, 1LL, v21);
        return v10;
      }
      goto LABEL_18;
    }
    ZeroThreadContext = MiCreateZeroThreadContext(MiSystemPartition, v19, 1LL);
    if ( !ZeroThreadContext )
      goto LABEL_31;
    if ( (int)PsCreateSystemThreadEx(
                (unsigned int)&Handle,
                0x1FFFFF,
                0,
                0,
                0LL,
                (__int64)MiZeroNodePages,
                ZeroThreadContext,
                (__int64)&Affinity,
                0LL) < 0 )
      break;
    ObCloseHandle(Handle, 0);
LABEL_18:
    ++v20;
    v19 += 112;
    if ( v20 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_19;
  }
  MiDeleteZeroThreadContext(MiSystemPartition, ZeroThreadContext, 1LL);
LABEL_31:
  if ( _InterlockedExchangeAdd(&dword_140301188, v20 - (unsigned __int16)KeNumberNodes) == (unsigned __int16)KeNumberNodes
                                                                                         - v20 )
  {
    KeSignalGate((__int64)&word_140301190, 1LL, v23);
    v20 = 0;
  }
LABEL_19:
  if ( v20 )
    KeWaitForGate((__int64)&word_140301190, 0);
  return v10;
}
