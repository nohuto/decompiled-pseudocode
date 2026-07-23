/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140203568
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020326C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140110A14 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ZwQueryVirtualMemory @ 0x140150A80 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x140153C40 (ZwUnlockVirtualMemory.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int16 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        unsigned int *a2,
        PVOID *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  struct VLOCK *v8; // r13
  unsigned int *v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // r14
  PVOID *PoolWithTag; // rax
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  PVOID *v19; // r9
  char *v20; // rcx
  PVOID *v21; // rdx
  __int64 v22; // r11
  unsigned int v23; // eax
  unsigned int v24; // ebp
  unsigned int v25; // r14d
  PVOID v26; // rcx
  _BYTE *v27; // rdx
  bool v28; // zf
  __int16 result; // ax
  __int64 v30; // r8
  __int64 v31; // r9
  int MemoryInformationLength; // [rsp+20h] [rbp-68h]
  PVOID BaseAddress; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h]
  ULONG_PTR NumberOfBytesToUnlock[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+B0h] [rbp+28h]

  v6 = a4;
  v8 = (struct VLOCK *)(a1 + 4488);
  v9 = a2;
  v10 = a1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v11 = a6;
  v12 = *(_DWORD *)(v10 + 4672);
  NumberOfBytesToUnlock[0] = v12;
  if ( a6 )
  {
    v14 = v12 >> 12;
    v15 = v6;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v6 * v14, 0x71576D73u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = 0;
      if ( (_DWORD)v6 )
      {
        v18 = v14;
        v19 = a3;
        do
        {
          v20 = (char *)*v19;
          BaseAddress = *v19;
          if ( v17 < v18 )
          {
            v21 = &PoolWithTag[2 * v17];
            v22 = v18 - v17;
            v17 = v18;
            do
            {
              *v21 = v20;
              v21 += 2;
              v20 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v22;
            }
            while ( v22 );
          }
          v18 += v14;
          ++v19;
          --v15;
        }
        while ( v15 );
        v11 = a6;
        PoolWithTag = (PVOID *)P;
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *PoolWithTag,
             MemoryWorkingSetExInformation,
             PoolWithTag,
             16 * v6 * v14,
             0LL) >= 0 )
      {
        v23 = 0;
        v24 = 0;
        v38 = 0;
        if ( (_DWORD)v6 )
        {
          v25 = v14;
          do
          {
            v26 = 0LL;
            BaseAddress = 0LL;
            if ( v24 < v25 )
            {
              v27 = P;
              do
              {
                if ( (v27[16 * v24 + 8] & 1) != 0 )
                {
                  v28 = (*v11)-- == 1LL;
                  v26 = *a3;
                  BaseAddress = *a3;
                  if ( v28 )
                    break;
                }
                ++v24;
              }
              while ( v24 < v25 );
              if ( v26 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
              v23 = v38;
            }
            if ( !*v11 )
              break;
            ++v23;
            v25 += v14;
            ++a3;
            v38 = v23;
          }
          while ( v23 < (unsigned int)v6 );
        }
      }
      else
      {
        *v11 = 0LL;
      }
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      *a6 = 0LL;
    }
    v10 = a1;
    v9 = a2;
  }
  else if ( (_DWORD)v6 )
  {
    v13 = v6;
    do
    {
      BaseAddress = *a3;
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
      ++a3;
      --v13;
    }
    while ( v13 );
  }
  result = StLockAcquireShared(v8);
  if ( (_DWORD)v6 )
  {
    do
    {
      result = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v10, *v9++, v30, v31, MemoryInformationLength, 2u);
      --v6;
    }
    while ( v6 );
  }
  return result;
}
