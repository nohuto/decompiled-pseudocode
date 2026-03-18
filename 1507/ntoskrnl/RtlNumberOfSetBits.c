/*
 * XREFs of RtlNumberOfSetBits @ 0x1400EF6A0
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400D8828 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     RtlNumberOfClearBits @ 0x1400EF684 (RtlNumberOfClearBits.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     HvpGenerateLogEntry @ 0x14044D908 (HvpGenerateLogEntry.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     HvUpdateUnreconciledVector @ 0x14052E288 (HvUpdateUnreconciledVector.c)
 *     PopEvaluateGlobalUserStatus @ 0x14055E090 (PopEvaluateGlobalUserStatus.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     HvpRecoverData @ 0x1406650F0 (HvpRecoverData.c)
 *     HvApplyLegacyLogFile @ 0x140665B70 (HvApplyLegacyLogFile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // r9d
  unsigned int SizeOfBitMap; // r14d
  unsigned int v3; // ebp
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int *Buffer; // rax
  int v7; // r10d
  unsigned int v8; // r8d
  int v9; // edi
  unsigned int v10; // r11d
  int i; // ebx
  char v12; // dl
  unsigned int v13; // ecx
  __int64 v14; // r10
  unsigned __int64 v15; // r8
  char v17; // dl

  v1 = 0;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = BitMapHeader->SizeOfBitMap & 7;
  v4 = BitMapHeader->SizeOfBitMap >> 3;
  v5 = v4 + (v3 != 0);
  Buffer = BitMapHeader->Buffer;
  v7 = (unsigned __int8)Buffer & 7;
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v8 = v4 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v8 = 8 - v7;
    v9 = ((_BYTE)v4 - (8 - (_BYTE)v7)) & 7;
    if ( v3 )
      ++v9;
    v10 = v5 - v9 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v12 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v5 - 1 && v3 )
      v12 &= byte_140297800[SizeOfBitMap & 7];
    ++i;
    v1 += RtlpBitsClearTotal[(unsigned __int8)~v12];
  }
  if ( v10 )
  {
    v13 = ((v10 - 1) >> 3) + 1;
    v14 = v13;
    i += 8 * v13;
    do
    {
      v15 = *(_QWORD *)Buffer;
      Buffer += 2;
      v1 += (unsigned int)((0x101010101010101LL
                          * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v14;
    }
    while ( v14 );
  }
  for ( ; v9; --v9 )
  {
    v17 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v5 - 1 && v3 )
      v17 &= byte_140297800[SizeOfBitMap & 7];
    ++i;
    v1 += RtlpBitsClearTotal[(unsigned __int8)~v17];
  }
  return v1;
}
