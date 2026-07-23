/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140409D90
 * Callers:
 *     EtwpDisableTraceProviders @ 0x14040A3AC (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpGetSchematizedFilterSize @ 0x14040D870 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404927B0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAllocDataBlock @ 0x140492958 (EtwpAllocDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x1406A8E68 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v4; // rbx
  unsigned int v7; // r12d
  unsigned __int64 *v8; // r14
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  char v11; // r13
  unsigned int v12; // edi
  ULONG_PTR v13; // rcx
  signed __int64 v14; // rax
  unsigned __int64 v15; // rtt
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // r10
  ULONG_PTR v21; // r8
  int v22; // r11d
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r15
  __int128 v26; // xmm1
  _QWORD **v27; // rcx
  _QWORD *v28; // r14
  struct _KTHREAD *v29; // rax
  _QWORD *v30; // r15
  char *v31; // r13
  unsigned __int64 *v32; // r12
  _BYTE *v33; // rax
  _BYTE *v34; // rdi
  char v35; // dl
  char v36; // cl
  __int64 v37; // rdx
  int SchematizedFilterSize; // eax
  int v39; // r13d
  unsigned int v40; // r12d
  __int64 *v41; // rdi
  signed __int64 v42; // rax
  signed __int64 v43; // rcx
  __int64 v44; // rtt
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int8 v48; // cl
  unsigned __int8 v49; // al
  char v50; // [rsp+39h] [rbp-38h]
  __int64 v52; // [rsp+3Ch] [rbp-35h]
  __int64 v53; // [rsp+48h] [rbp-29h]
  char v54; // [rsp+50h] [rbp-21h]
  int v55; // [rsp+54h] [rbp-1Dh]
  _OWORD v57[2]; // [rsp+60h] [rbp-11h] BYREF
  _OWORD Source2[2]; // [rsp+80h] [rbp+Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v50 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  LODWORD(v52) = 0;
  v8 = (unsigned __int64 *)(a2 + 384);
  v9 = (_BYTE *)KeAbPreAcquire(a2 + 384, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    v10[26] |= 1u;
  v11 = 0;
  *(_QWORD *)(a2 + 392) = KeGetCurrentThread();
  v55 = *(unsigned __int16 *)(a2 + 72);
  if ( v55 == a1 )
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
  memset(v57, 0, sizeof(v57));
  v20 = *(_QWORD *)&v57[1];
  v21 = a2 + 116;
  v22 = DWORD2(v57[0]);
  LOBYTE(v23) = BYTE4(v57[0]);
  v24 = -1LL;
  *((_QWORD *)&v57[1] + 1) = -1LL;
  v25 = 8LL;
  do
  {
    if ( *(_DWORD *)(v21 - 4) )
    {
      v48 = *(_BYTE *)v21;
      v49 = v23;
      LODWORD(v57[0]) = 1;
      if ( (unsigned __int8)v23 <= v48 )
        v49 = v48;
      v20 |= *(_QWORD *)(v21 + 12);
      v24 &= *(_QWORD *)(v21 + 20);
      LOBYTE(v23) = v49;
      v22 |= *(_DWORD *)(v21 + 4);
    }
    v21 += 32LL;
    --v25;
  }
  while ( v25 );
  BYTE4(v57[0]) = v23;
  *((_QWORD *)&v57[1] + 1) = v24;
  LOBYTE(v23) = 1;
  DWORD2(v57[0]) = v22;
  *(_QWORD *)&v57[1] = v20;
  v26 = v57[1];
  *(_OWORD *)(a2 + 80) = v57[0];
  *(_OWORD *)(a2 + 96) = v26;
  EtwpUpdateFilterData(a2, v12, 0, v23, 0LL);
  v27 = (_QWORD **)(a2 + 40);
  if ( *v27 != v27 )
  {
    v54 = ~(unsigned __int8)(1 << v12);
    v28 = *v27;
    do
    {
      if ( a3 )
      {
        v29 = KeGetCurrentThread();
        v30 = v28 - 2;
        v31 = (char *)v28 + 85;
        --v29->KernelApcDisable;
        v32 = (unsigned __int64 *)(v28[2] + 384LL);
        v33 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v32, 0LL, 0);
        v34 = v33;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
          ExfAcquirePushLockExclusiveEx(v32, v33, (ULONG_PTR)v32);
        if ( v34 )
          v34[26] |= 1u;
        v7 = v52;
        v50 = 1;
        *(_QWORD *)(v30[4] + 392LL) = KeGetCurrentThread();
      }
      else
      {
        v30 = v28;
        v31 = (char *)v28 + 100;
      }
      v35 = *v31;
      v28 = (_QWORD *)*v28;
      v36 = *v31 & v54;
      *v31 = v36;
      if ( ((*((_BYTE *)v30 + 98) & 8) == 0 || v55 == a1) && v36 != v35 )
      {
        EtwpComputeRegEntryEnableInfo(v30, Source2);
        LOBYTE(v37) = *((_BYTE *)v30 + 100);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, v37);
        v39 = SchematizedFilterSize;
        v40 = 120;
        if ( SchematizedFilterSize )
          v40 = SchematizedFilterSize + 136;
        v52 = (unsigned int)EtwpAllocDataBlock(v40, 0LL);
        if ( (int)v52 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v40;
          MEMORY[0x28] = *(_OWORD *)(v30[4] + 24LL);
          MEMORY[0x48] = Source2[0];
          MEMORY[0x58] = Source2[1];
          MEMORY[0x70] = *(_BYTE *)(a2 + 75) & 1;
          LOWORD(v53) = *(_WORD *)(a2 + 72);
          WORD1(v53) = *(unsigned __int8 *)(a2 + 74);
          HIDWORD(v53) = *(_DWORD *)(a2 + 64);
          MEMORY[0x68] = v53;
          if ( v39 )
          {
            MEMORY[0x84] = 0x80000000;
            MEMORY[0x80] = v39;
            MEMORY[0x78] = 136LL;
            EtwpCopySchematizedFilters((void *)0x88);
            MEMORY[0x74] = 1;
          }
          else
          {
            MEMORY[0x74] = 0;
          }
        }
        v7 = v52;
      }
      if ( v50 )
      {
        *(_QWORD *)(v30[4] + 392LL) = 0LL;
        v41 = (__int64 *)(v30[4] + 384LL);
        _m_prefetchw(v41);
        v42 = *v41;
        v43 = *v41 - 16;
        if ( (*v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v43 = 0LL;
        if ( (v42 & 2) != 0 || (v44 = *v41, v44 != _InterlockedCompareExchange64(v41, v43, v42)) )
          ExfReleasePushLock(v41);
        KeAbPostRelease((ULONG_PTR)v41);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v45, v46, v47);
        v50 = 0;
      }
    }
    while ( v28 != (_QWORD *)(a2 + 40) );
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  if ( v11 == 1 )
    EtwpUnreferenceGuidEntry(a2);
  return v7;
}
