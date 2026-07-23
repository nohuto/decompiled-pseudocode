/*
 * XREFs of PfSetSuperfetchInformation @ 0x1403EBF18
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     MmSetTrimWhileAgingState @ 0x1400B3134 (MmSetTrimWhileAgingState.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PfTSetTraceWorkerPriority @ 0x140114A84 (PfTSetTraceWorkerPriority.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1403D1F5C (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x1403D6A10 (PfpScenCtxServiceThreadSet.c)
 *     PfpRpControlRequest @ 0x1403ED51C (PfpRpControlRequest.c)
 *     PfpPrefetchRequest @ 0x1403EE3C8 (PfpPrefetchRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 *     MmSetMinimumAgeRate @ 0x1404D2F68 (MmSetMinimumAgeRate.c)
 *     PfpLogEventRequest @ 0x140530084 (PfpLogEventRequest.c)
 *     PfGenerateTrace @ 0x140530264 (PfGenerateTrace.c)
 *     PfpProcessScenarioPhase @ 0x140545928 (PfpProcessScenarioPhase.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     PfpSetParameter @ 0x1405721C8 (PfpSetParameter.c)
 *     PfTStart @ 0x1405729E0 (PfTStart.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140668C44 (PfpDeprioritizeOldPagesInWs.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, _OWORD *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ebx
  int v11; // ecx
  unsigned int v12; // ecx
  const void *v13; // rbx
  unsigned __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  _OWORD v22[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v23; // [rsp+50h] [rbp-A8h]
  PVOID P; // [rsp+58h] [rbp-A0h]
  __int64 v25; // [rsp+60h] [rbp-98h]
  int v26; // [rsp+68h] [rbp-90h]
  __int64 v27; // [rsp+70h] [rbp-88h]
  int v28; // [rsp+78h] [rbp-80h]
  void *Src[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v30[4]; // [rsp+90h] [rbp-68h] BYREF
  int v31; // [rsp+94h] [rbp-64h]
  __int64 v32; // [rsp+98h] [rbp-60h]
  __int64 v33; // [rsp+A0h] [rbp-58h]
  _OWORD v34[5]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v35; // [rsp+100h] [rbp+8h]

  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    v9 = -1073741790;
    goto LABEL_12;
  }
  if ( a3 != 32 )
  {
    v9 = -1073741820;
    goto LABEL_12;
  }
  memset(v22, 0, sizeof(v22));
  v22[0] = *a2;
  v22[1] = a2[1];
  if ( *(_QWORD *)&v22[0] != 0x6B7568430000002DLL )
    goto LABEL_111;
  if ( DWORD2(v22[0]) == 14 )
  {
    LOBYTE(v7) = a4;
    v8 = PfpRpControlRequest(v22, v7);
    goto LABEL_11;
  }
  if ( SDWORD2(v22[0]) > 14 )
  {
    if ( DWORD2(v22[0]) == 15 )
    {
      if ( DWORD2(v22[1]) != 4 )
        goto LABEL_96;
      if ( a4 && (v22[1] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v31 = **(_DWORD **)&v22[1];
      v23 = v31 + dword_14032859C;
      v9 = PfpSetParameter(KeyHandle, 4u);
      if ( v9 >= 0 )
        dword_14032859C = v23;
      goto LABEL_12;
    }
    if ( DWORD2(v22[0]) != 18 )
    {
      switch ( DWORD2(v22[0]) )
      {
        case 0x13:
          if ( DWORD2(v22[1]) == 12 )
          {
            v9 = 0;
            if ( a4 && (v22[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v27 = **(_QWORD **)&v22[1];
            v11 = *(_DWORD *)(*(_QWORD *)&v22[1] + 8LL);
            v28 = v11;
            if ( (_DWORD)v27 == 2 && SHIDWORD(v27) < 5 && (unsigned __int8)v28 <= 7u && BYTE1(v11) <= 7u && !HIWORD(v11) )
            {
              LOBYTE(v35) = BYTE4(v27);
              BYTE1(v35) = v28;
              HIWORD(v35) = BYTE1(v11);
              MmSetTrimWhileAgingState(v35);
              goto LABEL_12;
            }
            goto LABEL_111;
          }
          goto LABEL_96;
        case 0x16:
LABEL_10:
          LOBYTE(v7) = a4;
          v8 = PfpPfnPrioRequest(v22, v7, v30);
LABEL_11:
          v9 = v8;
          goto LABEL_12;
        case 0x19:
          if ( DWORD2(v22[1]) == 8 )
          {
            v9 = 0;
            if ( a4 && (v22[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v33 = **(_QWORD **)&v22[1];
            if ( (_DWORD)v33 == 1 )
            {
              MmSetMinimumAgeRate(HIDWORD(v33));
              goto LABEL_12;
            }
            goto LABEL_111;
          }
          goto LABEL_96;
        case 0x1A:
          LOBYTE(v7) = a4;
          v8 = PfpDeprioritizeOldPagesInWs(v22, v7);
          goto LABEL_11;
      }
LABEL_103:
      v9 = -1073741821;
      goto LABEL_12;
    }
    if ( DWORD2(v22[1]) != 12 )
      goto LABEL_96;
    if ( a4 && (v22[1] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = **(_QWORD **)&v22[1];
    v18 = *(_DWORD *)(*(_QWORD *)&v22[1] + 8LL);
    v26 = v18;
    if ( (_DWORD)v25 == 2 && HIDWORD(v25) < 2 && (v18 & 0xFFFFFFFC) == 0 )
    {
      FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&PfTGlobals);
      if ( HIDWORD(v25) )
      {
        v20 = dword_140328048 & ~v18;
        PfTCleanup(&PfTGlobals);
        PfTInitialize(&PfTGlobals, v21, 1LL);
      }
      else
      {
        v20 = v18 & ~dword_140328048;
      }
      v9 = PfTStart(&PfTGlobals, v19, v20);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
      KeAbPostRelease((ULONG_PTR)&PfTGlobals);
      KeLeaveCriticalRegion();
      PfpScenCtxServiceThreadSet(qword_1403285A0, HIDWORD(v25) == 0);
      goto LABEL_12;
    }
LABEL_111:
    v9 = -1073741811;
    goto LABEL_12;
  }
  switch ( DWORD2(v22[0]) )
  {
    case 3:
      v12 = 16;
      if ( DWORD2(v22[1]) != 16 )
        goto LABEL_96;
      if ( a4 && (v22[1] & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Src = **(_OWORD **)&v22[1];
      v13 = Src[1];
      if ( !Src[1] )
        goto LABEL_111;
      v14 = LODWORD(Src[0]);
      v15 = LODWORD(Src[0]) >> 7;
      if ( !(LODWORD(Src[0]) >> 7) )
        goto LABEL_111;
      v16 = (__int64)Src[0] & 0x1F;
      if ( v16 >= 2 )
      {
        if ( v16 <= 3 )
        {
          v12 = 36;
          goto LABEL_54;
        }
        if ( v16 == 5 )
        {
          v12 = 12;
          goto LABEL_54;
        }
        if ( v16 == 27 )
        {
LABEL_54:
          if ( v15 >= v12 && v15 < 0xFF0 )
          {
            P = ExAllocatePoolWithTag(PagedPool, v15, 0x44456650u);
            if ( P )
            {
              if ( a4 )
              {
                if ( ((unsigned __int8)v13 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v17 = (unsigned __int64)v13 + (v14 >> 7);
                if ( v17 > 0x7FFFFFFF0000LL || v17 < (unsigned __int64)v13 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(P, v13, v14 >> 7);
              Src[1] = P;
              v8 = PfpLogEventRequest(Src);
              goto LABEL_11;
            }
            v9 = -1073741670;
            goto LABEL_12;
          }
          goto LABEL_111;
        }
      }
      v9 = -1073741637;
      goto LABEL_12;
    case 4:
      PfGenerateTrace(&Thread, 0LL);
      v9 = 0;
      goto LABEL_12;
    case 5:
      LOBYTE(v7) = a4;
      v8 = PfpPrefetchRequest(v22, v7);
      goto LABEL_11;
    case 7:
      goto LABEL_10;
    case 0xA:
      if ( DWORD2(v22[1]) == 32 )
      {
        if ( a4 && (v22[1] & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v34[0] = **(_OWORD **)&v22[1];
        v34[1] = *(_OWORD *)(*(_QWORD *)&v22[1] + 16LL);
        LOBYTE(v7) = a4;
        v8 = PfpProcessScenarioPhase(v34, v7);
        goto LABEL_11;
      }
      goto LABEL_96;
  }
  if ( DWORD2(v22[0]) != 11 )
  {
    if ( DWORD2(v22[0]) == 13 )
    {
      if ( DWORD2(v22[1]) == 8 )
      {
        if ( a4 && (v22[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v32 = **(_QWORD **)&v22[1];
        if ( (_WORD)v32 == 1 && (unsigned int)(HIDWORD(v32) - 1) <= 4 )
        {
          v8 = PfpScenCtxPrefetchStateSet(
                 (ULONG_PTR)qword_1403285A0,
                 SHIDWORD(v32),
                 (unsigned int)((v32 & 0x10000) != 0) + 1,
                 0);
          goto LABEL_11;
        }
        goto LABEL_111;
      }
LABEL_96:
      v9 = -1073741306;
      goto LABEL_12;
    }
    goto LABEL_103;
  }
  if ( DWORD2(v22[1]) != 4 )
    goto LABEL_96;
  if ( a4 && (v22[1] & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = -1073741431;
  if ( (int)PfTSetTraceWorkerPriority(**(_DWORD **)&v22[1]) <= 31 )
    v9 = 0;
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
