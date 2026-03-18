/*
 * XREFs of UserCommitSharedMemory @ 0x1C0053D70
 * Callers:
 *     <none>
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C0053F40 (CommitReadOnlyMemory.c)
 */

__int64 __fastcall UserCommitSharedMemory(__int64 a1, _QWORD *a2, ULONG_PTR *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rcx
  NTSTATUS v8; // r8d
  char *v10; // rdi
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process && *(_QWORD *)(ProcessWin32Process + 704) )
  {
    v10 = (char *)gpvSharedBase - *(_QWORD *)(PsGetCurrentProcessWin32Process(v7) + 704);
    BaseAddress = (PVOID)(*a2 - (_QWORD)v10);
    v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a3, 0x1000u, 2u);
    if ( v8 >= 0 )
      *a2 = (char *)BaseAddress + (_QWORD)v10;
  }
  else
  {
    v8 = CommitReadOnlyMemory(ghSectionShared, a3, (unsigned int)(*(_DWORD *)a2 - (_DWORD)gpvSharedBase), &v12);
    if ( v8 >= 0 )
      *a2 += v12;
  }
  return (unsigned int)v8;
}
