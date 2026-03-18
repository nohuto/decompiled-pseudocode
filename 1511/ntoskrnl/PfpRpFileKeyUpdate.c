/*
 * XREFs of PfpRpFileKeyUpdate @ 0x1403FACF0
 * Callers:
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfpRpIsRehashNeeded @ 0x1400E34AC (PfpRpIsRehashNeeded.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x1404A81B8 (PfpRpRehashIfNeeded.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r14d
  int v5; // eax
  PVOID v8; // r12
  _QWORD *v9; // rdi
  WCHAR *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  WCHAR *j; // rbp
  bool v14; // zf
  __int64 v15; // r13
  int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rdx
  void *v20; // rsi
  __int64 v21; // r8
  unsigned int v22; // r9d
  _QWORD *v23; // rcx
  int v25; // r9d
  __int64 v26; // r11
  __int64 v27; // r10
  _QWORD *i; // rdx
  _QWORD *v29; // rcx
  void *v30; // rcx
  _QWORD *P; // [rsp+20h] [rbp-58h]
  PVOID PoolWithTag; // [rsp+28h] [rbp-50h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp-48h]
  WCHAR v34; // [rsp+80h] [rbp+8h]
  unsigned int v35; // [rsp+88h] [rbp+10h] BYREF
  __int64 v36; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v36 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v35 = 0;
  v9 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  RunRef = (PEX_RUNDOWN_REF)(a1 + 136);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 136)) )
    return 3221225600LL;
  if ( !a3 )
  {
    v12 = 0LL;
LABEL_9:
    PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 48));
    v14 = a3 == 0;
    v15 = v36;
    if ( v14 )
    {
LABEL_27:
      if ( *(_DWORD *)a1 )
      {
        v25 = *(_DWORD *)(a1 + 4) >> 5;
        v26 = -1LL << (*(_DWORD *)(a1 + 4) & 0x1F);
        v27 = v15 & v26;
        v36 = v27;
        for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8LL
                           * ((37
                             * (BYTE6(v27)
                              + 37
                              * (BYTE5(v27)
                               + 37
                               * (BYTE4(v27)
                                + 37
                                * (BYTE3(v27)
                                 + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
                             + HIBYTE(v27)) & (unsigned int)(v25 - 1))); ; i = (_QWORD *)*i )
        {
          v29 = (_QWORD *)*i;
          if ( (*i & 1) != 0 )
            break;
          if ( (v26 & v29[1]) == v27 )
          {
            *i = *v29;
            --*(_DWORD *)a1;
            *v29 |= 0x8000000000000002uLL;
            if ( *(_QWORD **)(a1 + 16) == v29 )
              *(_QWORD *)(a1 + 16) = a1 + 24;
            *v29 = v9;
            v9 = v29;
            goto LABEL_27;
          }
        }
      }
LABEL_15:
      v20 = P;
    }
    else
    {
      v16 = *(_DWORD *)(a1 + 4) >> 5;
      v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      v18 = v36 & v17;
      v36 &= v17;
      if ( v16 )
      {
        v19 = *(_QWORD *)(a1 + 8)
            + 8LL
            * ((37
              * (BYTE6(v36)
               + 37
               * (BYTE5(v36)
                + 37
                * (BYTE4(v36)
                 + 37 * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v18 + 11623883)))))))
              + HIBYTE(v36)) & (unsigned int)(v16 - 1));
        while ( 1 )
        {
          v19 = *(_QWORD *)v19;
          if ( (v19 & 1) != 0 )
            break;
          if ( v18 == (v17 & *(_QWORD *)(v19 + 8)) )
          {
            *(_QWORD *)(v19 + 16) = v12;
            goto LABEL_15;
          }
        }
      }
      v21 = v35;
      *P = 0LL;
      P[1] = v15;
      P[2] = v12;
      if ( (unsigned int)PfpRpRehashIfNeeded(a1, &PoolWithTag, v21) )
      {
        v22 = *(_DWORD *)(a1 + 4);
        v20 = 0LL;
        v36 = P[1] & (-1LL << (v22 & 0x1F));
        v23 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v36)
                          + 37
                          * (BYTE5(v36)
                           + 37
                           * (BYTE4(v36)
                            + 37
                            * (BYTE3(v36)
                             + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v36 + 11623883)))))))
                         + HIBYTE(v36)) & ((v22 >> 5) - 1)));
        *P = *v23;
        *v23 = P;
        ++*(_DWORD *)a1;
      }
      else
      {
        v3 = -1073741670;
        v20 = P;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = PoolWithTag;
    goto LABEL_21;
  }
  P = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  if ( P )
  {
    if ( (unsigned int)PfpRpIsRehashNeeded((_DWORD *)a1, &v35) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v35, 0x48466650u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        v35 = 0;
    }
    v10 = *(WCHAR **)(a2 + 24);
    v11 = *(unsigned __int16 *)(a2 + 34);
    v12 = 314159LL;
    for ( j = &v10[v11]; v10 < j; v12 = HIBYTE(v34) + 37 * ((unsigned __int8)v34 + 37 * v12) )
      v34 = RtlUpcaseUnicodeChar(*v10++);
    if ( v12 )
      goto LABEL_9;
    v20 = P;
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
    v20 = 0LL;
  }
LABEL_21:
  ExReleaseRundownProtection_0(RunRef);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  while ( v9 )
  {
    v30 = v9;
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v30, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v3;
}
