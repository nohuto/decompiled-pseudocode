/*
 * XREFs of RtlNumberOfSetBits @ 0x140076850
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140005158 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     RtlNumberOfClearBits @ 0x140076ADC (RtlNumberOfClearBits.c)
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvpGenerateLogEntry @ 0x140480044 (HvpGenerateLogEntry.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvUpdateUnreconciledVector @ 0x1404AA750 (HvUpdateUnreconciledVector.c)
 *     PopEvaluateGlobalUserStatus @ 0x14052EC84 (PopEvaluateGlobalUserStatus.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     HvFoldBackUnreconciledData @ 0x140605FB0 (HvFoldBackUnreconciledData.c)
 *     HvpRecoverData @ 0x14061136C (HvpRecoverData.c)
 *     HvApplyLegacyLogFile @ 0x140612000 (HvApplyLegacyLogFile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // r9d
  unsigned int SizeOfBitMap; // r14d
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int *Buffer; // rax
  int v7; // r10d
  unsigned int v8; // r8d
  int v9; // edi
  unsigned int v10; // r11d
  int i; // ebx
  char v12; // dl
  unsigned int v14; // ecx
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  char v17; // dl

  v1 = 0;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = BitMapHeader->SizeOfBitMap & 7;
  v4 = BitMapHeader->SizeOfBitMap >> 3;
  v5 = v4 + (v3 != 0);
  Buffer = BitMapHeader->Buffer;
  v7 = (unsigned __int8)Buffer & 7;
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) <= (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v8 = 8 - v7;
    v9 = ((_BYTE)v4 - (8 - (_BYTE)v7)) & 7;
    if ( v3 )
      ++v9;
    v10 = v5 - v9 - v8;
  }
  else
  {
    v8 = v4 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v9 = 0;
    v10 = 0;
  }
  for ( i = 0; v8; --v8 )
  {
    v12 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v5 - 1 && v3 )
      v12 &= byte_14026F6B8[SizeOfBitMap & 7];
    ++i;
    v1 += RtlpBitsClearTotal[(unsigned __int8)~v12];
  }
  if ( v10 )
  {
    v14 = ((v10 - 1) >> 3) + 1;
    v15 = v14;
    i += 8 * v14;
    do
    {
      v16 = *(_QWORD *)Buffer;
      Buffer += 2;
      v1 += (unsigned int)((0x101010101010101LL
                          * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v15;
    }
    while ( v15 );
  }
  for ( ; v9; --v9 )
  {
    v17 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v5 - 1 && v3 )
      v17 &= byte_14026F6B8[SizeOfBitMap & 7];
    ++i;
    v1 += RtlpBitsClearTotal[(unsigned __int8)~v17];
  }
  return v1;
}
