/*
 * XREFs of RtlNumberOfSetBits @ 0x140021E20
 * Callers:
 *     RtlNumberOfClearBits @ 0x140021DFC (RtlNumberOfClearBits.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400F9550 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SepGetLowBoxNumberEntry @ 0x1403BEF4C (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x1403C5868 (SepAddLuidToIndexEntry.c)
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 *     HvpGenerateLogEntry @ 0x1403ED278 (HvpGenerateLogEntry.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 *     HvUpdateUnreconciledVector @ 0x1404A5B34 (HvUpdateUnreconciledVector.c)
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404F3198 (PopEvaluateGlobalUserStatus.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     HvFoldBackUnreconciledData @ 0x1405E69A4 (HvFoldBackUnreconciledData.c)
 *     HvpRecoverData @ 0x1405ECCC0 (HvpRecoverData.c)
 *     HvApplyLegacyLogFile @ 0x1405ED680 (HvApplyLegacyLogFile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
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
      v12 &= byte_140247340[SizeOfBitMap & 7];
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
      v17 &= byte_140247340[SizeOfBitMap & 7];
    ++i;
    v1 += RtlpBitsClearTotal[(unsigned __int8)~v17];
  }
  return v1;
}
