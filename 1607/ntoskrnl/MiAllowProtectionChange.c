/*
 * XREFs of MiAllowProtectionChange @ 0x1400B5348
 * Callers:
 *     MiResetVirtualMemory @ 0x1400ADFA4 (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiArbitraryCodeBlocked @ 0x1400B548C (MiArbitraryCodeBlocked.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v9; // esi
  __int64 v11; // r15
  unsigned int v12; // ebx
  LONG *SharedVm; // rdi
  KIRQL v14; // r12
  unsigned __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  LONG *v18; // rax
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v21[9]; // [rsp+60h] [rbp-48h] BYREF
  int v23; // [rsp+C8h] [rbp+20h] BYREF

  v9 = a4 & 2;
  if ( (a4 & 2) != 0 && (*(_BYTE *)(a3 + 48) & 0xC0) == 0xC0 && (*(_DWORD *)(a3 + 48) & 0x38) != 0 )
    return 3221225541LL;
  v11 = a1 + 1280;
  v12 = 0;
  v20 = 0LL;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v14 = ExAcquireSpinLockShared(SharedVm);
  if ( SharedVm[1] )
    _InterlockedExchange(SharedVm + 1, 0);
  v15 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      MiQueryAddressState(v15, v14, a3, a1, 0, &v20, &v23, (__int64 *)v21, &v19);
      v16 = v23;
      if ( v23 == -1 )
        v16 = 0;
      v23 = v16;
      v17 = v16 & 2;
      if ( !v17 )
      {
        if ( v9 )
          break;
      }
      if ( v17 && (a4 & 4) != 0 )
        break;
      v15 = v21[0];
      if ( v21[0] > a6 )
        goto LABEL_17;
    }
    v12 = MiArbitraryCodeBlocked(a2);
  }
LABEL_17:
  v18 = MiGetSharedVm(v11);
  ExReleaseSpinLockShared(v18, v14);
  return v12;
}
