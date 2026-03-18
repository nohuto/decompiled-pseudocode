/*
 * XREFs of MiUnlockVadRange @ 0x1404B1B2C
 * Callers:
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MmAssignProcessToJob @ 0x14041AD30 (MmAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Address; // rdx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 j; // rbx
  _QWORD *i; // rax
  ULONG_PTR v12; // rdi
  _QWORD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
  {
    v13 = *(_QWORD **)(a1 + 1544);
    Address = 0LL;
    while ( v13 )
    {
      Address = v13;
      v13 = (_QWORD *)*v13;
    }
  }
  else
  {
    Address = MiLocateAddress(a2);
  }
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = Address[1];
      v8 = Address;
      if ( v7 )
      {
        for ( i = *(_QWORD **)v7; i; i = (_QWORD *)*i )
          v7 = (unsigned __int64)i;
      }
      else
      {
        for ( j = Address[2]; ; j = *(_QWORD *)(v7 + 16) )
        {
          v7 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD **)v7 == v8 )
            break;
          v8 = (_QWORD *)v7;
        }
      }
      if ( a3 == 1 )
        break;
      v12 = (ULONG_PTR)(Address + 5);
      if ( (_InterlockedExchangeAdd64(Address + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(Address + 5);
      KeAbPostRelease(v12);
      Address = (_QWORD *)v7;
      if ( !--a3 )
        return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    MiUnlockVad((__int64)CurrentThread, (__int64)Address);
  }
  return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
