/*
 * XREFs of PsQueryProcessCommandLine @ 0x14012F404
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  unsigned __int64 v7; // rtt
  BOOLEAN v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  ULONG64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 v14; // r12
  __int64 *v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 v17; // rtt
  int v19; // [rsp+44h] [rbp-D4h]
  int v20; // [rsp+48h] [rbp-D0h]
  int v21; // [rsp+50h] [rbp-C8h]
  __int64 v22[3]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v23; // [rsp+98h] [rbp-80h]
  _BYTE v24[48]; // [rsp+A8h] [rbp-70h] BYREF

  _m_prefetchw((const void *)(BugCheckParameter1 + 736));
  v7 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v7 + 2, v7) )
  {
    v8 = 1;
  }
  else
  {
    v8 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
    if ( !v8 )
    {
      v19 = -1073741558;
      goto LABEL_28;
    }
  }
  v9 = 0LL;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v24);
  v10 = *(_QWORD *)(BugCheckParameter1 + 1064);
  v22[2] = v10;
  if ( v10 )
  {
    v23 = *(unsigned int *)(v10 + 16);
    v15 = (__int64 *)(v23 + 64);
    if ( v23 + 64 >= MmUserProbeAddress )
      v15 = (__int64 *)MmUserProbeAddress;
    v13 = *v15;
    v20 = *v15;
    v14 = HIWORD(v20);
    v9 = HIDWORD(*v15);
    v21 = HIDWORD(*v15);
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter1 + 1016);
    v22[1] = v11;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 32) + 112LL;
      if ( v12 >= MmUserProbeAddress )
        v12 = MmUserProbeAddress;
      v20 = *(_DWORD *)v12;
      v9 = *(_QWORD *)(v12 + 8);
      v21 = v9;
    }
    else
    {
      v19 = -1073741275;
    }
    LOWORD(v13) = v20;
    v14 = HIWORD(v20);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v24, 0);
  if ( v19 >= 0 )
  {
    if ( !(_WORD)v13 || (unsigned __int16)v13 > v14 || (v20 & 1) != 0 || (v20 & 0x10000) != 0 || !v9 )
    {
      v19 = -1073741275;
    }
    else
    {
      v16 = v14 + 16;
      if ( a5 )
        *a5 = v16;
      if ( a3 < v16 )
      {
        v19 = -1073741820;
      }
      else
      {
        *(_WORD *)a2 = v13;
        *(_WORD *)(a2 + 2) = v14;
        if ( v14 )
          *(_QWORD *)(a2 + 8) = a2 + 16;
        else
          *(_QWORD *)(a2 + 8) = 0LL;
        v19 = MmCopyVirtualMemory(
                BugCheckParameter1,
                v21,
                (int)KeGetCurrentThread()->ApcState.Process,
                (int)a2 + 16,
                HIWORD(v20),
                a4,
                (__int64)v22);
        if ( v19 >= 0 )
          v19 = 0;
      }
    }
  }
LABEL_28:
  if ( v8 )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 736));
    v17 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v17 - 2, v17) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
  return (unsigned int)v19;
}
