/*
 * XREFs of RtlNumberOfSetBitsEx @ 0x14013B248
 * Callers:
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     RtlNumberOfClearBitsEx @ 0x140212F5C (RtlNumberOfClearBitsEx.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1403DABEC (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403DAE30 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpWriteDumpFile @ 0x1406276C4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsEx(_QWORD *a1)
{
  char *v1; // r10
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  int v7; // edx
  int v8; // r8d
  unsigned __int64 v9; // r11
  int i; // r9d
  char v11; // cl
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  char v17; // cl

  v1 = (char *)a1[1];
  v2 = *a1 & 7LL;
  v3 = 0LL;
  v4 = (unsigned __int8)v1 & 7;
  v5 = *a1 >> 3;
  v6 = v5 + ((*a1 & 7) != 0);
  if ( 8 - (unsigned __int64)(a1[1] & 7) > v5 )
  {
    v8 = 0;
    v7 = v6;
    v9 = 0LL;
  }
  else
  {
    v7 = 8 - v4;
    v8 = ((_BYTE)v5 - (8 - (_BYTE)v4)) & 7;
    if ( v2 )
      ++v8;
    v9 = v6 - (unsigned int)(v8 + v7);
  }
  for ( i = 0; v7; --v7 )
  {
    v11 = *v1++;
    if ( i == v6 - 1 && v2 )
      v11 &= byte_14026F6B8[v2];
    ++i;
    v3 += RtlpBitsClearTotal[(unsigned __int8)~v11];
  }
  if ( v9 )
  {
    v14 = ((v9 - 1) >> 3) + 1;
    i += 8 * v14;
    do
    {
      v15 = *(_QWORD *)v1;
      v16 = *(_QWORD *)v1;
      v1 += 8;
      v3 += (unsigned int)((0x101010101010101LL
                          * ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v14;
    }
    while ( v14 );
  }
  if ( v8 )
  {
    v13 = v6 - 1;
    do
    {
      v17 = *v1++;
      if ( i == v13 && v2 )
        v17 &= byte_14026F6B8[v2];
      ++i;
      v3 += RtlpBitsClearTotal[(unsigned __int8)~v17];
      --v8;
    }
    while ( v8 );
  }
  return v3;
}
