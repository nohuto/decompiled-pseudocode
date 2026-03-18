/*
 * XREFs of RtlNumberOfSetBitsEx @ 0x140247D70
 * Callers:
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 *     RtlNumberOfClearBitsEx @ 0x140247D2C (RtlNumberOfClearBitsEx.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403FF1F0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpWriteDumpFile @ 0x140678288 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406783E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
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
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  char v16; // cl

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
      v11 &= byte_140297800[v2];
    ++i;
    v3 += RtlpBitsClearTotal[(unsigned __int8)~v11];
  }
  if ( v9 )
  {
    v12 = ((v9 - 1) >> 3) + 1;
    i += 8 * v12;
    do
    {
      v13 = *(_QWORD *)v1;
      v14 = *(_QWORD *)v1;
      v1 += 8;
      v3 += (unsigned int)((0x101010101010101LL
                          * ((((v13 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v13 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v13 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v13 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v12;
    }
    while ( v12 );
  }
  if ( v8 )
  {
    v15 = v6 - 1;
    do
    {
      v16 = *v1++;
      if ( i == v15 && v2 )
        v16 &= byte_140297800[v2];
      ++i;
      v3 += RtlpBitsClearTotal[(unsigned __int8)~v16];
      --v8;
    }
    while ( v8 );
  }
  return v3;
}
