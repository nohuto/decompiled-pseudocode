/*
 * XREFs of PspChangeProcessExecutionState @ 0x1403EC57C
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1400F0194 (PspExecuteJobFreezeThawCallback.c)
 *     PspImplicitAssignProcessToJob @ 0x1403E8B34 (PspImplicitAssignProcessToJob.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     PsSwapProcessWorkingSet @ 0x14063EE24 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmInSwapWorkingSet @ 0x140001BC8 (MmInSwapWorkingSet.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsThawProcess @ 0x1404529E8 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140452D70 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
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
  int SessionId; // eax
  ULONG_PTR SessionById; // rax
  int v14; // r13d
  unsigned __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  int v18; // eax
  _BYTE v19[48]; // [rsp+20h] [rbp-98h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v20; // [rsp+50h] [rbp-68h] BYREF

  v1 = 0;
  v3 = 0;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  v5 = 0LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v6 = (DirectoryTableBase >> 28) & 3;
    v7 = (DirectoryTableBase >> 22) & 3;
    if ( v6 == v7 )
      break;
    v9 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v9 == DirectoryTableBase )
    {
LABEL_6:
      v10 = 0;
      v11 = v6 ^ v7;
      if ( !v3 )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)&v20);
        SessionId = MmGetSessionIdEx(Process);
        if ( SessionId != -1 )
        {
          SessionById = MmGetSessionById(SessionId);
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
          MmInSwapWorkingSet(Process);
      }
      if ( (v11 & 1) != 0 )
      {
        if ( (v6 & 1) != 0 )
          PsFreezeProcess(Process);
        else
          PsThawProcess(Process);
      }
      v7 = v6;
      v14 = v6;
      if ( v10 )
      {
        v18 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v18 < 0 )
        {
          if ( v18 == -1073741671 )
            v1 = -1073741671;
          v7 = v6 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Process[1].DirectoryTableBase);
      v15 = Process[1].DirectoryTableBase;
      do
      {
        v6 = (v15 >> 28) & 3;
        if ( v6 != v14 && v6 != v7 )
          goto LABEL_6;
        v17 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[1].DirectoryTableBase,
                v15 & 0x8F3FFFFF | ((v7 | (v7 << 6)) << 22),
                v15);
        v16 = v15 == v17;
        v15 = v17;
      }
      while ( !v16 );
      if ( v5 )
      {
        MmDetachSession((__int64)v5, (__int64)v19);
        ObfDereferenceObject(v5);
      }
      KiUnstackDetachProcess(&v20, 0LL);
      return v1;
    }
  }
  return v1;
}
