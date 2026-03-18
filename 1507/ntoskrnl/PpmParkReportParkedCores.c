/*
 * XREFs of PpmParkReportParkedCores @ 0x1400E9000
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfQueueAction @ 0x140157980 (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char PpmParkReportParkedCores()
{
  int v1; // r10d
  unsigned __int16 v2; // r8
  unsigned __int16 i; // r9
  bool v4; // zf
  __int64 v5; // rax
  int v6; // r9d
  unsigned __int64 *v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int16 v12; // si
  unsigned int v13; // ebp
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int16 v17; // [rsp+20h] [rbp-D8h]
  _QWORD v18[21]; // [rsp+28h] [rbp-D0h] BYREF

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v2 = PpmPerfChangedCoreParkingMask[0];
  if ( (unsigned int)PpmPerfChangedCoreParkingMask[0] >= (unsigned __int16)PpmPerfNewCoreParkingMask )
    v2 = PpmPerfNewCoreParkingMask;
  v17 = v2;
  for ( i = 0; i < v17; ++i )
  {
    v4 = (qword_140322728[i] & qword_1403225C8[i]) == 0;
    v18[i] = qword_140322728[i] & qword_1403225C8[i];
    v2 = v17;
    if ( !v4 )
      v1 = 1;
  }
  if ( i < 0x14u )
  {
    do
    {
      v5 = i++;
      v18[v5] = 0LL;
    }
    while ( i < 0x14u );
    v2 = v17;
  }
  if ( !v1 )
    return 1;
  v6 = 0;
  if ( v2 )
  {
    v7 = v18;
    v8 = v2;
    do
    {
      v9 = *v7;
      v10 = *v7++;
      v6 += (unsigned int)((0x101010101010101LL
                          * ((((v9 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v9 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v9 - ((v10 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v9 - ((v10 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v8;
    }
    while ( v8 );
  }
  v11 = v18[0];
  v12 = 0;
  PpmCheckCount = v6;
  v13 = v2;
  while ( 1 )
  {
    while ( v11 )
    {
      _BitScanForward64(&v14, v11);
      v11 &= ~(1LL << v14);
      v15 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v12 + (unsigned __int8)v14];
      if ( (unsigned int)v15 >= (unsigned int)KeNumberProcessors_0 )
        v16 = 0LL;
      else
        v16 = KiProcessorBlock[v15];
      PpmPerfQueueAction(v16, 3LL);
    }
    if ( ++v12 >= v13 )
      break;
    v11 = v18[v12];
  }
  return 0;
}
