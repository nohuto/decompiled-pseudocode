/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x1406A02C8
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, UINT *a4)
{
  UINT v4; // r12d
  signed __int64 v5; // rbx
  unsigned int v8; // ebp
  _QWORD *GuidEntryByGuid; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rdx
  _OWORD *v17; // r8
  _OWORD *v18; // rax
  __int64 v19; // rax
  UINT v20; // ecx
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  struct _KTHREAD *v24; // rax
  unsigned __int64 *v25; // r12
  _BYTE *v26; // rax
  _BYTE *v27; // r14
  __int64 *v28; // r14
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  __int64 v31; // rtt
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r8d
  unsigned int v36; // esi
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  UINT v44; // [rsp+20h] [rbp-58h]
  _OWORD *v45; // [rsp+30h] [rbp-48h]
  int *v46; // [rsp+38h] [rbp-40h]
  UINT puResult; // [rsp+90h] [rbp+18h] BYREF
  UINT *v48; // [rsp+98h] [rbp+20h]

  v48 = a4;
  v4 = *a4;
  v5 = 0LL;
  v44 = *a4;
  v8 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = GuidEntryByGuid + 48;
  v13 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 96, 0LL) )
    ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 48, v13, (ULONG_PTR)(GuidEntryByGuid + 48));
  if ( v14 )
    v14[26] |= 1u;
  v15 = 4;
  GuidEntryByGuid[49] = KeGetCurrentThread();
  v16 = 8LL;
  if ( v4 >= 4 )
    *a3 = 8;
  v17 = a3 + 1;
  v18 = GuidEntryByGuid + 14;
  do
  {
    v15 += 32;
    if ( v15 <= v4 )
    {
      *v17 = *v18;
      v17[1] = v18[1];
      v17 += 2;
    }
    v18 += 2;
    --v16;
  }
  while ( v16 );
  v19 = v15;
  v20 = v15 + 4;
  v46 = (_DWORD *)((char *)a3 + v19);
  v21 = (_QWORD *)((char *)a3 + v20);
  v22 = GuidEntryByGuid + 5;
  v45 = v21;
  v23 = (_QWORD *)GuidEntryByGuid[5];
  puResult = v20;
  while ( v23 != v22 )
  {
    if ( RtlUIntAdd(v20, 0x10u, &puResult) < 0 )
    {
      v36 = -2147483643;
      goto LABEL_45;
    }
    v20 = puResult;
    ++v8;
    if ( puResult <= v4 )
    {
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      v25 = (unsigned __int64 *)(v23[2] + 384LL);
      v26 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v25, 0LL, 0);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
        ExfAcquirePushLockExclusiveEx(v25, v26, (ULONG_PTR)v25);
      if ( v27 )
        v27[26] |= 1u;
      *(_QWORD *)(v23[2] + 392LL) = KeGetCurrentThread();
      *v45 = *(_OWORD *)(v23[2] + 24LL);
      *(_QWORD *)(v23[2] + 392LL) = 0LL;
      v28 = (__int64 *)(v23[2] + 384LL);
      _m_prefetchw(v28);
      v29 = *v28;
      v30 = *v28 - 16;
      if ( (*v28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v30 = 0LL;
      if ( (v29 & 2) != 0 || (v31 = *v28, v31 != _InterlockedCompareExchange64(v28, v30, v29)) )
        ExfReleasePushLock(v28);
      KeAbPostRelease((ULONG_PTR)v28);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
      ++v45;
      v20 = puResult;
      v4 = v44;
    }
    v23 = (_QWORD *)*v23;
    v22 = GuidEntryByGuid + 5;
  }
  if ( v20 > v4 )
  {
    v36 = -1073741789;
  }
  else
  {
    if ( v8 == 1 )
    {
      v35 = 1;
    }
    else if ( v8 <= 1 )
    {
      v35 = 0;
    }
    else
    {
      qsort(v21, v8, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
      v35 = 1;
      v37 = v21 + 2;
      v38 = v8 - 1;
      do
      {
        if ( *v37 == *v21 && v37[1] == v21[1] )
        {
          v37 += 2;
        }
        else
        {
          v21 += 2;
          if ( v21 != v37 )
            *(_OWORD *)v21 = *(_OWORD *)v37;
          v37 += 2;
          ++v35;
        }
        --v38;
      }
      while ( v38 );
    }
    v36 = 0;
    *v46 = v35;
  }
LABEL_45:
  GuidEntryByGuid[49] = 0LL;
  _m_prefetchw(v12);
  v39 = *v12;
  if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v39 - 16;
  if ( (v39 & 2) != 0 || (v40 = *v12, v40 != _InterlockedCompareExchange64(v12, v5, v39)) )
    ExfReleasePushLock(GuidEntryByGuid + 48);
  KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v41, v42, v43);
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  *v48 = puResult;
  return v36;
}
