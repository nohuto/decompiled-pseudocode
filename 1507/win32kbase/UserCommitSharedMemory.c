/*
 * XREFs of UserCommitSharedMemory @ 0x1C0084300
 * Callers:
 *     <none>
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C0012E80 (CommitReadOnlyMemory.c)
 */

__int64 __fastcall UserCommitSharedMemory(__int64 a1, _QWORD *a2, ULONG_PTR *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r8d
  char *v13; // rdi
  __int64 AllocationType; // [rsp+20h] [rbp-28h]
  __int64 Protect; // [rsp+28h] [rbp-20h]
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process && *(_QWORD *)(ProcessWin32Process + 712) )
  {
    v13 = (char *)gpvSharedBase
        - *(_QWORD *)(PsGetCurrentProcessWin32Process(v8, v7, v9, v10, AllocationType, Protect) + 712);
    BaseAddress = (PVOID)(*a2 - (_QWORD)v13);
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a3, 0x1000u, 2u);
    if ( v11 >= 0 )
      *a2 = (char *)BaseAddress + (_QWORD)v13;
  }
  else
  {
    v11 = CommitReadOnlyMemory((__int64)ghSectionShared, a3, *(_DWORD *)a2 - (int)gpvSharedBase, &v17);
    if ( v11 >= 0 )
      *a2 += v17;
  }
  return (unsigned int)v11;
}
