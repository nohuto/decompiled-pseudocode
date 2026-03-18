/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C0176EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C006FA24 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  _OWORD *v12; // rax
  DXGGLOBAL *Global; // rax
  __int64 v14; // r8
  int KeyedMutex; // r14d
  _DWORD *v16; // r8
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE v25[48]; // [rsp+B0h] [rbp+B0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2051);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v12;
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    KeyedMutex = DXGGLOBAL::CreateKeyedMutex(
                   Global,
                   *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                   v3 + 1,
                   (unsigned int *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL),
                   0LL,
                   0,
                   0);
    if ( KeyedMutex >= 0 )
    {
      v16 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = *(_DWORD *)v3;
      v14 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 32LL);
      *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v14;
      v17 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = v14;
    }
    if ( KeyedMutex < 0 )
    {
      v24 = *(unsigned int *)v3;
      if ( (_DWORD)v24 )
        DXGKEYEDMUTEX::DestroyHandle(v24);
    }
    else
    {
      v18 = *(unsigned int *)v3;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
      v19 = ((unsigned int)v18 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 < *(_DWORD *)(ProcessDxgProcess + 224) )
      {
        v20 = *(_QWORD *)(ProcessDxgProcess + 208);
        v21 = ((unsigned int)v18 >> 26) & 0x30;
        if ( (((unsigned int)v18 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x30)
          && (*(_DWORD *)(v20 + 16 * v19 + 8) & 0xF) != 0 )
        {
          v22 = 2 * ((v18 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v20 + 8 * v22 + 8) & 0x1000) == 0 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v21);
            *(_QWORD *)(v23 + 24) = 193LL;
            WdLogEvent5_WdAssertion(v23);
          }
          *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v22 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
      ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v24, &EventProfilerExit, v14, 2051);
    return (unsigned int)KeyedMutex;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v10, 2051);
    return 3221225485LL;
  }
}
