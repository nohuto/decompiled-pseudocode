/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1404CCDA8 (EtwpDisableTraceProviders.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404359EC (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14046C714 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404CE650 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1404CE704 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x1404CEC94 (EtwpUpdateFilterData.c)
 *     EtwpCopySchematizedFilters @ 0x140666DEC (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v4; // rbx
  unsigned int v7; // r12d
  unsigned __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // r13
  unsigned int v12; // edi
  __int64 v13; // rcx
  signed __int64 v14; // rax
  unsigned __int64 v15; // rtt
  __int64 v17; // r10
  __int64 v18; // r8
  int v19; // r11d
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // r15
  __int128 v23; // xmm1
  _QWORD **v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // r15
  char *v27; // r13
  char v28; // dl
  char v29; // cl
  int SchematizedFilterSize; // eax
  int v31; // r13d
  unsigned int v32; // r12d
  struct _KTHREAD *v33; // rax
  unsigned __int64 *v34; // r12
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 *v37; // rdi
  signed __int64 v38; // rax
  signed __int64 v39; // rcx
  __int64 v40; // rtt
  unsigned __int8 v41; // cl
  unsigned __int8 v42; // al
  char v43; // [rsp+39h] [rbp-38h]
  int v45; // [rsp+3Ch] [rbp-35h]
  __int128 v46; // [rsp+40h] [rbp-31h]
  int v47; // [rsp+50h] [rbp-21h]
  char v49; // [rsp+58h] [rbp-19h]
  _OWORD v50[2]; // [rsp+60h] [rbp-11h] BYREF
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v43 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  v45 = 0;
  v8 = (unsigned __int64 *)(a2 + 384);
  v9 = KeAbPreAcquire(a2 + 384, 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = 0;
  *(_QWORD *)(a2 + 392) = KeGetCurrentThread();
  v47 = *(unsigned __int16 *)(a2 + 72);
  if ( v47 == a1 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  v12 = 0;
  v13 = a2 + 112;
  while ( *(_DWORD *)v13 != 1 || *(unsigned __int16 *)(v13 + 6) != a1 )
  {
    ++v12;
    v13 += 32LL;
    if ( v12 >= 8 )
      goto LABEL_10;
  }
  *(_DWORD *)v13 = 0;
  memset(v50, 0, sizeof(v50));
  v17 = *(_QWORD *)&v50[1];
  v18 = a2 + 116;
  v19 = DWORD2(v50[0]);
  LOBYTE(v20) = BYTE4(v50[0]);
  v21 = -1LL;
  *((_QWORD *)&v50[1] + 1) = -1LL;
  v22 = 8LL;
  do
  {
    if ( *(_DWORD *)(v18 - 4) )
    {
      v41 = *(_BYTE *)v18;
      v42 = v20;
      LODWORD(v50[0]) = 1;
      if ( (unsigned __int8)v20 <= v41 )
        v42 = v41;
      v17 |= *(_QWORD *)(v18 + 12);
      v21 &= *(_QWORD *)(v18 + 20);
      LOBYTE(v20) = v42;
      v19 |= *(_DWORD *)(v18 + 4);
    }
    v18 += 32LL;
    --v22;
  }
  while ( v22 );
  BYTE4(v50[0]) = v20;
  *((_QWORD *)&v50[1] + 1) = v21;
  LOBYTE(v20) = 1;
  DWORD2(v50[0]) = v19;
  *(_QWORD *)&v50[1] = v17;
  v23 = v50[1];
  *(_OWORD *)(a2 + 80) = v50[0];
  *(_OWORD *)(a2 + 96) = v23;
  EtwpUpdateFilterData(a2, v12, 0, v20, 0LL);
  v24 = (_QWORD **)(a2 + 40);
  if ( *v24 != v24 )
  {
    v49 = ~(unsigned __int8)(1 << v12);
    v25 = *v24;
    do
    {
      if ( a3 )
      {
        v33 = KeGetCurrentThread();
        v26 = (__int64)(v25 - 2);
        v27 = (char *)v25 + 84;
        --v33->KernelApcDisable;
        v34 = (unsigned __int64 *)(v25[2] + 384LL);
        v35 = KeAbPreAcquire((ULONG_PTR)v34, 0LL, 0LL);
        v36 = v35;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
          ExfAcquirePushLockExclusiveEx(v34, v35, (ULONG_PTR)v34);
        if ( v36 )
          *(_BYTE *)(v36 + 26) |= 1u;
        v7 = v45;
        v43 = 1;
        *(_QWORD *)(*(_QWORD *)(v26 + 32) + 392LL) = KeGetCurrentThread();
      }
      else
      {
        v26 = (__int64)v25;
        v27 = (char *)v25 + 99;
      }
      v28 = *v27;
      v25 = (_QWORD *)*v25;
      v29 = *v27 & v49;
      *v27 = v29;
      if ( ((*(_BYTE *)(v26 + 98) & 8) == 0 || v47 == a1) && v29 != v28 )
      {
        EtwpComputeRegEntryEnableInfo(v26, (unsigned __int8 *)Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v26 + 99));
        v31 = SchematizedFilterSize;
        v32 = 120;
        if ( SchematizedFilterSize )
          v32 = SchematizedFilterSize + 136;
        v45 = EtwpAllocDataBlock(v32, 0LL);
        if ( v45 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v32;
          MEMORY[0x28] = *(_OWORD *)(*(_QWORD *)(v26 + 32) + 24LL);
          MEMORY[0x48] = Source2[0];
          MEMORY[0x58] = Source2[1];
          MEMORY[0x70] = *(_BYTE *)(a2 + 75) & 1;
          LOWORD(v46) = *(_WORD *)(a2 + 72);
          WORD1(v46) = *(unsigned __int8 *)(a2 + 74);
          *(_QWORD *)((char *)&v46 + 4) = *(unsigned int *)(a2 + 64);
          MEMORY[0x68] = v46;
          if ( v31 )
          {
            MEMORY[0x84] = 0x80000000;
            MEMORY[0x80] = v31;
            MEMORY[0x78] = 136LL;
            EtwpCopySchematizedFilters((void *)0x88);
            MEMORY[0x74] = 1;
          }
          else
          {
            MEMORY[0x74] = 0;
          }
        }
        v7 = v45;
      }
      if ( v43 )
      {
        *(_QWORD *)(*(_QWORD *)(v26 + 32) + 392LL) = 0LL;
        v37 = (__int64 *)(*(_QWORD *)(v26 + 32) + 384LL);
        _m_prefetchw(v37);
        v38 = *v37;
        v39 = *v37 - 16;
        if ( (*v37 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v39 = 0LL;
        if ( (v38 & 2) != 0 || (v40 = *v37, v40 != _InterlockedCompareExchange64(v37, v39, v38)) )
          ExfReleasePushLock(v37);
        KeAbPostRelease((ULONG_PTR)v37);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v43 = 0;
      }
    }
    while ( v25 != (_QWORD *)(a2 + 40) );
    v8 = (unsigned __int64 *)(a2 + 384);
  }
  v11 = 1;
LABEL_10:
  *(_QWORD *)(a2 + 392) = 0LL;
  _m_prefetchw(v8);
  v14 = *v8;
  if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v14 - 16;
  if ( (v14 & 2) != 0 || (v15 = *v8, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v4, v14)) )
    ExfReleasePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v11 == 1 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return v7;
}
