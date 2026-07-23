/*
 * XREFs of LdrAddLoadAsDataTable @ 0x18002D150
 * Callers:
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlReAllocateHeap @ 0x180020D70 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrRemoveLoadAsDataTable @ 0x18002CDF0 (LdrRemoveLoadAsDataTable.c)
 *     LdrLogNewDataDllLoad @ 0x18002D37C (LdrLogNewDataDllLoad.c)
 *     LdrpInitMuiCrits @ 0x180030334 (LdrpInitMuiCrits.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl LdrAddLoadAsDataTable(
        PVOID Module,
        PWSTR FilePath,
        SIZE_T Size,
        HANDLE Handle,
        PACTIVATION_CONTEXT ActCtx)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  PVOID *v11; // r8
  PVOID v12; // rdi
  __int64 v13; // rax
  SIZE_T v14; // rbx
  PVOID v15; // rax
  __int64 v16; // rdx
  PVOID *v17; // rax
  PVOID *Heap; // rax

  v9 = 0;
  if ( !Module )
    return -1073741811;
  LdrpInitMuiCrits(&DataLoadLockCount, &LoadAsDataCrits);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v10 = 0;
  v11 = (PVOID *)LoadAsDataTable;
  while ( v10 < LoadAsDataTableCount )
  {
    if ( v11[6 * v10] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0LL, 0LL, 0);
      v11 = (PVOID *)LoadAsDataTable;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( LoadAsDataTableCount < (unsigned int)LoadAsDataTableBlockCount )
      goto LABEL_6;
    Heap = (PVOID *)RtlReAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      0,
                      LoadAsDataTable,
                      48LL * (unsigned int)(LoadAsDataTableBlockCount + 32));
    v11 = Heap;
    if ( !Heap )
      goto LABEL_18;
    LoadAsDataTable = Heap;
    LoadAsDataTableBlockCount += 32;
  }
  else
  {
    v17 = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
    v11 = v17;
    if ( !v17 )
      goto LABEL_18;
    LoadAsDataTable = v17;
    LoadAsDataTableBlockCount = 32;
  }
  v9 = 0;
LABEL_6:
  v12 = 0LL;
  if ( FilePath )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( FilePath[v13] );
    v14 = 2 * v13 + 2;
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
    v12 = v15;
    if ( v15 )
    {
      memmove(v15, FilePath, v14 - 2);
      v9 = 0;
      v11 = (PVOID *)LoadAsDataTable;
      goto LABEL_11;
    }
LABEL_18:
    v9 = -1073741801;
    goto LABEL_21;
  }
LABEL_11:
  v16 = 6LL * (unsigned int)LoadAsDataTableCount;
  v11[v16] = Module;
  v11[v16 + 1] = v12;
  v11[v16 + 2] = (PVOID)Size;
  v11[v16 + 3] = Handle;
  LODWORD(v11[v16 + 4]) = 1;
  v11[v16 + 5] = ActCtx;
  ++LoadAsDataTableCount;
LABEL_21:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v9 >= 0 )
  {
    if ( FilePath )
      LdrLogNewDataDllLoad(Module, FilePath);
  }
  return v9;
}
