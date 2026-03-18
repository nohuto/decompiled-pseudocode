/*
 * XREFs of PpmParkReportUnparkedCores @ 0x1400E8FB8
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfQueueAction @ 0x140157980 (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  unsigned __int16 v1; // dx
  int v2; // r8d
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // cx
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int16 v9; // dx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r8d
  __int64 *v15; // r9
  __int64 v16; // r10
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int16 v20; // si
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = PpmPerfChangedCoreParkingMask[0];
  LOWORD(PpmPerfNewUnparkedMask[0]) = PpmPerfChangedCoreParkingMask[0];
  WORD1(PpmPerfNewUnparkedMask[0]) = 20;
  v2 = 0;
  v3 = PpmPerfNewCoreParkingMask;
  v4 = 0;
  if ( (unsigned int)PpmPerfChangedCoreParkingMask[0] < (unsigned __int16)PpmPerfNewCoreParkingMask )
    v3 = PpmPerfChangedCoreParkingMask[0];
  if ( v3 )
  {
    v4 = v3;
    v5 = 0LL;
    v6 = v3;
    do
    {
      v7 = qword_1403225C8[v5 / 8];
      v5 += 8LL;
      v8 = *(_QWORD *)&PpmPerfChangedCoreParkingMask[v5 / 2] & ~v7;
      PpmPerfNewUnparkedMask[v5 / 8] = v8;
      if ( v8 )
        v2 = 1;
      --v6;
    }
    while ( v6 );
  }
  if ( v4 < v1 )
  {
    v9 = v1 - v4;
    v10 = v4;
    v11 = v9;
    v4 += v9;
    do
    {
      v12 = qword_140322728[v10];
      qword_14031ED28[v10++] = v12;
      if ( v12 )
        v2 = 1;
      --v11;
    }
    while ( v11 );
  }
  HIDWORD(PpmPerfNewUnparkedMask[0]) = 0;
  while ( v4 < WORD1(PpmPerfNewUnparkedMask[0]) )
  {
    v13 = v4++;
    qword_14031ED28[v13] = 0LL;
  }
  if ( !v2 )
    return 1;
  v14 = 0;
  if ( LOWORD(PpmPerfNewUnparkedMask[0]) )
  {
    v15 = qword_14031ED28;
    v16 = LOWORD(PpmPerfNewUnparkedMask[0]);
    do
    {
      v17 = *v15;
      v18 = *v15++;
      v14 += (unsigned int)((0x101010101010101LL
                           * ((((v17 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v17 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v17 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v17 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v16;
    }
    while ( v16 );
  }
  v19 = qword_14031ED28[0];
  v20 = 0;
  PpmCheckCount = v14;
  while ( 1 )
  {
    while ( v19 )
    {
      _BitScanForward64(&v21, v19);
      v19 &= ~(1LL << v21);
      v22 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v20 + (unsigned __int8)v21];
      if ( (unsigned int)v22 >= (unsigned int)KeNumberProcessors_0 )
        v23 = 0LL;
      else
        v23 = KiProcessorBlock[v22];
      PpmPerfQueueAction(v23, 1LL);
    }
    if ( ++v20 >= (unsigned int)LOWORD(PpmPerfNewUnparkedMask[0]) )
      break;
    v19 = qword_14031ED28[v20];
  }
  return 0;
}
