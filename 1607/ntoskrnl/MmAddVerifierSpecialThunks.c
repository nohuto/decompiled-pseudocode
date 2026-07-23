/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x1406586AC
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x14070F200 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v7; // edi
  ULONG v8; // ebx
  struct _KTHREAD *Lock; // rsi
  PVOID *v10; // rax
  PVOID *v11; // r9
  NTSTATUS v12; // ebx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v7 = 0;
  v8 = ThunkBufferSize >> 4;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741583;
  Lock = MmAcquireLoadLock();
  v10 = MiLookupDataTableEntry(EntryRoutine, 1);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741585;
LABEL_15:
    MmReleaseLoadLock((__int64)Lock);
    return v12;
  }
  v13 = (unsigned __int64)v10[6];
  v14 = v13 + *((unsigned int *)v10 + 16);
  if ( retaddr >= v13 && retaddr < v14 )
  {
    v15 = (unsigned __int64 *)((char *)ThunkBuffer + 8);
    while ( *v15 >= v13 && *v15 < v14 )
    {
      v15 += 2;
      if ( ++v7 >= v8 )
      {
        v12 = VfThunkAddSpecialDriverThunks(EntryRoutine, ThunkBuffer, ThunkBufferSize, v11);
        goto LABEL_15;
      }
    }
    v12 = -1073741584;
    goto LABEL_15;
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741585;
}
