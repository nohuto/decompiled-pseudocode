/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x140157238
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyProcessorState @ 0x1401574A0 (PpmPerfApplyProcessorState.c)
 *     PpmPerfQueueAction @ 0x140157980 (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  unsigned __int16 v1; // di
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rsi
  unsigned __int16 v5; // r14
  unsigned int v6; // r15d
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 *v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int16 i; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int16 v23; // [rsp+38h] [rbp-89h]
  _QWORD v24[21]; // [rsp+40h] [rbp-81h] BYREF

  v0 = 0;
  memset(v24, 0, 160);
  v1 = PpmPerfProcessorsToUpdate[0];
  v23 = PpmPerfProcessorsToUpdate[0];
  if ( LOWORD(PpmPerfProcessorsToUpdate[0]) )
  {
    memmove(v24, qword_140320788, 8LL * LOWORD(PpmPerfProcessorsToUpdate[0]));
    v1 = v23;
  }
  PpmPerfProcessorsToUpdate[0] = 1310721LL;
  memset(qword_140320788, 0, 0xA0uLL);
  v4 = v24[0];
  v5 = 0;
LABEL_4:
  v6 = v1;
  while ( 1 )
  {
    if ( v4 )
    {
      _BitScanForward64(&v7, v4);
      v4 &= ~(1LL << v7);
      v8 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v5 + (unsigned __int8)v7];
      if ( (unsigned int)v8 >= (unsigned int)KeNumberProcessors_0 )
        v9 = 0LL;
      else
        v9 = KiProcessorBlock[v8];
      if ( (unsigned __int8)PpmPerfApplyProcessorState(v9, 0LL, v2, v3) )
      {
        v10 = KiProcessorIndexToNumberMappingTable[v8];
        v11 = v10 >> 6;
        if ( v6 > (unsigned int)v11 )
          v24[(unsigned int)v11] = v24[v11] & ~(1LL << (v10 & 0x3F));
      }
      v1 = v23;
      goto LABEL_4;
    }
    if ( ++v5 >= (unsigned int)v1 )
      break;
    v4 = v24[v5];
  }
  v12 = 0;
  if ( v1 )
  {
    v13 = v24;
    v14 = v1;
    do
    {
      v15 = *v13;
      v16 = *v13++;
      v12 += (unsigned int)((0x101010101010101LL
                           * ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v14;
    }
    while ( v14 );
  }
  PpmCheckCount = v12;
  if ( !v12 )
    return 1;
  v17 = v24[0];
  for ( i = 0; ; v17 = v24[i] )
  {
    while ( v17 )
    {
      _BitScanForward64(&v19, v17);
      v17 &= ~(1LL << v19);
      v20 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v19];
      if ( (unsigned int)v20 >= (unsigned int)KeNumberProcessors_0 )
        v21 = 0LL;
      else
        v21 = KiProcessorBlock[v20];
      PpmPerfQueueAction(v21, 2LL);
    }
    if ( ++i >= (unsigned int)v1 )
      break;
  }
  return v0;
}
