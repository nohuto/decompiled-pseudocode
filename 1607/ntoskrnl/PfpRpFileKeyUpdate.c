/*
 * XREFs of PfpRpFileKeyUpdate @ 0x1404F61C0
 * Callers:
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfpRpIsRehashNeeded @ 0x1400ED6A4 (PfpRpIsRehashNeeded.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x1404F6714 (PfpRpRehashIfNeeded.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r14d
  int v5; // eax
  PVOID v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  WCHAR *v12; // rbx
  WCHAR *j; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rbx
  bool v17; // zf
  __int64 v18; // r13
  int v19; // r9d
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rdx
  void *v23; // rsi
  __int64 v24; // r8
  unsigned int v25; // r9d
  _QWORD *v26; // rcx
  int v28; // r9d
  __int64 v29; // r11
  __int64 v30; // r10
  _QWORD *i; // rdx
  _QWORD *v32; // rcx
  void *v33; // rcx
  _QWORD *P; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  PVOID PoolWithTag; // [rsp+30h] [rbp-48h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+38h] [rbp-40h]
  WCHAR v38; // [rsp+80h] [rbp+8h]
  unsigned int v39; // [rsp+88h] [rbp+10h] BYREF
  __int64 v40; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v40 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v39 = 0;
  v9 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  RunRef = (PEX_RUNDOWN_REF)(a1 + 136);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 136)) )
    return 3221225600LL;
  if ( !a3 )
  {
    v11 = 0LL;
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (_BYTE *)KeAbPreAcquire(a1 + 48, 0LL, 0);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v15, a1 + 48);
    if ( v16 )
      v16[26] |= 1u;
    v17 = a3 == 0;
    v18 = v40;
    if ( v17 )
    {
LABEL_31:
      if ( *(_DWORD *)a1 )
      {
        v28 = *(_DWORD *)(a1 + 4) >> 5;
        v29 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
        v30 = v18 & v29;
        v40 = v30;
        for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8LL
                           * ((37
                             * (BYTE6(v30)
                              + 37
                              * (BYTE5(v30)
                               + 37
                               * (BYTE4(v30)
                                + 37
                                * (BYTE3(v30)
                                 + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                             + HIBYTE(v30)) & (unsigned int)(v28 - 1))); ; i = (_QWORD *)*i )
        {
          v32 = (_QWORD *)*i;
          if ( (*i & 1) != 0 )
            break;
          if ( (v29 & v32[1]) == v30 )
          {
            *i = *v32;
            --*(_DWORD *)a1;
            *v32 |= 0x8000000000000002uLL;
            if ( *(_QWORD **)(a1 + 16) == v32 )
              *(_QWORD *)(a1 + 16) = a1 + 24;
            *v32 = v9;
            v9 = v32;
            goto LABEL_31;
          }
        }
      }
LABEL_19:
      v23 = P;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 4) >> 5;
      v20 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      v21 = v40 & v20;
      v40 &= v20;
      if ( v19 )
      {
        v22 = *(_QWORD *)(a1 + 8)
            + 8LL
            * ((37
              * (BYTE6(v40)
               + 37
               * (BYTE5(v40)
                + 37
                * (BYTE4(v40)
                 + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v21 + 11623883)))))))
              + HIBYTE(v40)) & (unsigned int)(v19 - 1));
        while ( 1 )
        {
          v22 = *(_QWORD *)v22;
          if ( (v22 & 1) != 0 )
            break;
          if ( v21 == (v20 & *(_QWORD *)(v22 + 8)) )
          {
            *(_QWORD *)(v22 + 16) = v11;
            goto LABEL_19;
          }
        }
      }
      v24 = v39;
      *P = 0LL;
      P[1] = v18;
      P[2] = v11;
      if ( (unsigned int)PfpRpRehashIfNeeded(a1, &PoolWithTag, v24) )
      {
        v25 = *(_DWORD *)(a1 + 4);
        v23 = 0LL;
        v35 = P[1] & (-1LL << (v25 & 0x1F));
        v26 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v35)
                          + 37
                          * (BYTE5(v35)
                           + 37
                           * (BYTE4(v35)
                            + 37
                            * (BYTE3(v35)
                             + 37 * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v35 + 11623883)))))))
                         + HIBYTE(v35)) & ((v25 >> 5) - 1)));
        *P = *v26;
        *v26 = P;
        ++*(_DWORD *)a1;
      }
      else
      {
        v3 = -1073741670;
        v23 = P;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    KeLeaveCriticalRegion();
    v8 = PoolWithTag;
    goto LABEL_25;
  }
  P = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  if ( P )
  {
    if ( (unsigned int)PfpRpIsRehashNeeded((_DWORD *)a1, &v39) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v39, 0x48466650u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        v39 = 0;
    }
    v10 = *(unsigned __int16 *)(a2 + 34);
    v11 = 314159LL;
    v12 = *(WCHAR **)(a2 + 24);
    for ( j = &v12[v10]; v12 < j; v11 = HIBYTE(v38) + 37 * ((unsigned __int8)v38 + 37 * v11) )
      v38 = RtlUpcaseUnicodeChar(*v12++);
    if ( v11 )
      goto LABEL_9;
    v23 = P;
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
    v23 = 0LL;
  }
LABEL_25:
  ExReleaseRundownProtection(RunRef);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  while ( v9 )
  {
    v33 = v9;
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v33, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v3;
}
