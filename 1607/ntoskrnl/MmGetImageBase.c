/*
 * XREFs of MmGetImageBase @ 0x1404B4CD8
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1400ABEF0 (RtlpLookupUserFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140013EB0 (MiCheckForConflictingVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 */

__int64 __fastcall MmGetImageBase(unsigned __int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 Process; // rbp
  __int64 **v10; // rax

  if ( a1 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( ((__int64)CurrentThread[1].Queue & 3) == 0 )
  {
    v8 = 1;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  }
  v10 = MiCheckForConflictingVad(Process, a1, a1);
  if ( v10 )
  {
    if ( ((_DWORD)v10[6] & 7) == 2 )
    {
      *a2 = (*((unsigned int *)v10 + 6) | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32)) << 12;
      *a3 = ((*((unsigned int *)v10 + 7) | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
           - (*((unsigned int *)v10 + 6) | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32))
           + 1) << 12;
    }
    else
    {
      v7 = -1073741751;
    }
  }
  else
  {
    v7 = -1073741800;
  }
  if ( v8 == 1 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v7;
}
