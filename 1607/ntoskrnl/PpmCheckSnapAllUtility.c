/*
 * XREFs of PpmCheckSnapAllUtility @ 0x1400D6CA0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     PpmPerfSnapUtility @ 0x1400D7020 (PpmPerfSnapUtility.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 */

char PpmCheckSnapAllUtility()
{
  unsigned __int16 i; // si
  char *v1; // rdi
  unsigned __int8 v2; // al
  void *v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // r15d
  LARGE_INTEGER PerformanceCounter; // r14
  bool v7; // bp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int16 v13; // bp
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // r9d
  unsigned __int64 *v21; // r10
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int16 v26; // di
  unsigned int v27; // esi
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int16 v31; // [rsp+40h] [rbp-E8h]
  _QWORD v32[21]; // [rsp+48h] [rbp-E0h] BYREF
  int v33; // [rsp+120h] [rbp-8h]
  void *retaddr; // [rsp+128h] [rbp+0h]

  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v1 = (char *)PpmParkNodes + 120 * i;
    v2 = v1[6];
    if ( v2 )
    {
      v3 = (void *)*((_QWORD *)v1 + 7);
      v4 = *((_QWORD *)v1 + 6);
      v5 = v2 + 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      _disable();
      v7 = (v33 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v4);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v4);
      }
      v8 = *(_QWORD *)(v4 + 16);
      if ( PerformanceCounter.QuadPart > v8 )
      {
        *(LARGE_INTEGER *)(v4 + 16) = PerformanceCounter;
        v9 = PerformanceCounter.QuadPart - v8;
        v10 = *(unsigned int *)(v4 + 12);
        *(_QWORD *)(v4 + 24) += v9;
        *(_QWORD *)(v4 + 8 * v10 + 32) += v9;
      }
      *((_QWORD *)v1 + 10) = *(_QWORD *)(v4 + 24);
      memmove(v3, (const void *)(v4 + 32), 8LL * v5);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v4, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      if ( v7 )
        _enable();
    }
  }
  v11 = PpmCheckRegistered;
  v31 = PpmCheckRegistered;
  if ( (_WORD)PpmCheckRegistered )
  {
    memmove(v32, qword_1402F8878, 8LL * (unsigned __int16)PpmCheckRegistered);
    v11 = v31;
  }
  v12 = v32[0];
  v13 = 0;
  while ( 1 )
  {
    v14 = v11;
    if ( !v12 )
      break;
LABEL_17:
    _BitScanForward64(&v15, v12);
    v12 &= ~(1LL << v15);
    v16 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v13 + (unsigned __int8)v15];
    if ( (unsigned int)v16 >= (unsigned int)KeNumberProcessors_0 )
      v17 = 0LL;
    else
      v17 = KiProcessorBlock[v16];
    if ( (unsigned __int8)PpmPerfSnapUtility(v17)
      && (v18 = KiProcessorIndexToNumberMappingTable[v16], v19 = v18 >> 6, v14 > (unsigned int)v19) )
    {
      v32[v19] &= ~(1LL << (v18 & 0x3F));
      v11 = v31;
    }
    else
    {
      v11 = v31;
    }
  }
  while ( ++v13 < (unsigned int)v11 )
  {
    v12 = v32[v13];
    if ( v12 )
      goto LABEL_17;
  }
  v20 = 0;
  if ( v11 )
  {
    v21 = v32;
    v22 = v11;
    do
    {
      v23 = *v21++;
      v20 += (unsigned int)((0x101010101010101LL
                           * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v22;
    }
    while ( v22 );
  }
  PpmCheckCount = v20;
  if ( !v20 )
    return 1;
  v25 = v32[0];
  v26 = 0;
  v27 = v11;
  while ( v25 )
  {
LABEL_31:
    _BitScanForward64(&v28, v25);
    v25 &= ~(1LL << v28);
    v29 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v26 + (unsigned __int8)v28];
    if ( (unsigned int)v29 >= (unsigned int)KeNumberProcessors_0 )
      v30 = 0LL;
    else
      v30 = KiProcessorBlock[v29];
    _m_prefetchw((const void *)(v30 + 24144));
    if ( !_InterlockedOr((volatile signed __int32 *)(v30 + 24144), 1u) )
      KiInsertQueueDpc(v30 + 24080, 0LL, 0LL, 0LL, 0);
  }
  while ( ++v26 < v27 )
  {
    v25 = v32[v26];
    if ( v25 )
      goto LABEL_31;
  }
  return 0;
}
