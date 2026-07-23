/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x1404CC1F8
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, _DWORD *a2, int *a3, UINT *a4)
{
  UINT v4; // r13d
  int *v5; // r12
  int v6; // r15d
  int v8; // ebx
  _QWORD *GuidEntryByGuid; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // r14
  _QWORD *v15; // r14
  _QWORD *v16; // r10
  UINT v17; // r9d
  _DWORD *v18; // r15
  __int64 v19; // r10
  _BYTE *v20; // rdx
  int v21; // r8d
  bool v22; // zf
  char v23; // cl
  __int64 v24; // r11
  unsigned int v25; // r12d
  __int64 v26; // r14
  _OWORD *v27; // r11
  __int64 v28; // r13
  _OWORD *v29; // r11
  _QWORD *v30; // r10
  int v31; // ecx
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  signed __int64 v36; // rtt
  signed __int64 v37; // rtt
  UINT v38; // r15d
  _DWORD *v39; // r9
  UINT v40; // ecx
  int v41; // r14d
  unsigned int i; // edi
  _OWORD *v43; // r10
  __int64 v44; // r11
  __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // r11
  UINT puResult; // [rsp+24h] [rbp-2Ch] BYREF
  int v49; // [rsp+28h] [rbp-28h]
  int v50; // [rsp+2Ch] [rbp-24h]
  UINT v51; // [rsp+30h] [rbp-20h]
  UINT v52; // [rsp+34h] [rbp-1Ch]
  _BYTE *v53; // [rsp+38h] [rbp-18h]
  __int64 v54; // [rsp+40h] [rbp-10h]

  v4 = *a4;
  v5 = a3;
  v6 = 0;
  v51 = *a4;
  v49 = 0;
  v8 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 0);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(v5, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = GuidEntryByGuid + 48;
  v13 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 96, 0LL) )
    ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 48, v13, (ULONG_PTR)(GuidEntryByGuid + 48));
  if ( v14 )
    v14[26] |= 1u;
  v15 = GuidEntryByGuid + 5;
  v16 = (_QWORD *)GuidEntryByGuid[5];
  v17 = 8;
  GuidEntryByGuid[49] = KeGetCurrentThread();
  puResult = 8;
  if ( v16 == GuidEntryByGuid + 5 )
    goto LABEL_47;
  while ( 1 )
  {
    v52 = v17;
    v18 = (int *)((char *)v5 + v17);
    if ( RtlUIntAdd(v17, 0x10u, &puResult) < 0 )
      goto LABEL_42;
    v17 = puResult;
    v20 = (_BYTE *)(v19 + 98);
    ++v49;
    v21 = 0;
    v22 = (*(_BYTE *)(v19 + 98) & 8) == 0;
    v50 = 0;
    v54 = v19;
    v53 = (_BYTE *)(v19 + 98);
    if ( v22 )
    {
      if ( *(_BYTE *)(v19 + 100) || *(_BYTE *)(v19 + 101) )
      {
        v25 = 0;
        while ( 1 )
        {
          v26 = 4LL * v25;
          if ( LODWORD(GuidEntryByGuid[v26 + 14]) && ((unsigned __int8)(1 << v25) & *(_BYTE *)(v19 + 100)) != 0 )
          {
            v50 = v21 + 1;
            if ( RtlUIntAdd(v17, 0x20u, &puResult) < 0 )
              goto LABEL_41;
            v17 = puResult;
            v21 = v50;
            if ( puResult <= v4 )
            {
              *v27 = *(_OWORD *)&GuidEntryByGuid[v26 + 14];
              v27[1] = *(_OWORD *)&GuidEntryByGuid[v26 + 16];
            }
          }
          v28 = *(_QWORD *)(v19 + 40);
          if ( v28 && *(_DWORD *)(v26 * 8 + v28 + 112) && ((unsigned __int8)(1 << v25) & *(_BYTE *)(v19 + 101)) != 0 )
          {
            v50 = v21 + 1;
            if ( RtlUIntAdd(v17, 0x20u, &puResult) < 0 )
            {
              v4 = v51;
LABEL_41:
              v5 = a3;
LABEL_42:
              v8 = -2147483643;
              GuidEntryByGuid[49] = 0LL;
              _m_prefetchw(v12);
              v32 = *v12;
              if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v33 = 0LL;
              else
                v33 = v32 - 16;
              if ( (v32 & 2) != 0 || (v36 = *v12, v36 != _InterlockedCompareExchange64(v12, v33, v32)) )
                ExfReleasePushLock(GuidEntryByGuid + 48);
              KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 48));
              KeLeaveCriticalRegion();
              goto LABEL_54;
            }
            v17 = puResult;
            if ( puResult <= v51 )
            {
              *v29 = *(_OWORD *)(v26 * 8 + v28 + 112);
              v29[1] = *(_OWORD *)(v26 * 8 + v28 + 128);
            }
          }
          v4 = v51;
          ++v25;
          v21 = v50;
          if ( v25 >= 8 )
          {
            v5 = a3;
            v15 = GuidEntryByGuid + 5;
            v20 = v53;
            break;
          }
        }
      }
      v23 = 0;
    }
    else
    {
      v23 = 1;
      if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        v50 = 1;
        if ( RtlUIntAdd(puResult, 0x20u, &puResult) < 0 )
          goto LABEL_42;
        v17 = puResult;
        v21 = v50;
        v23 = v50;
        v20 = v53;
        if ( puResult <= v4 )
        {
          *(_DWORD *)v24 = 1;
          *(_BYTE *)(v24 + 4) = *((_BYTE *)GuidEntryByGuid + 74);
          *(_QWORD *)(v24 + 16) = GuidEntryByGuid[8];
          *(_WORD *)(v24 + 6) = *((_WORD *)GuidEntryByGuid + 36);
        }
      }
    }
    v30 = *(_QWORD **)v19;
    if ( v17 > v4 )
      goto LABEL_39;
    if ( v23 == 1 )
      v18[3] = 1;
    v31 = (*v20 & 2) != 0 ? *(_DWORD *)(*(_QWORD *)(v54 + 80) + 744LL) : 0;
    v18[2] = v31;
    v18[1] = v21;
    if ( v30 == v15 )
      break;
    *v18 = v17 - v52;
LABEL_39:
    if ( v30 == v15 )
      goto LABEL_46;
  }
  *v18 = 0;
LABEL_46:
  v6 = v49;
LABEL_47:
  GuidEntryByGuid[49] = 0LL;
  _m_prefetchw(v12);
  v34 = *v12;
  if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v35 = 0LL;
  else
    v35 = v34 - 16;
  if ( (v34 & 2) != 0 || (v37 = *v12, v37 != _InterlockedCompareExchange64(v12, v35, v34)) )
    ExfReleasePushLock(GuidEntryByGuid + 48);
  KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 48));
  KeLeaveCriticalRegion();
  if ( !v6 )
  {
    v38 = puResult;
    v49 = 2;
    if ( RtlUIntAdd(puResult, 0x10u, &puResult) < 0 )
      goto LABEL_64;
    v40 = puResult;
    v41 = 0;
    for ( i = 0; i < 8; ++i )
    {
      if ( LODWORD(GuidEntryByGuid[4 * i + 14]) )
      {
        ++v41;
        if ( RtlUIntAdd(v40, 0x20u, &puResult) < 0 )
          goto LABEL_64;
        v40 = puResult;
        if ( puResult <= v4 )
        {
          *v43 = *(_OWORD *)((char *)GuidEntryByGuid + v44 + 112);
          v43[1] = *(_OWORD *)((char *)GuidEntryByGuid + v44 + 128);
        }
      }
    }
    if ( v40 <= v4 )
    {
      v39[2] = 0;
      v39[1] = v41;
      *v39 = v40 - v38;
      v39[3] = 2;
    }
    if ( RtlUIntAdd(v40, 0x10u, &puResult) < 0 || RtlUIntAdd(puResult, 0x20u, &puResult) < 0 )
    {
LABEL_64:
      v8 = -2147483643;
      goto LABEL_54;
    }
    if ( puResult > v4 )
    {
LABEL_54:
      v6 = v49;
    }
    else
    {
      *(_QWORD *)(v45 + 4) = v47;
      *(_DWORD *)v45 = v47;
      *(_DWORD *)(v45 + 12) = 3;
      *(_DWORD *)v46 = *((_BYTE *)GuidEntryByGuid + 75) & 1;
      v6 = v49;
      if ( (*((_BYTE *)GuidEntryByGuid + 75) & 1) != 0 )
      {
        *(_DWORD *)(v45 + 4) = 1;
        *(_BYTE *)(v46 + 4) = *((_BYTE *)GuidEntryByGuid + 74);
        *(_QWORD *)(v46 + 16) = GuidEntryByGuid[8];
        *(_WORD *)(v46 + 6) = *((_WORD *)GuidEntryByGuid + 36);
      }
    }
  }
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  if ( v8 >= 0 )
  {
    if ( puResult > v4 )
      v8 = -1073741789;
    else
      *v5 = v6;
  }
  *a4 = puResult;
  return (unsigned int)v8;
}
