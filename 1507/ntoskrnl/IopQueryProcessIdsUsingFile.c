/*
 * XREFs of IopQueryProcessIdsUsingFile @ 0x1406761D0
 * Callers:
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 *     MmIsFileMapped @ 0x1406A5898 (MmIsFileMapped.c)
 */

__int64 __fastcall IopQueryProcessIdsUsingFile(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v5; // rsi
  unsigned __int64 *v6; // r15
  unsigned int v7; // r14d
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  unsigned int *v12; // rax
  char v13; // r12
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  bool v17; // [rsp+30h] [rbp-48h]

  v5 = a2;
  v6 = (unsigned __int64 *)(a2 + 2);
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  *a2 = 0;
  v16 = a1;
  for ( i = 0LL; ; i = v11 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i, (__int64)a2, a3, (__int64)a4);
    v11 = NextProcess;
    if ( !NextProcess )
      break;
    v12 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v12 )
    {
      v17 = v11 == (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
      v13 = ExEnumHandleTable(
              v12,
              (__int64 (__fastcall *)(unsigned int *, __int64 *, __int64, __int64))IopIsFileOpenOrSection,
              (__int64)&v16,
              0LL);
      _m_prefetchw(&v11[92]);
      v14 = v11[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
      a2 = (_DWORD *)(v14 - 2);
      if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&v11[92], v14 - 2, v14) )
        ExfReleaseRundownProtection(v11 + 92);
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
        ++*v5;
        ++v6;
      }
      ++v8;
    }
  }
  *a4 = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
