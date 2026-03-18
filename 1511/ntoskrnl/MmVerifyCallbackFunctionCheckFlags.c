/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x1401CF300
 * Callers:
 *     MmVerifyCallbackFunction @ 0x1404E2C04 (MmVerifyCallbackFunction.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405306E4 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x14054433C (ObRegisterCallbacks.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x1406435C4 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiAcquireResourceSharedLite @ 0x1400EF804 (MiAcquireResourceSharedLite.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v6; // ebx
  PVOID *v7; // rax

  if ( a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  MiAcquireResourceSharedLite((__int64)CurrentThread);
  v7 = MiLookupDataTableEntry(a1, 1);
  if ( v7 && (!a2 || ((_DWORD)v7[13] & a2) != 0) )
    v6 = 1;
  MiReleaseResourceLite((__int64)CurrentThread);
  return v6;
}
