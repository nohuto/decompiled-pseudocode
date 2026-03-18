/*
 * XREFs of PfSetSuperfetchInformation @ 0x140454728
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     MmSetTrimWhileAgingState @ 0x140025D5C (MmSetTrimWhileAgingState.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PfTSetTraceWorkerPriority @ 0x1401489E0 (PfTSetTraceWorkerPriority.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1403EFAB0 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x1403FB0BC (PfpScenCtxServiceThreadSet.c)
 *     MmSetMinimumAgeRate @ 0x1404539CC (MmSetMinimumAgeRate.c)
 *     PfpRpControlRequest @ 0x140455108 (PfpRpControlRequest.c)
 *     PfpPrefetchRequest @ 0x1404558A8 (PfpPrefetchRequest.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 *     PfpLogEventRequest @ 0x1405666C4 (PfpLogEventRequest.c)
 *     PfGenerateTrace @ 0x1405668C4 (PfGenerateTrace.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     PfpSetParameter @ 0x1405B69C4 (PfpSetParameter.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1406AEF38 (PfpDeprioritizeOldPagesInWs.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, _OWORD *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // edi
  int v13; // ecx
  unsigned int v14; // ecx
  const void *v15; // rdi
  unsigned __int64 v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // edx
  ULONG64 v19; // rcx
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdi
  unsigned int v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // r8
  __int64 v33; // rdx
  _OWORD v34[2]; // [rsp+30h] [rbp-B8h] BYREF
  int v35; // [rsp+50h] [rbp-98h]
  __int64 v36; // [rsp+58h] [rbp-90h]
  int v37; // [rsp+60h] [rbp-88h]
  PVOID P; // [rsp+68h] [rbp-80h]
  __int64 v39; // [rsp+70h] [rbp-78h]
  int v40; // [rsp+78h] [rbp-70h]
  void *Src[2]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v42[4]; // [rsp+90h] [rbp-58h] BYREF
  int v43; // [rsp+94h] [rbp-54h]
  __int64 v44; // [rsp+98h] [rbp-50h]
  __int64 v45; // [rsp+A0h] [rbp-48h]
  _OWORD v46[2]; // [rsp+A8h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+F0h] [rbp+8h]

  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    v11 = -1073741790;
    goto LABEL_12;
  }
  if ( a3 != 32 )
  {
    v11 = -1073741820;
    goto LABEL_12;
  }
  memset(v34, 0, sizeof(v34));
  v34[0] = *a2;
  v34[1] = a2[1];
  if ( *(_QWORD *)&v34[0] != 0x6B7568430000002DLL )
    goto LABEL_94;
  if ( DWORD2(v34[0]) == 14 )
  {
    LOBYTE(v7) = a4;
    v10 = PfpRpControlRequest(v34, v7);
    goto LABEL_11;
  }
  if ( SDWORD2(v34[0]) > 14 )
  {
    if ( DWORD2(v34[0]) == 15 )
    {
      if ( DWORD2(v34[1]) != 4 )
        goto LABEL_104;
      if ( a4 && (v34[1] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v43 = **(_DWORD **)&v34[1];
      v35 = v43 + dword_1403534CC;
      v11 = PfpSetParameter(KeyHandle, 4u);
      if ( v11 >= 0 )
        dword_1403534CC = v35;
      goto LABEL_12;
    }
    if ( DWORD2(v34[0]) != 18 )
    {
      switch ( DWORD2(v34[0]) )
      {
        case 0x13:
          if ( DWORD2(v34[1]) == 12 )
          {
            v11 = 0;
            if ( a4 && (v34[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v39 = **(_QWORD **)&v34[1];
            v13 = *(_DWORD *)(*(_QWORD *)&v34[1] + 8LL);
            v40 = v13;
            if ( (_DWORD)v39 == 2 && SHIDWORD(v39) < 5 && (unsigned __int8)v40 <= 7u && BYTE1(v13) <= 7u && !HIWORD(v13) )
            {
              LOBYTE(v47) = BYTE4(v39);
              BYTE1(v47) = v40;
              HIWORD(v47) = BYTE1(v13);
              MmSetTrimWhileAgingState(v47);
              goto LABEL_12;
            }
            goto LABEL_94;
          }
          goto LABEL_104;
        case 0x16:
LABEL_10:
          LOBYTE(v7) = a4;
          v10 = PfpPfnPrioRequest(v34, v7, v42);
LABEL_11:
          v11 = v10;
          goto LABEL_12;
        case 0x19:
          if ( DWORD2(v34[1]) == 8 )
          {
            v11 = 0;
            if ( a4 && (v34[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v44 = **(_QWORD **)&v34[1];
            if ( (_DWORD)v44 == 1 )
            {
              MmSetMinimumAgeRate(HIDWORD(v44));
              goto LABEL_12;
            }
            goto LABEL_94;
          }
          goto LABEL_104;
        case 0x1A:
          LOBYTE(v7) = a4;
          v10 = PfpDeprioritizeOldPagesInWs(v34, v7);
          goto LABEL_11;
      }
      goto LABEL_111;
    }
    if ( DWORD2(v34[1]) != 12 )
      goto LABEL_104;
    if ( a4 && (v34[1] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v36 = **(_QWORD **)&v34[1];
    v20 = *(_DWORD *)(*(_QWORD *)&v34[1] + 8LL);
    v37 = v20;
    if ( (_DWORD)v36 == 2 && HIDWORD(v36) < 2 && (v20 & 0xFFFFFFFC) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((ULONG_PTR)&PfTGlobals, 0LL, 0LL, v9);
      v25 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&PfTGlobals, 0LL) )
        ExfAcquirePushLockExclusiveEx(&PfTGlobals, v22, (ULONG_PTR)&PfTGlobals, v24);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      if ( HIDWORD(v36) )
      {
        v27 = dword_140350208 & ~v37;
        PfTCleanup(&PfTGlobals);
        LOBYTE(v32) = 1;
        PfTInitialize(&PfTGlobals, v33, v32);
      }
      else
      {
        v27 = v37 & ~dword_140350208;
      }
      v11 = PfTStart(&PfTGlobals, v23, v27);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
      KeAbPostRelease((ULONG_PTR)&PfTGlobals);
      v30 = KeGetCurrentThread();
      v31 = v30->KernelApcDisable + 1;
      v30->KernelApcDisable = v31;
      if ( !v31
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
        && !v30->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      PfpScenCtxServiceThreadSet(qword_1403534D0, HIDWORD(v36) == 0, v28, v29);
      goto LABEL_12;
    }
LABEL_94:
    v11 = -1073741811;
    goto LABEL_12;
  }
  switch ( DWORD2(v34[0]) )
  {
    case 3:
      v14 = 16;
      if ( DWORD2(v34[1]) != 16 )
        goto LABEL_104;
      if ( a4 && (v34[1] & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Src = **(_OWORD **)&v34[1];
      v15 = Src[1];
      if ( !Src[1] )
        goto LABEL_94;
      v16 = LODWORD(Src[0]);
      v17 = LODWORD(Src[0]) >> 7;
      if ( !(LODWORD(Src[0]) >> 7) )
        goto LABEL_94;
      v18 = (__int64)Src[0] & 0x1F;
      if ( v18 >= 2 )
      {
        if ( v18 <= 3 )
        {
          v14 = 36;
          goto LABEL_54;
        }
        if ( v18 == 5 )
        {
          v14 = 12;
          goto LABEL_54;
        }
        if ( v18 == 27 )
        {
LABEL_54:
          if ( v17 >= v14 && v17 < 0xFF0 )
          {
            P = ExAllocatePoolWithTag(PagedPool, v17, 0x44456650u);
            if ( P )
            {
              if ( a4 )
              {
                if ( ((unsigned __int8)v15 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v19 = (ULONG64)v15 + (v16 >> 7);
                if ( v19 > MmUserProbeAddress || v19 < (unsigned __int64)v15 )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(P, v15, v16 >> 7);
              Src[1] = P;
              v10 = PfpLogEventRequest(Src);
              goto LABEL_11;
            }
            v11 = -1073741670;
            goto LABEL_12;
          }
          goto LABEL_94;
        }
      }
      v11 = -1073741637;
      goto LABEL_12;
    case 4:
      PfGenerateTrace(&Thread, 0LL);
      v11 = 0;
      goto LABEL_12;
    case 5:
      LOBYTE(v7) = a4;
      v10 = PfpPrefetchRequest(v34, v7);
      goto LABEL_11;
    case 7:
      goto LABEL_10;
    case 0xA:
      if ( DWORD2(v34[1]) == 32 )
      {
        if ( a4 && (v34[1] & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v46[0] = **(_OWORD **)&v34[1];
        v46[1] = *(_OWORD *)(*(_QWORD *)&v34[1] + 16LL);
        LOBYTE(v7) = a4;
        v10 = PfpProcessScenarioPhase(v46, v7);
        goto LABEL_11;
      }
      goto LABEL_104;
  }
  if ( DWORD2(v34[0]) != 11 )
  {
    if ( DWORD2(v34[0]) == 13 )
    {
      if ( DWORD2(v34[1]) == 8 )
      {
        if ( a4 && (v34[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v45 = **(_QWORD **)&v34[1];
        if ( (_WORD)v45 == 1 && (unsigned int)(HIDWORD(v45) - 1) <= 4 )
        {
          v10 = PfpScenCtxPrefetchStateSet(
                  (ULONG_PTR)qword_1403534D0,
                  SHIDWORD(v45),
                  (unsigned int)((v45 & 0x10000) != 0) + 1,
                  0LL);
          goto LABEL_11;
        }
        goto LABEL_94;
      }
LABEL_104:
      v11 = -1073741306;
      goto LABEL_12;
    }
LABEL_111:
    v11 = -1073741821;
    goto LABEL_12;
  }
  if ( DWORD2(v34[1]) != 4 )
    goto LABEL_104;
  if ( a4 && (v34[1] & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = -1073741431;
  if ( (int)PfTSetTraceWorkerPriority(**(_DWORD **)&v34[1], v7, v8, v9) <= 31 )
    v11 = 0;
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v11;
}
