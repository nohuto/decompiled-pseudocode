/*
 * XREFs of PpmCheckSnapAllUtility @ 0x1400A6B90
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     PpmPerfSnapUtility @ 0x1400A6F10 (PpmPerfSnapUtility.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
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
  unsigned __int64 v24; // rbx
  unsigned __int16 v25; // di
  unsigned int v26; // esi
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
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
    memmove(v32, &qword_140320998, 8LL * (unsigned __int16)PpmCheckRegistered);
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
  v24 = v32[0];
  v25 = 0;
  v26 = v11;
  while ( v24 )
  {
LABEL_30:
    _BitScanForward64(&v27, v24);
    v24 &= ~(1LL << v27);
    v28 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v25 + (unsigned __int8)v27];
    if ( (unsigned int)v28 >= (unsigned int)KeNumberProcessors_0 )
      v29 = 0LL;
    else
      v29 = KiProcessorBlock[v28];
    _m_prefetchw((const void *)(v29 + 24144));
    if ( !_InterlockedOr((volatile signed __int32 *)(v29 + 24144), 1u) )
      KiInsertQueueDpc(v29 + 24080, 0LL, 0LL, 0LL, 0);
  }
  while ( ++v25 < v26 )
  {
    v24 = v32[v25];
    if ( v24 )
      goto LABEL_30;
  }
  return 0;
}
