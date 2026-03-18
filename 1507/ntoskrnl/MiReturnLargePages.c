/*
 * XREFs of MiReturnLargePages @ 0x14022FA34
 * Callers:
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiReturnLargePages(__int64 **a1)
{
  unsigned __int64 v1; // rbx
  __int16 *v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rax
  ULONG_PTR v6; // r15
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  volatile signed __int32 *v10; // r9
  int v11; // eax
  int v12; // r11d
  unsigned __int64 v13; // rcx

  v1 = 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v5 = *v4;
    if ( (__int64 **)v4[1] != a1 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *a1 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = a1;
    v6 = v4[2];
    v7 = (unsigned __int64)v4[3] >> 9;
    v8 = (v6 >> 9) & 0x1F;
    v9 = v7;
    v10 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v6 >> 14));
    if ( v8 + v7 <= 0x20 )
    {
      if ( v7 == 32 )
      {
        *v10 = 0;
        goto LABEL_17;
      }
      v11 = ((1 << v7) - 1) << v8;
      goto LABEL_16;
    }
    if ( v8 )
    {
      v12 = (v6 >> 9) & 0x1F;
      _InterlockedAnd(v10, ~(((1 << (32 - v12)) - 1) << v8));
      v9 = v7 - (unsigned int)(32 - v12);
      ++v10;
    }
    if ( v9 >= 0x20 )
    {
      v13 = v9 >> 5;
      v9 += -32LL * (v9 >> 5);
      do
      {
        *v10++ = 0;
        --v13;
      }
      while ( v13 );
    }
    if ( v9 )
    {
      v11 = (1 << v9) - 1;
LABEL_16:
      _InterlockedAnd(v10, ~v11);
    }
LABEL_17:
    if ( !v3 )
      v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
    for ( ; v7; --v7 )
    {
      v1 += MiFreeLargePageMemory(v6);
      v6 += 512LL;
    }
    ExFreePoolWithTag(v4, 0);
  }
  if ( v1 )
  {
    if ( v3 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v1);
      _InterlockedExchangeAdd64(&qword_14034F958, v1);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 696, v1);
    }
  }
  return v1;
}
