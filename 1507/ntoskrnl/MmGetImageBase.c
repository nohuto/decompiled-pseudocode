/*
 * XREFs of MmGetImageBase @ 0x140466584
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14012BCFC (RtlpLookupUserFunctionTable.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140010030 (MiCheckForConflictingVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 */

__int64 __fastcall MmGetImageBase(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v8; // ebx
  int v9; // r14d
  __int64 Process; // rbp
  _QWORD *v11; // rax

  if ( a1 > (unsigned __int64)MmHighestUserAddress )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (HIDWORD(CurrentThread[1].Queue) & 3) == 0 )
  {
    v9 = 1;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process, (__int64)a3, a4);
  }
  v11 = MiCheckForConflictingVad(Process, a1, a1);
  if ( v11 )
  {
    if ( (v11[6] & 7) == 2 )
    {
      *a2 = (*((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32)) << 12;
      *a3 = ((*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32))
           - (*((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32))
           + 1) << 12;
    }
    else
    {
      v8 = -1073741751;
    }
  }
  else
  {
    v8 = -1073741800;
  }
  if ( v9 == 1 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v8;
}
