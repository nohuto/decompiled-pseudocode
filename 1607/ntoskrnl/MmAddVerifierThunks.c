/*
 * XREFs of MmAddVerifierThunks @ 0x1406587A4
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x14070F180 (VfThunkAddDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v5; // ebx
  ULONG v6; // edi
  _QWORD *v7; // r14
  struct _KTHREAD *Lock; // rsi
  PVOID *v9; // rax
  PVOID *v10; // r8
  char *v11; // r9
  __int64 v12; // rdx
  int v13; // ecx
  PVOID *v14; // rax
  char *v15; // rdx
  unsigned __int64 v16; // rax
  NTSTATUS v17; // ebx

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v5 = 0;
  v6 = ThunkBufferSize >> 4;
  v7 = ThunkBuffer;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741585;
  Lock = MmAcquireLoadLock();
  v9 = MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 1);
  v10 = v9;
  if ( v9 )
  {
    v11 = (char *)v9[6];
    v12 = *((unsigned int *)v9 + 16);
    v13 = 0;
    v14 = (PVOID *)PsLoadedModuleList;
    v15 = &v11[v12];
    while ( 1 )
    {
      if ( v14 == &PsLoadedModuleList )
        goto LABEL_11;
      if ( v10 == v14 )
        break;
      v14 = (PVOID *)*v14;
      if ( (unsigned int)++v13 >= 2 )
      {
LABEL_11:
        while ( *v7 >= (unsigned __int64)v11 )
        {
          if ( *v7 >= (unsigned __int64)v15 )
            break;
          v16 = v7[1];
          if ( v16 < (unsigned __int64)v11 || v16 >= (unsigned __int64)v15 )
            break;
          v7 += 2;
          if ( ++v5 >= v6 )
          {
            v17 = VfThunkAddDriverThunks(ThunkBuffer, ThunkBufferSize);
            goto LABEL_17;
          }
        }
        v17 = -1073741584;
LABEL_17:
        MmReleaseLoadLock((__int64)Lock);
        return v17;
      }
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741584;
}
