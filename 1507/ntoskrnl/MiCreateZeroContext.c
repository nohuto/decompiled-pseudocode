/*
 * XREFs of MiCreateZeroContext @ 0x1407C9940
 * Callers:
 *     MiStartZeroPageWorkers @ 0x1407C97DC (MiStartZeroPageWorkers.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     RtlSetAllBitsEx @ 0x14015A544 (RtlSetAllBitsEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 MiCreateZeroContext()
{
  ULONG_PTR v0; // rax
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  void **v7; // rax
  void **v8; // r14
  char *v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  unsigned __int64 v13; // r15
  int *v14; // r8
  unsigned __int64 v15; // r12
  char v16; // cl
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  char *v20; // rax
  void *v22; // rcx

  v0 = ((((qword_1403551D0 << 12) + 0x3FFFFFFF) >> 30) / (unsigned __int16)KeNumberNodes) & 0xFFFFFFFFFFFFFFC0uLL;
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
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0)) + 16, 0x20206D4Du);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = v4;
    PoolWithTag[1] = PoolWithTag + 2;
    v7 = (void **)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0)) + 16, 0x20206D4Du);
    v8 = v7;
    if ( v7 )
    {
      *v7 = (void *)v4;
      v7[1] = v7 + 2;
      RtlSetAllBitsEx(v6);
      memset(v8[1], 0, 4 * ((((unsigned __int8)*v8 & 0x1F) != 0) + ((unsigned __int64)*v8 >> 5)));
      v9 = (char *)ExAllocatePoolWithTag(
                     NonPagedPoolNx,
                     (unsigned __int64)(unsigned __int16)KeNumberNodes << 6,
                     0x20206D4Du);
      v10 = (__int64)v9;
      if ( v9 )
      {
        v11 = (unsigned __int16)KeNumberNodes;
        v12 = 0;
        if ( KeNumberNodes )
        {
          v13 = 0LL;
          v14 = (int *)(v9 + 56);
          v15 = 0xFFFFA00000000000uLL;
          do
          {
            v16 = byte_14034EB89;
            *((_QWORD *)v14 - 1) = v15;
            v17 = v13;
            v18 = v12++ << v16;
            *v14 = v18;
            v13 += v3;
            v19 = v6[1];
            v15 += v3 << 30;
            *((_QWORD *)v14 - 7) = v3;
            v17 >>= 6;
            *((_QWORD *)v14 - 6) = v19 + 8 * v17;
            v20 = (char *)v8[1];
            *((_QWORD *)v14 - 5) = v3;
            *((_QWORD *)v14 - 4) = &v20[8 * v17];
            *((_QWORD *)v14 - 3) = 0LL;
            *((_QWORD *)v14 - 2) = 0LL;
            v14 += 16;
          }
          while ( v12 < v11 );
        }
        if ( (unsigned int)MiMakeZeroedPageTables(0xFFFFF6D000000000uLL, 8 * (v2 >> 12) - 0x93000000008LL, 6, 3) )
        {
          MiZeroContext = v10;
          return v10;
        }
        ExFreePoolWithTag(v6, 0);
        ExFreePoolWithTag(v8, 0);
        v22 = (void *)v10;
      }
      else
      {
        ExFreePoolWithTag(v6, 0);
        v22 = v8;
      }
    }
    else
    {
      v22 = v6;
    }
    ExFreePoolWithTag(v22, 0);
  }
  return 0LL;
}
