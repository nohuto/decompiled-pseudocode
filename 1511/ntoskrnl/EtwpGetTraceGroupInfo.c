/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x1406602C4
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // r15d
  signed __int64 v4; // rbx
  unsigned int v7; // ebp
  _QWORD *GuidEntryByGuid; // r13
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // esi
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // esi
  _QWORD *v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // r12
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  signed __int64 *v26; // r15
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  signed __int64 v29; // rtt
  int v30; // r9d
  _QWORD *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // ebp
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  _OWORD *v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v38; // [rsp+30h] [rbp-48h]
  int *v39; // [rsp+38h] [rbp-40h]
  unsigned int v40; // [rsp+88h] [rbp+10h]

  v3 = *a3;
  v4 = 0LL;
  v40 = *a3;
  v7 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a2, 0, *a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = GuidEntryByGuid + 48;
  v12 = KeAbPreAcquire((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 96, 0LL) )
    ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 48, v12, (ULONG_PTR)(GuidEntryByGuid + 48));
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = 4;
  GuidEntryByGuid[49] = KeGetCurrentThread();
  v15 = 8LL;
  if ( v3 >= 4 )
    *a2 = 8;
  v16 = a2 + 1;
  v17 = GuidEntryByGuid + 14;
  do
  {
    v14 += 32;
    if ( v14 <= v3 )
    {
      *v16 = *v17;
      v16[1] = v17[1];
      v16 += 2;
    }
    v17 += 2;
    --v15;
  }
  while ( v15 );
  v18 = v14;
  v19 = v14 + 4;
  v39 = (_DWORD *)((char *)a2 + v18);
  v20 = (_QWORD *)((char *)a2 + v19);
  v21 = GuidEntryByGuid + 5;
  v22 = (_QWORD *)GuidEntryByGuid[5];
  v37 = v20;
  while ( v22 != v21 )
  {
    v19 += 16;
    ++v7;
    if ( v19 <= v3 )
    {
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v38 = (unsigned __int64 *)(v22[2] + 384LL);
      v24 = KeAbPreAcquire((ULONG_PTR)v38, 0LL, 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
        ExfAcquirePushLockExclusiveEx(v38, v24, (ULONG_PTR)v38);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      *(_QWORD *)(v22[2] + 392LL) = KeGetCurrentThread();
      *v37 = *(_OWORD *)(v22[2] + 24LL);
      *(_QWORD *)(v22[2] + 392LL) = 0LL;
      v26 = (signed __int64 *)(v22[2] + 384LL);
      _m_prefetchw(v26);
      v27 = *v26;
      v28 = *v26 - 16;
      if ( (*v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v28 = 0LL;
      if ( (v27 & 2) != 0 || (v29 = *v26, v29 != _InterlockedCompareExchange64(v26, v28, v27)) )
        ExfReleasePushLock(v26);
      KeAbPostRelease((ULONG_PTR)v26);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ++v37;
      v21 = GuidEntryByGuid + 5;
      v3 = v40;
    }
    v22 = (_QWORD *)*v22;
  }
  if ( v19 > v3 )
  {
    v34 = -1073741789;
  }
  else
  {
    if ( v7 == 1 )
    {
      v30 = 1;
    }
    else if ( v7 <= 1 )
    {
      v30 = 0;
    }
    else
    {
      qsort(v20, v7, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
      v30 = 1;
      v31 = v20 + 2;
      v32 = v7 - 1;
      do
      {
        v33 = *v31 - *v20;
        if ( *v31 == *v20 )
          v33 = v31[1] - v20[1];
        if ( v33 )
        {
          v20 += 2;
          if ( v20 != v31 )
            *(_OWORD *)v20 = *(_OWORD *)v31;
          v31 += 2;
          ++v30;
        }
        else
        {
          v31 += 2;
        }
        --v32;
      }
      while ( v32 );
    }
    v34 = 0;
    *v39 = v30;
  }
  GuidEntryByGuid[49] = 0LL;
  _m_prefetchw(v11);
  v35 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v35 - 16;
  if ( (v35 & 2) != 0 || (v36 = *v11, v36 != _InterlockedCompareExchange64(v11, v4, v35)) )
    ExfReleasePushLock(GuidEntryByGuid + 48);
  KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  result = v34;
  *a3 = v19;
  return result;
}
