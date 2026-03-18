/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140517540 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiEnumerateLeafPtes @ 0x14005E200 (MiEnumerateLeafPtes.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(volatile LONG *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  KIRQL v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  KIRQL v12; // bl
  __int64 v13; // rdx
  __int64 v14; // r8
  volatile LONG *v15; // [rsp+20h] [rbp-E8h] BYREF
  KIRQL v16; // [rsp+28h] [rbp-E0h]
  int *v17; // [rsp+30h] [rbp-D8h]
  int v18; // [rsp+40h] [rbp-C8h] BYREF

  v18 = 0;
  v15 = BugCheckParameter2;
  v17 = &v18;
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
    v5 = *(_QWORD **)(Process + 1552);
    v6 = 0LL;
    while ( v5 )
    {
      v6 = (unsigned __int64)v5;
      v5 = (_QWORD *)*v5;
    }
    while ( v6 )
    {
      MiLockVad((__int64)CurrentThread, v6);
      if ( !MiVadDeleted(v6) && ((1 << (*(_BYTE *)(v6 + 48) & 7)) & 0x55) != 0 && !MiVadMapsLargeImage(v6) )
      {
        v16 = ExAcquireSpinLockExclusive(BugCheckParameter2);
        v8 = v16;
        MiEnumerateLeafPtes(
          (((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32) | *(unsigned int *)(v6 + 24)) << 12,
          (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12,
          (void (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiEmptyWsPrivatePagesCallback,
          (__int64)&v15);
        LOBYTE(v9) = v8;
        MiUnlockWorkingSetExclusive((__int64)BugCheckParameter2, v9, v10);
      }
      MiUnlockVad((__int64)CurrentThread, v6);
      v7 = *(_QWORD **)(v6 + 8);
      v11 = v6;
      if ( v7 )
      {
        do
        {
          v6 = (unsigned __int64)v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v11 )
            break;
          v11 = v6;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v12 = ExAcquireSpinLockExclusive(BugCheckParameter2);
    MiRemoveWorkingSetPages((ULONG_PTR)BugCheckParameter2);
    LOBYTE(v13) = v12;
    MiUnlockWorkingSetExclusive((__int64)BugCheckParameter2, v13, v14);
    return 0LL;
  }
}
