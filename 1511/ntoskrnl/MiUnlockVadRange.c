/*
 * XREFs of MiUnlockVadRange @ 0x1403E8634
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 Address; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 j; // rbx
  _QWORD *i; // rax
  ULONG_PTR v11; // rdi
  _QWORD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
  {
    v13 = *(_QWORD **)(a1 + 1552);
    Address = 0LL;
    while ( v13 )
    {
      Address = (unsigned __int64)v13;
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
      v7 = *(_QWORD *)(Address + 8);
      v8 = Address;
      if ( v7 )
      {
        for ( i = *(_QWORD **)v7; i; i = (_QWORD *)*i )
          v7 = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(Address + 16); ; j = *(_QWORD *)(v7 + 16) )
        {
          v7 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)v7 == v8 )
            break;
          v8 = v7;
        }
      }
      if ( a3 == 1 )
        break;
      v11 = Address + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Address + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Address + 40));
      KeAbPostRelease(v11);
      Address = v7;
      if ( !--a3 )
        return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    MiUnlockVad((__int64)CurrentThread, Address);
  }
  return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
