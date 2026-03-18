/*
 * XREFs of PpmPerfForceDomainStates @ 0x140159004
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char PpmPerfForceDomainStates()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 i; // r11
  unsigned __int64 v2; // r9
  unsigned __int16 v3; // r8
  unsigned int v4; // r10d
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 *v13; // r8
  unsigned __int16 v14; // dx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v20[21]; // [rsp+30h] [rbp-71h] BYREF

  v19 = 1310721LL;
  memset(v20, 0, 160);
  v0 = qword_140320838[0];
  for ( i = 0; ; v0 = qword_140320838[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v8, v0);
      v0 &= ~(1LL << v8);
      v9 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v8];
      if ( (unsigned int)v9 >= (unsigned int)KeNumberProcessors_0 )
      {
        v10 = 0LL;
      }
      else
      {
        _mm_lfence();
        v10 = KiProcessorBlock[v9];
      }
      v11 = *(_QWORD *)(v10 + 24176);
      *(_BYTE *)(v11 + 396) = 1;
      LOWORD(v12) = *(_WORD *)(v11 + 24);
      if ( (unsigned __int16)v12 < (unsigned __int16)v19 )
      {
        v13 = &v19;
      }
      else
      {
        LOWORD(v12) = v19;
        v13 = (__int64 *)(v11 + 24);
      }
      WORD1(v19) = 20;
      v14 = 0;
      LOWORD(v19) = *(_WORD *)v13;
      if ( (_WORD)v12 )
      {
        v14 = v12;
        v15 = v20;
        v12 = (unsigned __int16)v12;
        do
        {
          *v15 |= *(_QWORD *)((char *)v15 + v11 + 24 - (_QWORD)v20 + 8);
          ++v15;
          --v12;
        }
        while ( v12 );
      }
      while ( v14 < *(_WORD *)v13 )
      {
        v18 = v14++;
        v20[v18] = v13[v18 + 1];
      }
      HIDWORD(v19) = 0;
      while ( v14 < WORD1(v19) )
      {
        v16 = v14++;
        v20[v16] = 0LL;
      }
    }
    if ( ++i >= (unsigned int)(unsigned __int16)PpmPerfDomainsToUpdate )
      break;
  }
  v2 = v20[0];
  v3 = 0;
  v4 = (unsigned __int16)v19;
  while ( 1 )
  {
    while ( v2 )
    {
      _BitScanForward64(&v5, v2);
      v2 &= ~(1LL << v5);
      v6 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v3 + (unsigned __int8)v5];
      if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
      {
        v7 = 0LL;
      }
      else
      {
        _mm_lfence();
        v7 = KiProcessorBlock[v6];
      }
      *(_BYTE *)(*(_QWORD *)(v7 + 24184) + 80LL) = 1;
    }
    if ( ++v3 >= v4 )
      break;
    v2 = v20[v3];
  }
  return 1;
}
