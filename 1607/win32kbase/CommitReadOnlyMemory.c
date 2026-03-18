/*
 * XREFs of CommitReadOnlyMemory @ 0x1C0053F40
 * Callers:
 *     UserCommitSharedMemory @ 0x1C0053D70 (UserCommitSharedMemory.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0053DE0 (-HMGrowHandleTable@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommitReadOnlyMemory(__int64 a1, ULONG_PTR *a2, unsigned int a3, _DWORD *a4)
{
  __int64 CurrentProcess; // rbp
  NTSTATUS v9; // edi
  unsigned int v10; // ebx
  PVOID BaseAddress; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h] BYREF

  v13 = 0LL;
  BaseAddress = 0LL;
  v14 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  v9 = ((__int64 (__fastcall *)(__int64, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, int, int))MmMapViewOfSection)(
         a1,
         CurrentProcess,
         &BaseAddress,
         0LL,
         4096LL,
         &v14,
         &v13,
         2,
         0x400000,
         2);
  if ( v9 >= 0 )
  {
    v10 = (_DWORD)BaseAddress + a3;
    BaseAddress = (char *)BaseAddress + a3;
    v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 2u);
    if ( a4 )
      *a4 = (_DWORD)BaseAddress - v10;
    MmUnmapViewOfSection(CurrentProcess);
  }
  return (unsigned int)v9;
}
