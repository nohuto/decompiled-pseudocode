/*
 * XREFs of SmcStoreResize @ 0x1406DBDB4
 * Callers:
 *     SmcProcessResizeRequest @ 0x1406DA898 (SmcProcessResizeRequest.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SmStoreResize @ 0x1406DA3E0 (SmStoreResize.c)
 *     SmcCacheDereference @ 0x1406DAF84 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x1406DB1DC (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x1406DBC50 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x1406DBC88 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  struct _PRIVILEGE_SET *v3; // r14
  struct _EX_RUNDOWN_REF v4; // rax
  unsigned __int64 Count; // rdi
  int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  bool v9; // zf
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r15
  struct _EX_RUNDOWN_REF *v16; // rax
  unsigned __int64 v17; // rtt
  BOOLEAN v18; // al
  ULONG *v19; // r15
  struct _PRIVILEGE_SET *v20; // r9
  unsigned __int64 v21; // r10
  _DWORD *v22; // rdx
  unsigned __int64 v23; // r8
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int64 v26; // r9
  struct _KTHREAD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdi
  struct _PRIVILEGE_SET *v31; // r9
  unsigned __int64 v32; // r10
  _DWORD *v33; // r8
  unsigned __int64 v34; // rdx
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  struct _EX_RUNDOWN_REF *v37; // rcx
  unsigned __int64 v38; // rtt
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v41[4]; // [rsp+40h] [rbp-20h] BYREF
  int v43; // [rsp+A8h] [rbp+48h]
  struct _EX_RUNDOWN_REF *v44; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v43 = 0;
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( !v4.Count )
    return (unsigned int)-1073741672;
  v7 = *(unsigned int *)(v4.Count + 8);
  if ( a2[4] > (unsigned int)v7 )
  {
    v6 = -1073741811;
    goto LABEL_52;
  }
  v8 = (unsigned __int64)(v7 + 31) >> 5;
  v3 = (struct _PRIVILEGE_SET *)SmAlloc((unsigned int)(4 * v8), 0x72436D73u);
  if ( v3 )
  {
    v9 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(Count + 8);
    BitMapHeader.Buffer = &v3->PrivilegeCount;
    if ( v9 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      v41[1] = v3;
      v41[0] = 0x400000000LL;
      v41[2] = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = (volatile signed __int64 *)(Count + 160);
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire(Count + 160, 0LL, 0LL, v10);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 160), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 160), v13, Count + 160, v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(Count, a2[2], a2[3]);
    v44 = v16;
    if ( v16 )
    {
      _m_prefetchw(&v16[2]);
      v17 = v16[2].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)&v16[2], v17 + 2, v17) )
        v18 = 1;
      else
        v18 = ExfAcquireRundownProtection(v16 + 2);
      v19 = a2 + 4;
      v43 = v18;
      if ( (*a2 & 0x100) != 0 )
      {
        v6 = SmcStorePlacementGet(Count, *v19, (__int64)v41);
        if ( v6 < 0 )
          goto LABEL_43;
        v20 = v3;
        v21 = 0LL;
        v22 = (_DWORD *)v44[1].Count;
        v23 = (4 * (unsigned __int64)(unsigned int)v8 + 3) >> 2;
        if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v8) )
          v23 = 0LL;
        if ( v23 )
        {
          do
          {
            ++v21;
            *v22 |= v20->PrivilegeCount;
            v20 = (struct _PRIVILEGE_SET *)((char *)v20 + 4);
            ++v22;
          }
          while ( v21 < v23 );
        }
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      v24 = KeGetCurrentThread();
      v6 = 0;
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      SmStoreResize(a2[3], a2[2], (unsigned int)&BitMapHeader, (_DWORD)a2 + 16, (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !*v19 )
        goto LABEL_49;
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      v28 = KeAbPreAcquire((ULONG_PTR)v12, 0LL, 0LL, v26);
      v30 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, v28, (ULONG_PTR)v12, v29);
      if ( v30 )
        *(_BYTE *)(v30 + 26) |= 1u;
      v31 = v3;
      v32 = 0LL;
      v33 = (_DWORD *)v44[1].Count;
      v34 = (4 * (unsigned __int64)(unsigned int)v8 + 3) >> 2;
      if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v8) )
        v34 = 0LL;
      if ( v34 )
      {
        do
        {
          ++v32;
          *v33 ^= v31->PrivilegeCount;
          v31 = (struct _PRIVILEGE_SET *)((char *)v31 + 4);
          ++v33;
        }
        while ( v32 < v34 );
      }
      v6 = 0;
    }
    else
    {
      v6 = -1073741672;
    }
LABEL_43:
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    v35 = KeGetCurrentThread();
    v36 = v35->KernelApcDisable + 1;
    v35->KernelApcDisable = v36;
    if ( !v36
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
      && !v35->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
LABEL_49:
    if ( v43 )
    {
      v37 = v44 + 2;
      _m_prefetchw(&v44[2]);
      v38 = v37->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v38 != _InterlockedCompareExchange64((volatile signed __int64 *)v37, v38 - 2, v38) )
        ExfReleaseRundownProtection(v37);
    }
    goto LABEL_52;
  }
  v6 = -1073741670;
LABEL_52:
  SmcCacheDereference(a1, a2[1]);
  if ( v3 )
    ExFreePoolEx(v3);
  return (unsigned int)v6;
}
