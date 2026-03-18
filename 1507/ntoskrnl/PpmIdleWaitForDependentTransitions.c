/*
 * XREFs of PpmIdleWaitForDependentTransitions @ 0x1402352AC
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140234828 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     PpmIdleTransitionStall @ 0x140235220 (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmIdleWaitForDependentTransitions(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // ebx
  unsigned __int16 i; // di
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r15
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  for ( i = 0; ; v1 = *(_QWORD *)&a1[4 * i + 4] )
  {
    while ( v1 )
    {
      _BitScanForward64(&v5, v1);
      v1 &= ~(1LL << v5);
      v6 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v5];
      if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
      {
        v7 = 0LL;
      }
      else
      {
        _mm_lfence();
        v7 = KiProcessorBlock[v6];
      }
      v8 = *(_QWORD *)(v7 + 23808);
      memset(v10, 0, 0x20uLL);
      v10[1] = PopIdleTransitionTimeout;
      BYTE4(v10[3]) = 1;
      v10[2] = v7;
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(v8 + 456))(*(_QWORD *)(v8 + 472)) )
      {
        if ( (*(_DWORD *)(v7 + 23872) & 0xFF000000) != 0x5000000 )
          return (unsigned int)-1073741782;
        PpmIdleTransitionStall((__int64)v10);
      }
    }
    if ( ++i >= (unsigned int)*a1 )
      break;
  }
  return v2;
}
