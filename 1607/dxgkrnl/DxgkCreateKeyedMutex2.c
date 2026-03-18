/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C006F040
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C006FA24 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessDxgProcess; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  _OWORD *v17; // rax
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v18; // r14d
  __int64 v19; // rax
  DXGGLOBAL *Global; // rax
  __int64 v21; // r8
  int KeyedMutex; // r14d
  _DWORD *v23; // r8
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  _BYTE v32[64]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2066);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    v14 = qword_1C0056840;
    v15 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v13, 2066);
    return 3221225485LL;
  }
  v17 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v17;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v17[1];
  v18.0 = *(struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
  if ( (v18.Value & 0xFFFFFFFE) != 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v10, v11);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    v15 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  *(_DWORD *)v3 = 0;
  *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  KeyedMutex = DXGGLOBAL::CreateKeyedMutex(
                 Global,
                 *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                 v3 + 1,
                 (unsigned int *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL),
                 *(void **)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                 *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                 v18);
  if ( KeyedMutex >= 0 )
  {
    v23 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = *(_DWORD *)v3;
    v21 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 32LL);
    *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v21;
    v24 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = v21;
  }
  if ( KeyedMutex < 0 )
  {
    v31 = *(unsigned int *)v3;
    if ( (_DWORD)v31 )
      DXGKEYEDMUTEX::DestroyHandle(v31);
  }
  else
  {
    v25 = *(unsigned int *)v3;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
    v26 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v27 = *(_QWORD *)(ProcessDxgProcess + 208);
      v28 = ((unsigned int)v25 >> 26) & 0x30;
      if ( (((unsigned int)v25 >> 26) & 0x30) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x30)
        && (*(_DWORD *)(v27 + 16 * v26 + 8) & 0xF) != 0 )
      {
        v29 = 2 * ((v25 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v27 + 8 * v29 + 8) & 0x1000) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v30 + 24) = 193LL;
          WdLogEvent5_WdAssertion(v30);
        }
        *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v29 + 8) &= ~0x1000u;
      }
    }
    *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
    ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v31, &EventProfilerExit, v21, 2066);
  return (unsigned int)KeyedMutex;
}
