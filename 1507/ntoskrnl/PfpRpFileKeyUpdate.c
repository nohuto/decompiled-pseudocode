/*
 * XREFs of PfpRpFileKeyUpdate @ 0x1404CC0A0
 * Callers:
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x1405308A0 (PfpRpRehashIfNeeded.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // r15d
  int v6; // eax
  _QWORD *v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // r14
  unsigned __int64 v11; // rtt
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rsi
  WCHAR *v15; // rbx
  WCHAR *j; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // r11d
  __int64 v23; // r9
  __int64 v24; // rdx
  void *v25; // r12
  unsigned int v26; // r9d
  _QWORD *v27; // rcx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  unsigned __int64 v30; // rtt
  __int64 v32; // r10
  _QWORD *i; // rdx
  _QWORD *v34; // rcx
  void *v35; // rcx
  unsigned __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // [rsp+20h] [rbp-68h]
  _QWORD *P; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  PVOID v41[3]; // [rsp+38h] [rbp-50h] BYREF
  WCHAR v42; // [rsp+90h] [rbp+8h]
  unsigned int v43; // [rsp+98h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v44; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v40 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  v41[0] = 0LL;
  v9 = 0LL;
  v43 = 0;
  if ( (v6 & 1) == 0 )
    return 3221225600LL;
  v10 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  v44 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  _m_prefetchw((const void *)(a1 + 136));
  v11 = *(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v11 + 2, v11)
    && !ExfAcquireRundownProtection(v10) )
  {
    return 3221225600LL;
  }
  if ( !a3 )
  {
    v14 = 0LL;
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v18, a1 + 48, v19);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    if ( a3 )
    {
      v21 = v40;
      v22 = *(_DWORD *)(a1 + 4) >> 5;
      v23 = v40 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
      if ( v22 )
      {
        v24 = *(_QWORD *)(a1 + 8)
            + 8LL
            * ((37
              * (BYTE6(v23)
               + 37
               * (BYTE5(v23)
                + 37
                * (BYTE4(v23)
                 + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
              + HIBYTE(v23)) & (unsigned int)(v22 - 1));
        while ( 1 )
        {
          v24 = *(_QWORD *)v24;
          if ( (v24 & 1) != 0 )
            break;
          if ( v23 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v24 + 8)) )
          {
            v25 = P;
            *(_QWORD *)(v24 + 16) = v14;
            goto LABEL_22;
          }
        }
        v21 = v40;
      }
      v25 = P;
      *P = 0LL;
      P[1] = v21;
      P[2] = v14;
      if ( (unsigned int)PfpRpRehashIfNeeded(a1, v41, v43) )
      {
        v26 = *(_DWORD *)(a1 + 4);
        v38 = P[1] & (-1LL << (v26 & 0x1F));
        v27 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v38)
                          + 37
                          * (BYTE5(v38)
                           + 37
                           * (BYTE4(v38)
                            + 37
                            * (BYTE3(v38)
                             + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
                         + HIBYTE(v38)) & ((v26 >> 5) - 1)));
        *P = *v27;
        *v27 = P;
        v25 = 0LL;
        ++*(_DWORD *)a1;
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
LABEL_34:
      if ( *(_DWORD *)a1 )
      {
        v32 = v40 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
        for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8LL
                           * ((37
                             * (BYTE6(v32)
                              + 37
                              * (BYTE5(v32)
                               + 37
                               * (BYTE4(v32)
                                + 37
                                * (BYTE3(v32)
                                 + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                             + HIBYTE(v32)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); ; i = (_QWORD *)*i )
        {
          v34 = (_QWORD *)*i;
          if ( (*i & 1) != 0 )
            break;
          if ( ((-1LL << (*(_DWORD *)(a1 + 4) & 0x1F)) & v34[1]) == v32 )
          {
            *i = *v34;
            --*(_DWORD *)a1;
            *v34 |= 0x8000000000000002uLL;
            if ( *(_QWORD **)(a1 + 16) == v34 )
              *(_QWORD *)(a1 + 16) = a1 + 24;
            *v34 = v9;
            v9 = v34;
            goto LABEL_34;
          }
        }
      }
      v10 = v44;
      v25 = P;
    }
LABEL_22:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_26;
  }
  P = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  if ( P )
  {
    v12 = *(_DWORD *)(a1 + 4) >> 5;
    if ( *(_DWORD *)a1 >= 2 * v12 )
    {
      v36 = 2LL * v12;
      if ( v36 <= 0xFFFFFFFF )
      {
        v43 = 2 * v12;
        v37 = 2 * v12;
        if ( !(_DWORD)v36 )
        {
          v37 = 64;
          v43 = 64;
        }
        v41[0] = ExAllocatePoolWithTag(PagedPool, 8LL * v37, 0x48466650u);
        if ( !v41[0] )
          v43 = 0;
      }
    }
    v13 = *(unsigned __int16 *)(a2 + 34);
    v14 = 314159LL;
    v15 = *(WCHAR **)(a2 + 24);
    for ( j = &v15[v13]; v15 < j; v14 = HIBYTE(v42) + 37 * ((unsigned __int8)v42 + 37 * v14) )
      v42 = RtlUpcaseUnicodeChar(*v15++);
    if ( v14 )
      goto LABEL_9;
    v25 = P;
    v4 = -1073741747;
  }
  else
  {
    v4 = -1073741670;
    v25 = 0LL;
  }
LABEL_26:
  _m_prefetchw(v10);
  v30 = v10->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v30 - 2, v30) )
    ExfReleaseRundownProtection(v10);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  while ( v9 )
  {
    v35 = v9;
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v35, 0);
  }
  if ( v41[0] )
    ExFreePoolWithTag(v41[0], 0);
  return v4;
}
