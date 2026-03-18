/*
 * XREFs of MmCheckForSafeExecution @ 0x1406A57C0
 * Callers:
 *     KiEmulateAtlThunk @ 0x14020BE38 (KiEmulateAtlThunk.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MmValidateUserCallTarget @ 0x1406A9A54 (MmValidateUserCallTarget.c)
 */

bool __fastcall MmCheckForSafeExecution(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v7; // bl
  char v9; // di
  __int64 Process; // r14
  _QWORD *Address; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = a4;
  v9 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process, a3, a4);
  if ( !v7
    && ((Address = MiLocateAddress(a1), v12 = MiLocateAddress(a2), !Address)
     || !v12
     || Address == v12
     || (Address[6] & 7) == 2)
    || (v13 = MiLocateAddress(a3)) == 0LL
    || (v13[6] & 7) != 2 )
  {
    v9 = 0;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( v9 == 1 )
    return (unsigned int)MmValidateUserCallTarget(a3, 1LL) != 0;
  return v9;
}
