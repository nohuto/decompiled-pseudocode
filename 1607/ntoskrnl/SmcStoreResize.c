/*
 * XREFs of SmcStoreResize @ 0x14069ABBC
 * Callers:
 *     SmcProcessResizeRequest @ 0x1406977FC (SmcProcessResizeRequest.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     SmStoreResize @ 0x140697378 (SmStoreResize.c)
 *     SmcCacheDereference @ 0x140699FE8 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14069A1EC (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x14069AA58 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x14069AA90 (SmcStorePlacementGet.c)
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
  _BYTE *v12; // rax
  _BYTE *v13; // r13
  struct _EX_RUNDOWN_REF *v14; // rax
  ULONG *v15; // r13
  struct _PRIVILEGE_SET *v16; // r9
  unsigned __int64 v17; // r10
  _DWORD *v18; // rdx
  unsigned __int64 v19; // r8
  struct _KTHREAD *v20; // rax
  _BYTE *v21; // rax
  _BYTE *v22; // rdi
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
    v12 = (_BYTE *)KeAbPreAcquire(Count + 160, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 160), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 160), v12, Count + 160);
    if ( v13 )
      v13[26] |= 1u;
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
        v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
        v22 = v21;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v11, v21, (ULONG_PTR)v11);
        if ( v22 )
          v22[26] |= 1u;
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
      ExReleaseRundownProtection(v32 + 2);
    goto LABEL_41;
  }
  v6 = -1073741670;
LABEL_41:
  SmcCacheDereference(a1, a2[1]);
  if ( v3 )
    MiDeleteSubsection(v3);
  return (unsigned int)v6;
}
