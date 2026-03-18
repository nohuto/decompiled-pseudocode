/*
 * XREFs of PsQueryProcessCommandLine @ 0x1400F1FB4
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  ULONG64 v11; // rcx
  int v12; // ebx
  unsigned __int16 v13; // r12
  unsigned __int16 v14; // r15
  _QWORD *v15; // rcx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-B8h]
  int v19; // [rsp+48h] [rbp-B0h]
  int v20; // [rsp+50h] [rbp-A8h]
  __int64 v21; // [rsp+80h] [rbp-78h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v22; // [rsp+88h] [rbp-70h] BYREF

  v18 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  if ( v18 )
  {
    v7 = 0LL;
    v19 = 0;
    v20 = 0;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v22);
    v8 = 0LL;
    v9 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v9 )
      v8 = *v9;
    if ( v8 )
    {
      v15 = (_QWORD *)(*(unsigned int *)(v8 + 16) + 64LL);
      if ( (unsigned __int64)v15 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      v13 = *v15;
      v19 = *v15;
      v14 = HIWORD(v19);
      v7 = (unsigned int)HIDWORD(*v15);
      v20 = HIDWORD(*v15);
      v12 = 0;
    }
    else
    {
      v10 = *(_QWORD *)(BugCheckParameter1 + 1016);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32) + 112LL;
        if ( v11 >= MmUserProbeAddress )
          v11 = MmUserProbeAddress;
        v19 = *(_DWORD *)v11;
        v7 = *(_QWORD *)(v11 + 8);
        v20 = v7;
        v12 = 0;
      }
      else
      {
        v12 = -1073741275;
      }
      v13 = v19;
      v14 = HIWORD(v19);
    }
    KiUnstackDetachProcess(&v22, 0LL);
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
          v12 = MmCopyVirtualMemory(
                  BugCheckParameter1,
                  v20,
                  (int)KeGetCurrentThread()->ApcState.Process,
                  (int)a2 + 16,
                  HIWORD(v19),
                  a4,
                  (__int64)&v21);
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  return (unsigned int)v12;
}
