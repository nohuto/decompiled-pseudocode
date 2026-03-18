/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x1404BF9D8
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(_DWORD *a1, int *a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // edi
  int v6; // r13d
  _QWORD *GuidEntryByGuid; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rdx
  __int64 *v14; // r8
  __int64 v15; // r12
  unsigned int v16; // ebx
  __int64 v17; // r10
  _DWORD *v18; // r10
  char v19; // cl
  char *v20; // r9
  __int64 v21; // r11
  unsigned int v22; // r13d
  int v23; // r14d
  __int64 v24; // r12
  int v25; // ecx
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  __int64 v28; // rtt
  __int64 v30; // rcx
  _OWORD *v31; // rdx
  unsigned int v32; // r9d
  unsigned int v33; // ebx
  _DWORD *v34; // rcx
  _OWORD *v35; // rax
  int v36; // r8d
  __int64 v37; // rcx
  unsigned int v38; // ebx
  char *v39; // rcx
  char *v40; // rdx
  int v41; // [rsp+20h] [rbp-58h]
  unsigned int v42; // [rsp+24h] [rbp-54h]
  _BYTE *v43; // [rsp+28h] [rbp-50h]
  __int64 *v44; // [rsp+30h] [rbp-48h]

  v3 = *a3;
  v5 = 0;
  v6 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, 0);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a2, 0, *a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = GuidEntryByGuid + 48;
  v11 = KeAbPreAcquire((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 96, 0LL) )
    ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 48, v11, (ULONG_PTR)(GuidEntryByGuid + 48));
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = GuidEntryByGuid + 5;
  v14 = (__int64 *)GuidEntryByGuid[5];
  v15 = 8LL;
  GuidEntryByGuid[49] = KeGetCurrentThread();
  v16 = 8;
  while ( v14 != v13 )
  {
    v17 = v16;
    ++v6;
    v42 = v16;
    v16 += 16;
    v43 = (char *)v14 + 98;
    v18 = (int *)((char *)a2 + v17);
    v19 = 0;
    v20 = (char *)a2 + v16;
    v41 = v6;
    v44 = v14;
    v21 = 0LL;
    if ( (*((_BYTE *)v14 + 98) & 8) != 0 )
    {
      v19 = 1;
      if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        v16 += 32;
        LODWORD(v21) = 1;
        if ( v16 <= v3 )
        {
          *(_DWORD *)v20 = 1;
          v20[4] = *((_BYTE *)GuidEntryByGuid + 74);
          *((_QWORD *)v20 + 2) = GuidEntryByGuid[8];
          *((_WORD *)v20 + 3) = *((_WORD *)GuidEntryByGuid + 36);
        }
      }
    }
    else if ( *((_BYTE *)v14 + 99) || *((_BYTE *)v14 + 100) )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        if ( *(_DWORD *)((char *)GuidEntryByGuid + v21 + 112) )
        {
          if ( ((unsigned __int8)(1 << v22) & *((_BYTE *)v14 + 99)) != 0 )
          {
            ++v23;
            v16 += 32;
            if ( v16 <= v3 )
            {
              *(_OWORD *)v20 = *(_OWORD *)((char *)GuidEntryByGuid + v21 + 112);
              *((_OWORD *)v20 + 1) = *(_OWORD *)((char *)GuidEntryByGuid + v21 + 128);
              v20 += 32;
            }
          }
        }
        v24 = v14[5];
        if ( v24 )
        {
          if ( *(_DWORD *)(v21 + v24 + 112) )
          {
            if ( ((unsigned __int8)(1 << v22) & *((_BYTE *)v14 + 100)) != 0 )
            {
              ++v23;
              v16 += 32;
              if ( v16 <= v3 )
              {
                *(_OWORD *)v20 = *(_OWORD *)(v21 + v24 + 112);
                *((_OWORD *)v20 + 1) = *(_OWORD *)(v21 + v24 + 128);
                v20 += 32;
              }
            }
          }
        }
        ++v22;
        v21 += 32LL;
        v15 = 8LL;
      }
      while ( v22 < 8 );
      v6 = v41;
      v13 = GuidEntryByGuid + 5;
      v19 = 0;
      LODWORD(v21) = v23;
      v10 = GuidEntryByGuid + 48;
    }
    v14 = (__int64 *)*v14;
    if ( v16 <= v3 )
    {
      if ( v19 == 1 )
        v18[3] = 1;
      if ( (*v43 & 2) != 0 )
        v25 = *(_DWORD *)(v44[10] + 744);
      else
        v25 = 0;
      v18[2] = v25;
      v18[1] = v21;
      if ( v14 == v13 )
      {
        *v18 = 0;
        break;
      }
      *v18 = v16 - v42;
    }
  }
  GuidEntryByGuid[49] = 0LL;
  _m_prefetchw(v10);
  v26 = *v10;
  v27 = *v10 - 16;
  if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v27 = 0LL;
  if ( (v26 & 2) != 0 || (v28 = *v10, v28 != _InterlockedCompareExchange64(v10, v27, v26)) )
    ExfReleasePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !v6 )
  {
    v30 = v16;
    v31 = GuidEntryByGuid + 14;
    v32 = v16;
    v33 = v16 + 16;
    v34 = (int *)((char *)a2 + v30);
    v6 = 2;
    v35 = (_OWORD *)((char *)a2 + v33);
    v36 = 0;
    do
    {
      if ( *(_DWORD *)v31 )
      {
        ++v36;
        v33 += 32;
        if ( v33 <= v3 )
        {
          *v35 = *v31;
          v35[1] = v31[1];
          v35 += 2;
        }
      }
      v31 += 2;
      --v15;
    }
    while ( v15 );
    if ( v33 <= v3 )
    {
      v34[2] = 0;
      v34[1] = v36;
      *v34 = v33 - v32;
      v34[3] = 2;
    }
    v37 = v33;
    v38 = v33 + 16;
    v39 = (char *)a2 + v37;
    v40 = (char *)a2 + v38;
    v16 = v38 + 32;
    if ( v16 <= v3 )
    {
      *(_QWORD *)(v39 + 4) = 0LL;
      *(_DWORD *)v39 = 0;
      *((_DWORD *)v39 + 3) = 3;
      *(_DWORD *)v40 = *((_BYTE *)GuidEntryByGuid + 75) & 1;
      if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        *((_DWORD *)v39 + 1) = 1;
        v40[4] = *((_BYTE *)GuidEntryByGuid + 74);
        *((_QWORD *)v40 + 2) = GuidEntryByGuid[8];
        *((_WORD *)v40 + 3) = *((_WORD *)GuidEntryByGuid + 36);
      }
    }
  }
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  if ( v16 > v3 )
    v5 = -1073741789;
  else
    *a2 = v6;
  *a3 = v16;
  return v5;
}
