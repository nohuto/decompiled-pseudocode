/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x140148040
 * Callers:
 *     PspSetCreateProcessNotifyRoutine @ 0x140575954 (PspSetCreateProcessNotifyRoutine.c)
 *     ObRegisterCallbacks @ 0x140579118 (ObRegisterCallbacks.c)
 *     MmVerifyCallbackFunction @ 0x1406597F4 (MmVerifyCallbackFunction.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140681DA4 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140014A30 (MiLookupDataTableEntry.c)
 *     MiReleaseResourceLite @ 0x140084C14 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x140086B00 (MiAcquireResourceSharedLite.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  PVOID *v6; // rax

  if ( a1 >= qword_140326910 && a1 < qword_140326910 + 0x8000000000LL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  MiAcquireResourceSharedLite((__int64)CurrentThread);
  v6 = MiLookupDataTableEntry(a1, 1);
  if ( v6 && (!a2 || ((_DWORD)v6[13] & a2) != 0) )
    v5 = 1;
  MiReleaseResourceLite((__int64)CurrentThread);
  return v5;
}
