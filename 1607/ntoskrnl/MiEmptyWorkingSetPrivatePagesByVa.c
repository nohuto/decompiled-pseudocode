/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x1401343CC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiEnumerateLeafPtes @ 0x1400B7AA0 (MiEnumerateLeafPtes.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // r14
  _QWORD *v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  int v7; // ecx
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  LONG *v14; // rbx
  KIRQL v15; // al
  KIRQL v16; // di
  __int64 v17; // rdx
  ULONG_PTR v19; // [rsp+30h] [rbp-E8h] BYREF
  KIRQL v20; // [rsp+38h] [rbp-E0h]
  int *v21; // [rsp+40h] [rbp-D8h]
  int v22; // [rsp+50h] [rbp-C8h] BYREF

  v22 = 0;
  v19 = a1;
  v21 = &v22;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    return 3221225738LL;
  }
  else
  {
    v4 = *(_QWORD **)(Process + 1568);
    v5 = 0LL;
    while ( v4 )
    {
      v5 = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
    }
    while ( v5 )
    {
      MiLockVad((__int64)CurrentThread, v5);
      v7 = *(_DWORD *)(v5 + 48);
      if ( (v7 & 0x80000) == 0 && ((1 << (v7 & 7)) & 0x55) != 0 && !MiVadMapsLargeImage(v5) )
      {
        SharedVm = MiGetSharedVm(a1);
        v9 = ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
        v20 = v9;
        v10 = v9;
        MiEnumerateLeafPtes(
          (((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32) | *(unsigned int *)(v5 + 24)) << 12,
          (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12,
          (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiEmptyWsPrivatePagesCallback,
          (__int64)&v19,
          0);
        LOBYTE(v11) = v10;
        MiUnlockWorkingSetExclusive(a1, v11);
      }
      MiUnlockVad((__int64)CurrentThread, v5);
      v12 = *(_QWORD **)(v5 + 8);
      v13 = v5;
      if ( v12 )
      {
        v6 = (_QWORD *)*v12;
        v5 = *(_QWORD *)(v5 + 8);
        while ( v6 )
        {
          v5 = (unsigned __int64)v6;
          v6 = (_QWORD *)*v6;
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 || *(_QWORD *)v5 == v13 )
            break;
          v13 = v5;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v14 = MiGetSharedVm(a1);
    v15 = ExAcquireSpinLockExclusive(v14);
    v14[1] = 0;
    v16 = v15;
    MiRemoveWorkingSetPages(a1, v15);
    LOBYTE(v17) = v16;
    MiUnlockWorkingSetExclusive(a1, v17);
    return 0LL;
  }
}
