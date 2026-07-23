/*
 * XREFs of PspChangeProcessExecutionState @ 0x140468830
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14006C228 (PspExecuteJobFreezeThawCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 *     PsSwapProcessWorkingSet @ 0x14067D570 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     MmInSwapWorkingSet @ 0x1400B5144 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(_KPROCESS *BugCheckParameter1)
{
  unsigned int v1; // r14d
  char v3; // r15
  unsigned __int32 DirectoryTableBase; // eax
  void *v5; // rbp
  int v6; // ebx
  unsigned int v7; // edi
  unsigned __int32 v9; // ett
  char v10; // r12
  char v11; // di
  unsigned int SessionId; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG_PTR SessionById; // rax
  int v16; // r13d
  unsigned __int32 v17; // edx
  bool v18; // zf
  signed __int32 v19; // eax
  int v20; // eax
  _BYTE v21[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v22[48]; // [rsp+50h] [rbp-68h] BYREF

  v1 = 0;
  v3 = 0;
  _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
  DirectoryTableBase = BugCheckParameter1[1].DirectoryTableBase;
  v5 = 0LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v6 = (DirectoryTableBase >> 28) & 3;
    v7 = (DirectoryTableBase >> 22) & 3;
    if ( v6 == v7 )
      break;
    v9 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v9 == DirectoryTableBase )
    {
LABEL_6:
      v10 = 0;
      v11 = v6 ^ v7;
      if ( !v3 )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v22);
        SessionId = MmGetSessionIdEx(BugCheckParameter1);
        if ( SessionId != -1 )
        {
          SessionById = MmGetSessionById(SessionId, v13, v14);
          v5 = (void *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById) < 0 )
            {
              ObfDereferenceObject(v5);
              v5 = 0LL;
            }
          }
        }
        v3 = 1;
      }
      if ( (v11 & 2) != 0 )
      {
        if ( (v6 & 2) != 0 )
          v10 = 1;
        else
          MmInSwapWorkingSet((char *)BugCheckParameter1);
      }
      if ( (v11 & 1) != 0 )
      {
        if ( (v6 & 1) != 0 )
          PsFreezeProcess((ULONG_PTR)BugCheckParameter1);
        else
          PsThawProcess((ULONG_PTR)BugCheckParameter1);
      }
      v7 = v6;
      v16 = v6;
      if ( v10 )
      {
        v20 = MmOutSwapWorkingSet(BugCheckParameter1, PspOutSwapSharedPages != 0);
        if ( v20 < 0 )
        {
          if ( v20 == -1073741671 )
            v1 = -1073741671;
          v7 = v6 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
      v17 = BugCheckParameter1[1].DirectoryTableBase;
      do
      {
        v6 = (v17 >> 28) & 3;
        if ( v6 != v16 && v6 != v7 )
          goto LABEL_6;
        v19 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                v17 & 0x8F3FFFFF | ((v7 | (v7 << 6)) << 22),
                v17);
        v18 = v17 == v19;
        v17 = v19;
      }
      while ( !v18 );
      if ( v5 )
      {
        MmDetachSession((__int64)v5, (__int64)v21);
        ObfDereferenceObject(v5);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v22, 0);
      return v1;
    }
  }
  return v1;
}
