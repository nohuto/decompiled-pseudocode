/*
 * XREFs of IopQueryProcessIdsUsingFile @ 0x1406256BC
 * Callers:
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x14045E4D0 (ExEnumHandleTable.c)
 *     PsGetNextProcess @ 0x140508FFC (PsGetNextProcess.c)
 *     ObReferenceProcessHandleTable @ 0x14050D150 (ObReferenceProcessHandleTable.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 */

__int64 __fastcall IopQueryProcessIdsUsingFile(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned __int64 *v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  unsigned int *v12; // rax
  char v13; // r15
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  bool v16; // [rsp+28h] [rbp-40h]

  v6 = (unsigned __int64 *)(a2 + 2);
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  *a2 = 0;
  v15 = a1;
  for ( i = 0LL; ; i = v11 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v11 = NextProcess;
    if ( !NextProcess )
      break;
    v12 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v12 )
    {
      v16 = v11 == (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
      v13 = ExEnumHandleTable(
              v12,
              (__int64 (__fastcall *)(unsigned int *, signed __int64 *, __int64, __int64))IopIsFileOpenOrSection,
              (__int64)&v15,
              0LL);
      ExReleaseRundownProtection(v11 + 92);
    }
    else
    {
      v13 = 0;
    }
    if ( v13 || (unsigned int)MmIsFileMapped(v11, a1) )
    {
      if ( v8 < v7 )
      {
        *v6 = v11[93].Count;
        ++*a2;
        ++v6;
      }
      ++v8;
    }
  }
  *a4 = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
