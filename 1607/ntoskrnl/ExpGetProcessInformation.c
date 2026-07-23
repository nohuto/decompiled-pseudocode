/*
 * XREFs of ExpGetProcessInformation @ 0x1404502B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14000C818 (RtlQueryPackageIdentity.c)
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x1400131FC (PsIsProcessInSilo.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeQueryValuesThread @ 0x1400698D0 (KeQueryValuesThread.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     SmIsCompressionProcess @ 0x14009C73C (SmIsCompressionProcess.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ExpCheckFullProcessInformationAccess @ 0x14048DB7C (ExpCheckFullProcessInformationAccess.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404B5D6C (KeSynchronizeWithDynamicProcessors.c)
 *     ExIsRestrictedCaller @ 0x1404D3730 (ExIsRestrictedCaller.c)
 *     ExpCopyProcessInfo @ 0x1404EA2E0 (ExpCopyProcessInfo.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PsQueryProcessEnergyValues @ 0x1404F94C0 (PsQueryProcessEnergyValues.c)
 *     ExpQuitNextProcessThread @ 0x1406AC390 (ExpQuitNextProcessThread.c)
 */

__int64 __fastcall ExpGetProcessInformation(_DWORD *a1, __int64 a2, UINT *a3, _DWORD *a4, int a5)
{
  int v5; // r14d
  unsigned __int8 v6; // bl
  struct _KPROCESS *v7; // r13
  int SessionId; // eax
  int v9; // edi
  unsigned int v10; // r9d
  _DWORD *v11; // r12
  unsigned int v12; // ebx
  int v13; // esi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rax
  char *v20; // r15
  unsigned __int64 *p_Blink; // rdi
  struct _KTHREAD *CurrentThread; // r13
  PEPROCESS v23; // rcx
  unsigned __int64 *v24; // r14
  int v25; // r15d
  unsigned __int64 *v26; // rsi
  __int64 v27; // rbx
  unsigned __int64 *i; // rbx
  PEPROCESS v29; // rbx
  UINT v30; // eax
  unsigned __int64 v31; // rax
  struct _KTHREAD *v32; // r15
  PEPROCESS v33; // rcx
  unsigned __int64 *v34; // r12
  unsigned __int64 *v35; // rsi
  __int64 v36; // rbx
  unsigned __int64 *j; // rbx
  PEPROCESS v38; // rbx
  char *v39; // r14
  signed __int64 *v40; // rsi
  ULONG_PTR v41; // rdi
  _DWORD *v42; // rbx
  PEPROCESS v43; // rdi
  unsigned __int64 v44; // rax
  char *v45; // r13
  struct _KPROCESS *v46; // rcx
  const wchar_t **v47; // rcx
  int v48; // eax
  const wchar_t *v49; // r14
  char *PoolWithTag; // rax
  void *v51; // rsi
  const wchar_t *v52; // rcx
  __int64 v53; // r8
  char *v54; // r12
  _WORD *v55; // rdx
  unsigned __int64 v56; // r14
  int v57; // r15d
  UINT v58; // eax
  int *v59; // rdx
  struct _KPROCESS *v60; // rbx
  struct _KTHREAD *v61; // rsi
  __int64 v62; // rdi
  __int64 *v63; // rdi
  __int64 v64; // rcx
  __int16 v65; // ax
  _LIST_ENTRY *v66; // rdi
  unsigned int v67; // eax
  PACCESS_TOKEN v68; // rsi
  ULONG_PTR v69; // r12
  ULONG_PTR v70; // r13
  UINT v71; // r15d
  NTSTATUS v72; // eax
  unsigned int v73; // r9d
  char *v74; // r15
  _LIST_ENTRY *Flink; // rdi
  NTSTATUS v76; // eax
  NTSTATUS v77; // eax
  struct _KTHREAD *v78; // rbx
  __int64 result; // rax
  signed __int32 v80[8]; // [rsp+0h] [rbp-458h] BYREF
  int v81; // [rsp+40h] [rbp-418h]
  NTSTATUS v82; // [rsp+44h] [rbp-414h]
  UINT uAugend; // [rsp+48h] [rbp-410h] BYREF
  PVOID v84; // [rsp+50h] [rbp-408h]
  char v85; // [rsp+58h] [rbp-400h]
  unsigned __int8 v86; // [rsp+59h] [rbp-3FFh]
  int v87; // [rsp+5Ch] [rbp-3FCh]
  PEPROCESS Process; // [rsp+60h] [rbp-3F8h]
  PVOID Object; // [rsp+68h] [rbp-3F0h]
  int *v90; // [rsp+70h] [rbp-3E8h]
  void *v91; // [rsp+78h] [rbp-3E0h]
  char v92; // [rsp+82h] [rbp-3D6h]
  _DWORD *v93; // [rsp+90h] [rbp-3C8h]
  int v94; // [rsp+98h] [rbp-3C0h]
  unsigned int v95; // [rsp+9Ch] [rbp-3BCh]
  UINT *v96; // [rsp+A0h] [rbp-3B8h]
  ULONG v97; // [rsp+A8h] [rbp-3B0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-3A8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+B8h] [rbp-3A0h] BYREF
  void *v100; // [rsp+C0h] [rbp-398h]
  ULONG_PTR PackageSize; // [rsp+C8h] [rbp-390h] BYREF
  int v102; // [rsp+D0h] [rbp-388h]
  int v103; // [rsp+D8h] [rbp-380h] BYREF
  unsigned __int8 v104; // [rsp+DCh] [rbp-37Ch]
  unsigned __int8 v105; // [rsp+DDh] [rbp-37Bh]
  char v106; // [rsp+DEh] [rbp-37Ah]
  char v107; // [rsp+DFh] [rbp-379h]
  const wchar_t *v108; // [rsp+E0h] [rbp-378h]
  int v109; // [rsp+E8h] [rbp-370h]
  _WORD *v110; // [rsp+F0h] [rbp-368h]
  char *v111; // [rsp+F8h] [rbp-360h]
  __int64 *v112; // [rsp+100h] [rbp-358h]
  _DWORD *v113; // [rsp+108h] [rbp-350h]
  unsigned __int64 *v114; // [rsp+110h] [rbp-348h]
  unsigned __int64 v115; // [rsp+118h] [rbp-340h]
  unsigned __int64 *v116; // [rsp+120h] [rbp-338h]
  int v117; // [rsp+128h] [rbp-330h]
  int v118; // [rsp+130h] [rbp-328h]
  __int64 CurrentServerSilo; // [rsp+158h] [rbp-300h]
  struct _KPROCESS *v120; // [rsp+1A8h] [rbp-2B0h]
  HANDLE Handle[4]; // [rsp+1B0h] [rbp-2A8h] BYREF
  _QWORD v122[12]; // [rsp+1D0h] [rbp-288h] BYREF
  _BYTE Src[80]; // [rsp+230h] [rbp-228h] BYREF
  WCHAR AppId[72]; // [rsp+280h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+310h] [rbp-148h] BYREF
  UINT v126; // [rsp+468h] [rbp+10h]

  v126 = a2;
  v113 = a1;
  v96 = a3;
  AppIdSize = 130LL;
  v5 = 0;
  v87 = 0;
  PackageSize = 254LL;
  Process = 0LL;
  v81 = 0;
  Object = 0LL;
  uAugend = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 == 5 )
  {
    v86 = 0;
    v95 = 80;
  }
  else
  {
    v86 = 1;
    v95 = 136;
  }
  v109 = 488;
  v93 = a1;
  if ( (unsigned int)a2 < 0x1E8 )
  {
    v81 = -1073741820;
    if ( !a3 )
      return 3221225476LL;
  }
  v85 = 0;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( a5 != 148 || (result = ExpCheckFullProcessInformationAccess(v6), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v6, a2, a3, a4) )
      v85 = 1;
    v82 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = (struct _KPROCESS *)PsIdleProcess;
    v84 = PsIdleProcess;
LABEL_10:
    while ( 1 )
    {
      Process = v7;
LABEL_11:
      if ( !v7 )
        break;
      if ( (v7[1].DirectoryTableBase & 0x400000000LL) == 0
        || !v7->Header.SignalState
        || (v67 = v7[1].ThreadSeed[0], v7 = Process, v84 = Process, v67)
        || Process->ThreadListHead.Flink != &Process->ThreadListHead )
      {
        if ( !a4 || v7 != PsIdleProcess )
        {
          SessionId = MmGetSessionId(v7);
          v9 = SessionId;
          v117 = SessionId;
          if ( !a4 || SessionId == *a4 )
          {
            if ( PsIsProcessInSilo(v7, CurrentServerSilo) )
            {
              v11 = (_DWORD *)((char *)v113 + uAugend);
              v90 = v11;
              v93 = v11;
              v87 = v109;
              v12 = v109 + uAugend;
              if ( v109 + uAugend < uAugend )
              {
                v12 = v10;
                v13 = -1073741675;
              }
              else
              {
                v13 = 0;
              }
              uAugend = v12;
              v82 = v13;
              if ( v13 < 0 )
              {
                v81 = v13;
              }
              else
              {
                memset(v122, 0, 0x58uLL);
                if ( v12 > v126 )
                {
                  v81 = -1073741820;
                  if ( v96 )
                    goto LABEL_26;
                }
                else
                {
                  v18 = ExpCopyProcessInfo(v11, v7, v86, v122);
                  v13 = v18;
                  v82 = v18;
                  if ( v18 < 0 )
                  {
                    v81 = v18;
                  }
                  else
                  {
                    *(_QWORD *)v11 = 0LL;
                    v11[25] = v9;
                    *((_QWORD *)v11 + 8) = 0LL;
                    v11[14] = 0;
                    if ( v7 == PsIdleProcess )
                      *((_QWORD *)v11 + 12) = 0LL;
                    if ( v7 == (struct _KPROCESS *)PsSecureSystemProcess )
                    {
                      v19 = qword_140326AE0 << 12;
                      *((_QWORD *)v11 + 18) = qword_140326AE0 << 12;
                      *((_QWORD *)v11 + 1) = v19;
                    }
                    if ( v13 >= 0 )
                    {
LABEL_26:
                      v20 = (char *)(v11 + 64);
                      v91 = v11 + 64;
                      if ( v7 == PsIdleProcess )
                      {
                        Flink = v7->ThreadListHead.Flink;
                        if ( Flink == &v7->ThreadListHead )
                        {
                          p_Blink = 0LL;
                        }
                        else
                        {
                          p_Blink = (unsigned __int64 *)&Flink[-48].Blink;
                          KeSynchronizeWithDynamicProcessors(v15, v14, v16, v17);
                        }
                      }
                      else
                      {
                        p_Blink = 0LL;
                        v114 = 0LL;
                        CurrentThread = KeGetCurrentThread();
                        v23 = Process;
                        v24 = &Process[1].ActiveProcessors.Bitmap[19];
                        v25 = 0;
                        --CurrentThread->KernelApcDisable;
                        v26 = (unsigned __int64 *)&v23[1];
                        v27 = KeAbPreAcquire((ULONG_PTR)&v23[1], 0LL, 0);
                        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 17LL, 0LL) )
                          ExfAcquirePushLockSharedEx(v26, v27, (ULONG_PTR)v26);
                        if ( v27 )
                          *(_BYTE *)(v27 + 26) |= 1u;
                        for ( i = (unsigned __int64 *)*v24; i != v24; i = (unsigned __int64 *)*i )
                        {
                          p_Blink = i - 211;
                          v114 = i - 211;
                          if ( ObReferenceObjectSafeWithTag((__int64)(i - 211)) )
                          {
                            v25 = 1;
                            break;
                          }
                        }
                        v29 = Process;
                        v5 = 0;
                        if ( _InterlockedCompareExchange64(
                               (volatile signed __int64 *)&Process[1].Header.Lock,
                               0LL,
                               17LL) != 17 )
                          ExfReleasePushLockShared((signed __int64 *)&v29[1].Header.Lock);
                        KeAbPostRelease((ULONG_PTR)&v29[1]);
                        KeLeaveCriticalRegionThread((__int64)CurrentThread);
                        if ( !v25 )
                        {
                          p_Blink = 0LL;
                          v114 = 0LL;
                        }
                        v7 = Process;
                        v84 = Process;
                        v13 = v82;
                        v12 = uAugend;
                        v11 = v93;
                        v90 = v93;
                        v20 = (char *)v91;
                      }
                      Object = p_Blink;
                      while ( p_Blink )
                      {
                        v118 = *((_DWORD *)p_Blink + 1);
                        if ( !(_BYTE)v118 )
                        {
                          v15 = v95;
                          v30 = v95 + v12;
                          if ( v95 + v12 < v12 )
                          {
                            v30 = -1;
                            v13 = -1073741675;
                          }
                          else
                          {
                            v13 = 0;
                          }
                          uAugend = v30;
                          v12 = v30;
                          v82 = v13;
                          if ( v13 < 0 )
                          {
                            v81 = v13;
                            goto LABEL_204;
                          }
                          v87 += v95;
                          if ( v30 > v126 )
                          {
                            v81 = -1073741820;
                            if ( !v96 )
                              goto LABEL_204;
                          }
                          else
                          {
                            KeQueryValuesThread((__int64)p_Blink, (__int64)&v103);
                            v15 = v104;
                            if ( v104 == 4 )
                            {
                              v87 -= v95;
                              v12 -= v95;
                              uAugend = v12;
                            }
                            else
                            {
                              *((_DWORD *)v20 + 6) = v103;
                              *((_DWORD *)v20 + 17) = (unsigned __int8)v15;
                              *((_DWORD *)v20 + 18) = v105;
                              *((_DWORD *)v20 + 14) = v106;
                              *((_DWORD *)v20 + 15) = v107;
                              *(_QWORD *)v20 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
                              *((_QWORD *)v20 + 1) = KeMaximumIncrement
                                                   * (unsigned __int64)*((unsigned int *)p_Blink + 183);
                              *((_QWORD *)v20 + 2) = p_Blink[188];
                              *((_DWORD *)v20 + 16) = *((_DWORD *)p_Blink + 85);
                              *(_OWORD *)(v20 + 40) = *((_OWORD *)p_Blink + 99);
                              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
                              {
                                v15 = p_Blink[209];
                              }
                              else
                              {
                                if ( (p_Blink[217] & 8) != 0
                                  || (v15 = *((_QWORD *)Object + 193), _InterlockedOr(v80, 0), (p_Blink[217] & 8) != 0) )
                                {
                                  v15 = 0LL;
                                }
                                v7 = Process;
                                v84 = Process;
                                v13 = v82;
                                p_Blink = (unsigned __int64 *)Object;
                                v12 = uAugend;
                                v11 = v93;
                                v90 = v93;
                                v20 = (char *)v91;
                              }
                              v115 = v15;
                              if ( v85 && v15 > 0x7FFFFFFEFFFFLL )
                                *((_QWORD *)v20 + 4) = 0LL;
                              else
                                *((_QWORD *)v20 + 4) = v15;
                              if ( v86 )
                              {
                                if ( v85 )
                                {
                                  *((_QWORD *)v20 + 10) = 0LL;
                                  *((_QWORD *)v20 + 11) = 0LL;
                                }
                                else
                                {
                                  *((_QWORD *)v20 + 10) = p_Blink[7];
                                  v20 = (char *)v91;
                                  *((_QWORD *)v91 + 11) = p_Blink[6];
                                  v7 = Process;
                                  v84 = Process;
                                  v13 = v82;
                                  p_Blink = (unsigned __int64 *)Object;
                                  v12 = uAugend;
                                  v11 = v93;
                                  v90 = v93;
                                }
                                v31 = p_Blink[209];
                                v115 = v31;
                                if ( v85 && (v15 = 0x7FFFFFFEFFFFLL, v31 > 0x7FFFFFFEFFFFLL) )
                                  *((_QWORD *)v20 + 12) = 0LL;
                                else
                                  *((_QWORD *)v20 + 12) = v31;
                                *((_QWORD *)v20 + 13) = p_Blink[30];
                                *((_QWORD *)v20 + 14) = 0LL;
                                *((_QWORD *)v20 + 15) = 0LL;
                                *((_QWORD *)v20 + 16) = 0LL;
                              }
                              ++v11[1];
                              if ( v13 < 0 )
                              {
                                v81 = v13;
                                goto LABEL_204;
                              }
                              v91 = &v20[v95];
                            }
                          }
                        }
                        if ( v7 == PsIdleProcess )
                        {
                          v66 = (_LIST_ENTRY *)p_Blink[95];
                          if ( v66 == &v7->ThreadListHead )
                          {
                            p_Blink = 0LL;
                          }
                          else
                          {
                            p_Blink = (unsigned __int64 *)&v66[-48].Blink;
                            KeSynchronizeWithDynamicProcessors(v15, v14, v16, v17);
                          }
                        }
                        else
                        {
                          p_Blink = 0LL;
                          v116 = 0LL;
                          v32 = KeGetCurrentThread();
                          v33 = Process;
                          v34 = &Process[1].ActiveProcessors.Bitmap[19];
                          --v32->KernelApcDisable;
                          v35 = (unsigned __int64 *)&v33[1];
                          v36 = KeAbPreAcquire((ULONG_PTR)&v33[1], 0LL, 0);
                          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v35, 17LL, 0LL) )
                            ExfAcquirePushLockSharedEx(v35, v36, (ULONG_PTR)v35);
                          if ( v36 )
                            *(_BYTE *)(v36 + 26) |= 1u;
                          for ( j = (unsigned __int64 *)*((_QWORD *)Object + 211); j != v34; j = (unsigned __int64 *)*j )
                          {
                            p_Blink = j - 211;
                            v116 = j - 211;
                            if ( ObReferenceObjectSafeWithTag((__int64)(j - 211)) )
                            {
                              v5 = 1;
                              break;
                            }
                          }
                          v38 = Process;
                          if ( _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&Process[1].Header.Lock,
                                 0LL,
                                 17LL) != 17 )
                            ExfReleasePushLockShared((signed __int64 *)&v38[1].Header.Lock);
                          KeAbPostRelease((ULONG_PTR)&v38[1]);
                          KeLeaveCriticalRegionThread((__int64)v32);
                          v15 = (unsigned __int64)Object;
                          if ( Object )
                            ObfDereferenceObjectWithTag(Object, 0x6E457350u);
                          if ( !v5 )
                          {
                            p_Blink = 0LL;
                            v116 = 0LL;
                          }
                          v7 = Process;
                          v84 = Process;
                          v13 = v82;
                          v12 = uAugend;
                          v11 = v93;
                          v90 = v93;
                        }
                        Object = p_Blink;
                        v20 = (char *)v91;
                        v5 = 0;
                      }
                      v39 = v20;
                      v100 = v20;
                      v91 = v20 + 232;
                      if ( v81 >= 0 )
                      {
                        v40 = (signed __int64 *)&v7[1].Affinity.Bitmap[5];
                        v41 = ObFastReferenceObject((signed __int64 *)&v7[1].Affinity.Bitmap[5]);
                        if ( !v41 )
                        {
                          v78 = KeGetCurrentThread();
                          v7 = Process;
                          PspLockProcessShared((__int64)Process, (__int64)v78);
                          v41 = ObFastReferenceObjectLocked(v40);
                          PspUnlockProcessShared((__int64)v7, (__int64)v78);
                          v39 = (char *)v100;
                        }
                        v92 = SeSecurityAttributePresent(v41, (const UNICODE_STRING *)&PspSysAppIdClaim);
                        ObFastDereferenceObject(v40, v41);
                        *(_QWORD *)(v39 + 52) = 0LL;
                        *((_DWORD *)v39 + 52) = 0;
                        v42 = v100;
                        *((_QWORD *)v100 + 27) = *(_QWORD *)v7[2].ThreadSeed << 12;
                        *((_QWORD *)v42 + 5) = v122[4];
                        v42[12] = 0;
                        if ( v92 )
                          v42[12] = 1;
                        v43 = Process;
                        v44 = Process[2].ActiveProcessors.Bitmap[8];
                        if ( v44 )
                        {
                          *(_OWORD *)v42 = *(_OWORD *)v44;
                          *((_OWORD *)v42 + 1) = *(_OWORD *)(v44 + 16);
                          *((_QWORD *)v42 + 4) = *(_QWORD *)(v44 + 32);
                        }
                        else
                        {
                          memset(v42, 0, 0x28uLL);
                        }
                        if ( v43 == PsInitialSystemProcess )
                        {
                          v42[12] = v42[12] & 0xFFFFFFE1 | 2;
                        }
                        else if ( v43 == (PEPROCESS)PsSecureSystemProcess )
                        {
                          v42[12] = v42[12] & 0xFFFFFFE1 | 4;
                        }
                        else if ( SmIsCompressionProcess((__int64)v43) )
                        {
                          v42[12] = v42[12] & 0xFFFFFFE1 | 6;
                        }
                        else
                        {
                          v42[12] &= 0xFFFFFFE1;
                        }
                        PsQueryProcessEnergyValues(v43, v42 + 16);
                        v39 = (char *)v100;
                        if ( v43[1].Affinity.Bitmap[16] )
                          *((_DWORD *)v100 + 56) = *(_DWORD *)(v43[1].Affinity.Bitmap[16] + 1236);
                        else
                          *((_DWORD *)v100 + 56) = 0;
                        v13 = v82;
                        if ( v82 >= 0 )
                        {
                          v7 = Process;
                          v84 = Process;
                          p_Blink = (unsigned __int64 *)Object;
                          v12 = uAugend;
                          v90 = v93;
                          goto LABEL_110;
                        }
                        v81 = v82;
                        v46 = Process;
                        p_Blink = (unsigned __int64 *)Object;
LABEL_263:
                        if ( v46 && v46 != PsIdleProcess )
                          ObfDereferenceObjectWithTag(v46, 0x6E457350u);
                        if ( p_Blink )
                          ExpQuitNextProcessThread(p_Blink);
                        if ( P )
                          ExFreePoolWithTag(P, 0);
                        return (unsigned int)v81;
                      }
LABEL_110:
                      if ( a5 != 148 )
                      {
LABEL_111:
                        v45 = (char *)v91;
                        v46 = (struct _KPROCESS *)v84;
                        goto LABEL_112;
                      }
                      v68 = PsReferencePrimaryToken(v7);
                      Handle[2] = v68;
                      SeQueryUserSidToken((__int64)v68, Src, 0x44u, &v97);
                      PackageSize = 254LL;
                      AppIdSize = 130LL;
                      v82 = RtlQueryPackageIdentity(v68, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
                      if ( v82 >= 0 )
                      {
                        v70 = AppIdSize;
                        v69 = PackageSize;
                      }
                      else
                      {
                        v69 = 0LL;
                        PackageSize = 0LL;
                        v70 = 0LL;
                        AppIdSize = 0LL;
                      }
                      ObFastDereferenceObject((signed __int64 *)v84 + 107, (unsigned __int64)v68);
                      v71 = (v97 + 7) & 0xFFFFFFF8;
                      v94 = v71;
                      v72 = RtlUIntAdd(v12, v71, &uAugend);
                      v13 = v72;
                      v82 = v72;
                      if ( v72 < 0 )
                      {
                        v81 = v72;
                      }
                      else
                      {
                        v87 += v71;
                        v12 = uAugend;
                        if ( uAugend > v126 )
                        {
                          v81 = -1073741820;
                          if ( !v96 )
                            goto LABEL_204;
                          v74 = (char *)v91;
                        }
                        else
                        {
                          *((_DWORD *)v39 + 13) = 232;
                          memmove(v91, Src, v73);
                          v46 = (struct _KPROCESS *)v84;
                          if ( v13 < 0 )
                          {
                            v81 = v13;
                            goto LABEL_263;
                          }
                          v74 = (char *)v91 + v71;
                          v91 = v74;
                        }
                        if ( v69 )
                        {
                          if ( v69 > 0xFFFFFFFF )
                          {
                            v81 = -1073741820;
                          }
                          else
                          {
                            v94 = v69;
                            v76 = RtlUIntAdd(v12, v69, &uAugend);
                            v13 = v76;
                            v82 = v76;
                            if ( v76 >= 0 )
                            {
                              v87 += v69;
                              v12 = uAugend;
                              if ( uAugend > v126 )
                              {
                                v81 = -1073741820;
                                if ( !v96 )
                                  goto LABEL_204;
                              }
                              else
                              {
                                *((_DWORD *)v39 + 14) = (_DWORD)v74 - (_DWORD)v39;
                                memmove(v74, PackageFullName, (unsigned int)v69);
                                v46 = (struct _KPROCESS *)v84;
                                if ( v13 < 0 )
                                {
                                  v81 = v13;
                                  goto LABEL_263;
                                }
                                v74 += (unsigned int)v69;
                                v91 = v74;
                              }
                              goto LABEL_191;
                            }
                            v81 = v76;
                          }
                        }
                        else
                        {
LABEL_191:
                          if ( !v70 )
                            goto LABEL_111;
                          if ( v70 > 0xFFFFFFFF )
                          {
                            v81 = -1073741820;
                          }
                          else
                          {
                            v94 = v70;
                            v77 = RtlUIntAdd(v12, v70, &uAugend);
                            v13 = v77;
                            v82 = v77;
                            if ( v77 < 0 )
                            {
                              v81 = v77;
                            }
                            else
                            {
                              v87 += v70;
                              v12 = uAugend;
                              if ( uAugend > v126 )
                              {
                                v81 = -1073741820;
                                if ( !v96 )
                                  goto LABEL_204;
                                goto LABEL_111;
                              }
                              *((_DWORD *)v39 + 52) = (_DWORD)v74 - (_DWORD)v39;
                              memmove(v74, AppId, (unsigned int)v70);
                              v46 = (struct _KPROCESS *)v84;
                              if ( v13 < 0 )
                              {
                                v81 = v13;
                                goto LABEL_263;
                              }
                              v45 = (char *)v91 + (unsigned int)v70;
                              v91 = v45;
LABEL_112:
                              if ( v46 == PsIdleProcess )
                                goto LABEL_172;
                              if ( v46 == PsInitialSystemProcess )
                              {
                                v52 = (const wchar_t *)&ExpSystemProcessName;
                              }
                              else if ( v46 == (struct _KPROCESS *)PsSecureSystemProcess )
                              {
                                v52 = (const wchar_t *)&ExpSecureSystemProcessName;
                              }
                              else if ( SmIsCompressionProcess((__int64)v46) )
                              {
                                v52 = L"$&";
                              }
                              else
                              {
                                v48 = -1073741275;
                                v102 = -1073741275;
                                if ( v47[226] )
                                {
                                  if ( xmmword_1403013E0 )
                                  {
                                    v48 = xmmword_1403013E0(v47, &P);
                                    goto LABEL_122;
                                  }
                                }
                                else
                                {
                                  v49 = v47[141];
                                  if ( v49 )
                                  {
                                    PoolWithTag = (char *)ExAllocatePoolWithTag(
                                                            NonPagedPoolNx,
                                                            (unsigned int)v49[1] + 16,
                                                            0x6E497350u);
                                    v51 = PoolWithTag;
                                    if ( PoolWithTag )
                                    {
                                      *(_OWORD *)PoolWithTag = *(_OWORD *)v49;
                                      if ( *((_QWORD *)PoolWithTag + 1) )
                                      {
                                        *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                                        memmove(PoolWithTag + 16, *((const void **)v49 + 1), v49[1]);
                                      }
                                      P = v51;
                                      v48 = 0;
                                    }
                                    else
                                    {
                                      v48 = -1073741801;
                                    }
LABEL_122:
                                    v47 = (const wchar_t **)v84;
                                    v102 = v48;
                                  }
                                }
                                v82 = v48;
                                if ( v48 < 0 )
                                  v52 = v47[141];
                                else
                                  v52 = (const wchar_t *)P;
                              }
                              v108 = v52;
                              v53 = *v52;
                              v94 = v53;
                              v54 = v45;
                              v111 = v45;
                              v97 = v53;
                              v55 = (_WORD *)*((_QWORD *)v52 + 1);
                              v110 = v55;
                              if ( a5 != 148 && (_DWORD)v53 )
                              {
                                v55 += (unsigned __int64)(unsigned int)v53 >> 1;
                                v110 = v55;
                                while ( v55 != *((_WORD **)v52 + 1) )
                                {
                                  v110 = --v55;
                                  if ( *v55 == 92 )
                                  {
                                    v110 = ++v55;
                                    break;
                                  }
                                }
                                v53 -= 2 * (((__int64)v55 - *((_QWORD *)v52 + 1)) >> 1);
                                v97 = v53;
                              }
                              v56 = (unsigned int)v53;
                              v57 = (v53 + 9) & 0xFFFFFFF8;
                              v94 = v57;
                              v58 = v57 + v12;
                              if ( v57 + v12 < v12 )
                              {
                                v58 = -1;
                                v13 = -1073741675;
                              }
                              else
                              {
                                v13 = 0;
                              }
                              uAugend = v58;
                              v82 = v13;
                              if ( v13 >= 0 )
                              {
                                v87 += v57;
                                if ( v58 > v126 )
                                {
                                  v81 = -1073741820;
                                  if ( !v96 )
                                    goto LABEL_204;
                                }
                                else
                                {
                                  if ( (_DWORD)v53 )
                                  {
                                    memmove(v45, v55, (unsigned int)v53);
                                    v54 = &v45[2 * (v56 >> 1)];
                                    v111 = v54;
                                  }
                                  *(_WORD *)v54 = 0;
                                  v54 += 2;
                                  v111 = v54;
                                }
                                if ( P )
                                {
                                  ExFreePoolWithTag(P, 0);
                                  P = 0LL;
                                }
                                if ( v81 >= 0 )
                                {
                                  v59 = v90;
                                  *((_WORD *)v90 + 28) = (_WORD)v54 - (_WORD)v45 - 2;
                                  *((_WORD *)v59 + 29) = v57;
                                  *((_QWORD *)v59 + 8) = v45;
                                  v46 = (struct _KPROCESS *)v84;
                                  goto LABEL_143;
                                }
                                v46 = (struct _KPROCESS *)v84;
LABEL_172:
                                v59 = v90;
LABEL_143:
                                if ( v81 < 0 || (*v59 = v87, v13 >= 0) )
                                {
                                  v7 = (struct _KPROCESS *)v84;
                                  v5 = 0;
                                  goto LABEL_146;
                                }
                                v81 = v13;
                                goto LABEL_263;
                              }
                              v81 = v13;
                            }
                          }
                        }
                      }
LABEL_204:
                      v46 = (struct _KPROCESS *)v84;
                      goto LABEL_263;
                    }
                    v81 = v13;
                  }
                }
              }
LABEL_203:
              p_Blink = (unsigned __int64 *)Object;
              goto LABEL_204;
            }
          }
        }
      }
LABEL_146:
      if ( v7 == PsIdleProcess )
        v7 = 0LL;
      v60 = v7;
      v120 = v7;
      while ( 1 )
      {
        v7 = 0LL;
        v84 = 0LL;
        v112 = 0LL;
        v61 = KeGetCurrentThread();
        --v61->SpecialApcDisable;
        v62 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&PspActiveProcessLock, v62, (ULONG_PTR)&PspActiveProcessLock);
        if ( v62 )
          *(_BYTE *)(v62 + 26) |= 1u;
        if ( v60 )
          v63 = (__int64 *)v60[1].ProfileListHead.Flink;
        else
          v63 = (__int64 *)PsActiveProcessHead;
        while ( v63 != &PsActiveProcessHead )
        {
          v7 = (struct _KPROCESS *)(v63 - 94);
          v84 = v63 - 94;
          v112 = v63 - 94;
          if ( ObReferenceObjectSafeWithTag((__int64)(v63 - 94)) )
          {
            v5 = 1;
            break;
          }
          v63 = (__int64 *)*v63;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v65 = v61->SpecialApcDisable + 1;
        v61->SpecialApcDisable = v65;
        if ( !v65 && ($2B8565053CDC740D4E4887693DD8AC9E *)v61->ApcState.ApcListHead[0].Flink != &v61->152 )
          KiCheckForKernelApcDelivery(v64);
        if ( v60 )
          ObfDereferenceObjectWithTag(v60, 0x6E457350u);
        if ( v5 )
        {
          v5 = 0;
        }
        else
        {
          v5 = 0;
          v7 = 0LL;
          v84 = 0LL;
          v112 = 0LL;
        }
        v60 = v7;
        v120 = v7;
        if ( !v7 )
        {
          v7 = 0LL;
          v84 = 0LL;
          Process = 0LL;
          goto LABEL_11;
        }
        if ( (v7[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v85 )
            goto LABEL_10;
          if ( ObOpenObjectByPointer(v7, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, Handle) >= 0 )
            break;
        }
      }
      ObCloseHandle(Handle[0], 0);
    }
    if ( v81 >= 0 )
    {
      if ( v93 )
      {
        *v93 = 0;
        v46 = (struct _KPROCESS *)v84;
        if ( v82 < 0 )
        {
          v81 = v82;
          p_Blink = (unsigned __int64 *)Object;
          goto LABEL_263;
        }
      }
    }
    if ( v96 )
      *v96 = uAugend;
    goto LABEL_203;
  }
  return result;
}
