/*
 * XREFs of SmcStoreResize @ 0x1406597BC
 * Callers:
 *     SmcProcessResizeRequest @ 0x14065846C (SmcProcessResizeRequest.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SmAlloc @ 0x1400F85A0 (SmAlloc.c)
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 *     SmStoreResize @ 0x140657FE8 (SmStoreResize.c)
 *     SmcCacheDereference @ 0x140658B10 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x140658D24 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x140659658 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x140659690 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  struct _PRIVILEGE_SET *v3; // r14
  struct _EX_RUNDOWN_REF v4; // rax
  unsigned __int64 Count; // rdi
  int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  bool v9; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  struct _EX_RUNDOWN_REF *v14; // rax
  ULONG *v15; // r13
  struct _PRIVILEGE_SET *v16; // r9
  unsigned __int64 v17; // r10
  _DWORD *v18; // rdx
  unsigned __int64 v19; // r8
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  struct _PRIVILEGE_SET *v23; // r9
  unsigned __int64 v24; // r10
  _DWORD *v25; // r8
  unsigned __int64 v26; // rdx
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v29[4]; // [rsp+40h] [rbp-20h] BYREF
  int v31; // [rsp+A8h] [rbp+48h]
  struct _EX_RUNDOWN_REF *v32; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v31 = 0;
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( !v4.Count )
    return (unsigned int)-1073741672;
  v7 = *(unsigned int *)(v4.Count + 8);
  if ( a2[4] > (unsigned int)v7 )
  {
    v6 = -1073741811;
    goto LABEL_41;
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
      v29[1] = v3;
      v29[0] = 0x400000000LL;
      v29[2] = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    v11 = (volatile signed __int64 *)(Count + 160);
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire(Count + 160, 0LL, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 160), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 160), v12, Count + 160);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    v14 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(Count, a2[2], a2[3]);
    v32 = v14;
    if ( !v14 )
    {
      v6 = -1073741672;
LABEL_36:
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      goto LABEL_39;
    }
    v15 = a2 + 4;
    v31 = ExAcquireRundownProtection(v14 + 2);
    if ( (*a2 & 0x100) != 0 )
    {
      v6 = SmcStorePlacementGet(Count, *v15, (__int64)v29);
      if ( v6 < 0 )
        goto LABEL_36;
      v16 = v3;
      v17 = 0LL;
      v18 = (_DWORD *)v32[1].Count;
      v19 = (4 * (unsigned __int64)(unsigned int)v8 + 3) >> 2;
      if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v8) )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          ++v17;
          *v18 |= v16->PrivilegeCount;
          v16 = (struct _PRIVILEGE_SET *)((char *)v16 + 4);
          ++v18;
        }
        while ( v17 < v19 );
      }
    }
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
    SmStoreResize(a2[3], a2[2], (unsigned int)&BitMapHeader, (_DWORD)a2 + 16, (*a2 >> 8) & 1);
    if ( (*a2 & 0x100) != 0 )
    {
      v6 = 0;
    }
    else
    {
      v6 = 0;
      if ( *v15 )
      {
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        v21 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
        v22 = v21;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v11, v21, (ULONG_PTR)v11);
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        v23 = v3;
        v24 = 0LL;
        v25 = (_DWORD *)v32[1].Count;
        v26 = (4 * (unsigned __int64)(unsigned int)v8 + 3) >> 2;
        if ( v3 > (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v8) )
          v26 = 0LL;
        if ( v26 )
        {
          do
          {
            ++v24;
            *v25 ^= v23->PrivilegeCount;
            v23 = (struct _PRIVILEGE_SET *)((char *)v23 + 4);
            ++v25;
          }
          while ( v24 < v26 );
        }
        v6 = 0;
        goto LABEL_36;
      }
    }
LABEL_39:
    if ( v31 )
      ExReleaseRundownProtection_0(v32 + 2);
    goto LABEL_41;
  }
  v6 = -1073741670;
LABEL_41:
  SmcCacheDereference(a1, a2[1]);
  if ( v3 )
    MiDeleteSubsection(v3);
  return (unsigned int)v6;
}
