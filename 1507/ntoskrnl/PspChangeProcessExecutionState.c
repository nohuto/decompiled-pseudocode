/*
 * XREFs of PspChangeProcessExecutionState @ 0x14050637C
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1400D62F0 (PspExecuteJobFreezeThawCallback.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     PsSwapProcessWorkingSet @ 0x1406BFCFC (PsSwapProcessWorkingSet.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1400DE740 (MmInSwapWorkingSet.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsFreezeProcess @ 0x1404EB390 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x1404EBD04 (PsThawProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(_KPROCESS *Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  char v6; // r15
  unsigned __int32 DirectoryTableBase; // eax
  _KPROCESS *v8; // rbp
  int v9; // ebx
  unsigned int v10; // edi
  unsigned __int32 v12; // ett
  char v13; // r12
  char v14; // di
  int SessionId; // eax
  _KPROCESS *SessionById; // rax
  int v17; // r13d
  unsigned __int32 v18; // edx
  bool v19; // zf
  signed __int32 v20; // eax
  int v21; // eax
  _BYTE v22[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v23[48]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 0;
  v6 = 0;
  _m_prefetchw(&Object[1].DirectoryTableBase);
  DirectoryTableBase = Object[1].DirectoryTableBase;
  v8 = 0LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v9 = (DirectoryTableBase >> 28) & 3;
    v10 = (DirectoryTableBase >> 22) & 3;
    if ( v9 == v10 )
      break;
    v12 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&Object[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v12 == DirectoryTableBase )
    {
LABEL_6:
      v13 = 0;
      v14 = v9 ^ v10;
      if ( !v6 )
      {
        KiStackAttachProcess(Object, 0, (__int64)v23);
        SessionId = MmGetSessionIdEx(Object);
        if ( SessionId != -1 )
        {
          SessionById = (_KPROCESS *)MmGetSessionById(SessionId);
          v8 = SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById, (__int64)v22) < 0 )
            {
              ObfDereferenceObject(v8);
              v8 = 0LL;
            }
          }
        }
        v6 = 1;
      }
      if ( (v14 & 2) != 0 )
      {
        if ( (v9 & 2) != 0 )
          v13 = 1;
        else
          MmInSwapWorkingSet(Object);
      }
      if ( (v14 & 1) != 0 )
      {
        if ( (v9 & 1) != 0 )
          PsFreezeProcess((__int64)Object, 1);
        else
          PsThawProcess((__int64)Object, 1, a3, a4);
      }
      v10 = v9;
      v17 = v9;
      if ( v13 )
      {
        v21 = MmOutSwapWorkingSet((char *)Object, PspOutSwapSharedPages != 0);
        if ( v21 < 0 )
        {
          if ( v21 == -1073741671 )
            v4 = -1073741671;
          v10 = v9 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&Object[1].DirectoryTableBase);
      v18 = Object[1].DirectoryTableBase;
      do
      {
        v9 = (v18 >> 28) & 3;
        if ( v9 != v17 && v9 != v10 )
          goto LABEL_6;
        v20 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Object[1].DirectoryTableBase,
                v18 & 0x8F3FFFFF | ((v10 | (v10 << 6)) << 22),
                v18);
        v19 = v18 == v20;
        v18 = v20;
      }
      while ( !v19 );
      if ( v8 )
      {
        MmDetachSession((__int64)v8, (struct _KTHREAD *)v22);
        ObfDereferenceObject(v8);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
      return v4;
    }
  }
  return v4;
}
