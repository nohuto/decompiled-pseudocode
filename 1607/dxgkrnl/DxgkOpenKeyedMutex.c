/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C0177180
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C006F948 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD *v12; // rax
  DXGGLOBAL *v13; // rcx
  _DWORD *v14; // r8
  int v15; // r14d
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  _BYTE v23[32]; // [rsp+90h] [rbp+90h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2052);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v12 = (_QWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v12;
    *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    *(_DWORD *)v3 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v15 = DXGGLOBAL::OpenKeyedMutex(
            v13,
            *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            v3 + 1,
            (unsigned int *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL),
            0LL,
            0);
    if ( v15 >= 0 )
    {
      v14 = (_DWORD *)(a1 + 4);
      if ( a1 + 4 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = *(_DWORD *)v3;
    }
    if ( v15 < 0 )
    {
      v22 = *(unsigned int *)v3;
      if ( (_DWORD)v22 )
        DXGKEYEDMUTEX::DestroyHandle(v22);
    }
    else
    {
      v16 = *(unsigned int *)v3;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
      v17 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *(_DWORD *)(ProcessDxgProcess + 224) )
      {
        v18 = *(_QWORD *)(ProcessDxgProcess + 208);
        v19 = ((unsigned int)v16 >> 26) & 0x30;
        if ( (((unsigned int)v16 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x30)
          && (*(_DWORD *)(v18 + 16 * v17 + 8) & 0xF) != 0 )
        {
          v20 = 2 * ((v16 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v18 + 8 * v20 + 8) & 0x1000) == 0 )
          {
            v21 = WdLogNewEntry5_WdAssertion(v19);
            *(_QWORD *)(v21 + 24) = 193LL;
            WdLogEvent5_WdAssertion(v21);
          }
          *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v20 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
      ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v22, &EventProfilerExit, (__int64)v14, 2052);
    return (unsigned int)v15;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v10, 2052);
    return 3221225485LL;
  }
}
