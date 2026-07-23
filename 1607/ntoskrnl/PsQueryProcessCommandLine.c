/*
 * XREFs of PsQueryProcessCommandLine @ 0x1400B0074
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        struct _EX_RUNDOWN_REF *BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 *Count; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // edi
  unsigned __int16 v13; // r12
  unsigned __int16 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-B8h]
  int v19; // [rsp+48h] [rbp-B0h]
  __int64 v20; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v21[48]; // [rsp+88h] [rbp-70h] BYREF

  v18 = ExAcquireRundownProtection(BugCheckParameter1 + 92);
  if ( v18 )
  {
    v7 = 0LL;
    v19 = 0;
    KiStackAttachProcess((ULONG_PTR)BugCheckParameter1);
    v8 = 0LL;
    Count = (__int64 *)BugCheckParameter1[133].Count;
    if ( Count )
      v8 = *Count;
    if ( v8 )
    {
      v15 = *(unsigned int *)(v8 + 16) + 64LL;
      if ( v15 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      v13 = *(_QWORD *)v15;
      v19 = *(_QWORD *)v15;
      v14 = HIWORD(v19);
      v7 = (unsigned int)HIDWORD(*(_QWORD *)v15);
      v12 = 0;
    }
    else
    {
      v10 = BugCheckParameter1[127].Count;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32) + 112LL;
        if ( v11 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v19 = *(_DWORD *)v11;
        v7 = *(_QWORD *)(v11 + 8);
        v12 = 0;
      }
      else
      {
        v12 = -1073741275;
      }
      v13 = v19;
      v14 = HIWORD(v19);
    }
    KiUnstackDetachProcess(v21, 0LL);
    if ( v12 >= 0 )
    {
      if ( !v13 || v13 > v14 || (v19 & 1) != 0 || (v19 & 0x10000) != 0 || !v7 )
      {
        v12 = -1073741275;
      }
      else
      {
        v16 = v14 + 16;
        if ( a5 )
          *a5 = v16;
        if ( a3 < v16 )
        {
          v12 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v13;
          *(_WORD *)(a2 + 2) = v14;
          if ( v14 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v12 = MmCopyVirtualMemory((ULONG_PTR)BugCheckParameter1, HIWORD(v19), a4, (__int64)&v20);
          if ( v12 >= 0 )
            v12 = 0;
        }
      }
    }
  }
  else
  {
    v12 = -1073741558;
  }
  if ( v18 )
    ExReleaseRundownProtection(BugCheckParameter1 + 92);
  return (unsigned int)v12;
}
