/*
 * XREFs of PpmCheckSnapAllUtility @ 0x140045F00
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     PpmPerfSnapUtility @ 0x140046280 (PpmPerfSnapUtility.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 */

char PpmCheckSnapAllUtility()
{
  unsigned __int16 i; // si
  char *v1; // rdi
  unsigned __int8 v2; // al
  void *v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // r15d
  LARGE_INTEGER v6; // rdx
  LARGE_INTEGER v7; // r8
  LARGE_INTEGER PerformanceCounter; // r14
  bool v9; // bp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int16 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int16 v15; // bp
  unsigned int v16; // esi
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // r9d
  unsigned __int64 *v23; // r10
  __int64 v24; // r11
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned __int16 v27; // di
  unsigned int v28; // esi
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int16 v33; // [rsp+40h] [rbp-E8h]
  _QWORD v34[21]; // [rsp+48h] [rbp-E0h] BYREF
  int v35; // [rsp+120h] [rbp-8h]
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
      v9 = (v35 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v4);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v4, v6.QuadPart, v7.QuadPart);
      }
      v10 = *(_QWORD *)(v4 + 16);
      if ( PerformanceCounter.QuadPart > v10 )
      {
        *(LARGE_INTEGER *)(v4 + 16) = PerformanceCounter;
        v11 = PerformanceCounter.QuadPart - v10;
        v12 = *(unsigned int *)(v4 + 12);
        *(_QWORD *)(v4 + 24) += v11;
        *(_QWORD *)(v4 + 8 * v12 + 32) += v11;
      }
      *((_QWORD *)v1 + 10) = *(_QWORD *)(v4 + 24);
      memmove(v3, (const void *)(v4 + 32), 8LL * v5);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v4, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      if ( v9 )
        _enable();
    }
  }
  v13 = PpmCheckRegistered;
  v33 = PpmCheckRegistered;
  if ( (_WORD)PpmCheckRegistered )
  {
    memmove(v34, &qword_1402D17F8, 8LL * (unsigned __int16)PpmCheckRegistered);
    v13 = v33;
  }
  v14 = v34[0];
  v15 = 0;
  while ( 1 )
  {
    v16 = v13;
    if ( !v14 )
      break;
LABEL_17:
    _BitScanForward64(&v17, v14);
    v14 &= ~(1LL << v17);
    v18 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v15 + (unsigned __int8)v17];
    if ( (unsigned int)v18 >= (unsigned int)KeNumberProcessors_0 )
      v19 = 0LL;
    else
      v19 = KiProcessorBlock[v18];
    if ( (unsigned __int8)PpmPerfSnapUtility(v19)
      && (v20 = KiProcessorIndexToNumberMappingTable[v18], v21 = v20 >> 6, v16 > (unsigned int)v21) )
    {
      v34[v21] &= ~(1LL << (v20 & 0x3F));
      v13 = v33;
    }
    else
    {
      v13 = v33;
    }
  }
  while ( ++v15 < (unsigned int)v13 )
  {
    v14 = v34[v15];
    if ( v14 )
      goto LABEL_17;
  }
  v22 = 0;
  if ( v13 )
  {
    v23 = v34;
    v24 = v13;
    do
    {
      v25 = *v23++;
      v22 += (unsigned int)((0x101010101010101LL
                           * ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v24;
    }
    while ( v24 );
  }
  PpmCheckCount = v22;
  if ( !v22 )
    return 1;
  v26 = v34[0];
  v27 = 0;
  v28 = v13;
  while ( v26 )
  {
LABEL_30:
    _BitScanForward64(&v29, v26);
    v26 &= ~(1LL << v29);
    v30 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v27 + (unsigned __int8)v29];
    if ( (unsigned int)v30 >= (unsigned int)KeNumberProcessors_0 )
      v31 = 0LL;
    else
      v31 = KiProcessorBlock[v30];
    _m_prefetchw((const void *)(v31 + 24144));
    if ( !_InterlockedOr((volatile signed __int32 *)(v31 + 24144), 1u) )
      KiInsertQueueDpc(v31 + 24080, 0LL, 0LL, 0LL, 0);
  }
  while ( ++v27 < v28 )
  {
    v26 = v34[v27];
    if ( v26 )
      goto LABEL_30;
  }
  return 0;
}
