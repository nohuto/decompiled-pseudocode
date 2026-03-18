/*
 * XREFs of CommitReadOnlyMemory @ 0x1C006CCE0
 * Callers:
 *     UserCommitSharedMemory @ 0x1C006CB10 (UserCommitSharedMemory.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006CB80 (-HMGrowHandleTable@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommitReadOnlyMemory(__int64 a1, ULONG_PTR *a2, unsigned int a3, _DWORD *a4)
{
  __int64 CurrentProcess; // rbp
  int v9; // edi
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  PVOID v12; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF

  v15 = 0LL;
  BaseAddress = 0LL;
  v16 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v9 = MmMapViewOfSection(a1, CurrentProcess, &BaseAddress, 0LL, 4096LL, &v16, &v15, 2, 0x400000, 2);
  if ( v9 >= 0 )
  {
    v10 = (_DWORD)BaseAddress + a3;
    BaseAddress = (char *)BaseAddress + a3;
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 2u);
    v12 = BaseAddress;
    v9 = v11;
    if ( a4 )
      *a4 = (_DWORD)BaseAddress - v10;
    MmUnmapViewOfSection(CurrentProcess, v12);
  }
  return (unsigned int)v9;
}
