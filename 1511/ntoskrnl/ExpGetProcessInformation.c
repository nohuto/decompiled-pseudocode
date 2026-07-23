/*
 * XREFs of ExpGetProcessInformation @ 0x140409F60
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     RtlUIntAdd @ 0x14008FE90 (RtlUIntAdd.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14009C438 (AuthzBasepSecurityAttributePresent.c)
 *     PsIsProcessInSilo @ 0x14009E1A0 (PsIsProcessInSilo.c)
 *     KeQueryValuesThread @ 0x1400C72B0 (KeQueryValuesThread.c)
 *     RtlQueryPackageIdentity @ 0x1400FB154 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpCheckFullProcessInformationAccess @ 0x1403BF500 (ExpCheckFullProcessInformationAccess.c)
 *     ExpCopyProcessInfo @ 0x1403EBED0 (ExpCopyProcessInfo.c)
 *     PsQueryProcessEnergyValues @ 0x1403F1B44 (PsQueryProcessEnergyValues.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404AE288 (KeSynchronizeWithDynamicProcessors.c)
 *     ExIsRestrictedCaller @ 0x1404C69D4 (ExIsRestrictedCaller.c)
 *     PsGetCurrentSilo @ 0x1404D436C (PsGetCurrentSilo.c)
 *     ExpQuitNextProcessThread @ 0x14066B9E0 (ExpQuitNextProcessThread.c)
 */

__int64 __fastcall ExpGetProcessInformation(__int64 a1, UINT a2, UINT *a3, _DWORD *a4, int a5)
{
  unsigned __int8 v5; // bl
  PEPROCESS v6; // r14
  int SessionId; // eax
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // esi
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  char *v14; // r15
  char *p_Blink; // rdi
  struct _KTHREAD *CurrentThread; // r13
  char *v17; // rcx
  _QWORD **v18; // rsi
  int v19; // r15d
  unsigned __int64 *v20; // r14
  __int64 v21; // rbx
  _QWORD *i; // rbx
  signed __int64 *v23; // rbx
  unsigned int v24; // r12d
  UINT v25; // eax
  unsigned __int8 v26; // cl
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  struct _KTHREAD *v29; // r15
  char *v30; // rcx
  char *v31; // r12
  int v32; // r14d
  unsigned __int64 *v33; // rsi
  __int64 v34; // rbx
  char *j; // rbx
  signed __int64 *v36; // rbx
  _DWORD *v37; // r13
  char *v38; // r15
  signed __int64 *v39; // r14
  ULONG_PTR v40; // rsi
  struct _KTHREAD *v41; // rcx
  bool v42; // bl
  _DWORD *v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // r13
  char *PoolWithTag; // rax
  void *v47; // rsi
  int v48; // eax
  unsigned __int16 *v49; // rcx
  __int64 v50; // r8
  char *v51; // r9
  _WORD *v52; // rdx
  unsigned __int64 v53; // r13
  int v54; // r12d
  UINT v55; // eax
  __int64 v56; // rax
  _QWORD *p_Lock; // rbx
  struct _KTHREAD *v58; // rsi
  int v59; // r15d
  __int64 v60; // rdi
  __int64 *v61; // rdi
  __int64 v62; // rcx
  __int16 v63; // ax
  _LIST_ENTRY *Flink; // rdi
  unsigned int v65; // eax
  PACCESS_TOKEN v66; // rsi
  UINT v67; // r12d
  NTSTATUS v68; // eax
  unsigned int v69; // r9d
  unsigned int v70; // r12d
  unsigned int v71; // r12d
  NTSTATUS v72; // eax
  NTSTATUS v73; // eax
  struct _KTHREAD *v74; // rdi
  PVOID v75; // rbx
  __int64 result; // rax
  signed __int32 v77[8]; // [rsp+0h] [rbp-458h] BYREF
  int v78; // [rsp+40h] [rbp-418h]
  NTSTATUS v79; // [rsp+44h] [rbp-414h]
  UINT uAugend; // [rsp+48h] [rbp-410h] BYREF
  char v81; // [rsp+4Ch] [rbp-40Ch]
  char v82; // [rsp+4Dh] [rbp-40Bh]
  int v83; // [rsp+50h] [rbp-408h]
  PVOID v84; // [rsp+58h] [rbp-400h]
  PVOID Object; // [rsp+60h] [rbp-3F8h]
  void *v86; // [rsp+68h] [rbp-3F0h]
  int v87; // [rsp+7Ch] [rbp-3DCh]
  char *v88; // [rsp+80h] [rbp-3D8h]
  __int64 v89; // [rsp+88h] [rbp-3D0h]
  UINT *v90; // [rsp+90h] [rbp-3C8h]
  int v91; // [rsp+98h] [rbp-3C0h]
  PVOID P; // [rsp+A0h] [rbp-3B8h] BYREF
  bool v93; // [rsp+A8h] [rbp-3B0h]
  int v94; // [rsp+ACh] [rbp-3ACh]
  int v95; // [rsp+B0h] [rbp-3A8h] BYREF
  unsigned __int8 v96; // [rsp+B4h] [rbp-3A4h]
  unsigned __int8 v97; // [rsp+B5h] [rbp-3A3h]
  char v98; // [rsp+B6h] [rbp-3A2h]
  char v99; // [rsp+B7h] [rbp-3A1h]
  ULONG_PTR PackageSize; // [rsp+B8h] [rbp-3A0h] BYREF
  ULONG_PTR AppIdSize; // [rsp+C0h] [rbp-398h] BYREF
  void *v102; // [rsp+C8h] [rbp-390h]
  char *v103; // [rsp+D0h] [rbp-388h]
  unsigned __int16 *v104; // [rsp+D8h] [rbp-380h]
  int v105; // [rsp+E0h] [rbp-378h]
  _WORD *v106; // [rsp+E8h] [rbp-370h]
  unsigned __int64 v107; // [rsp+F0h] [rbp-368h]
  _QWORD *v108; // [rsp+F8h] [rbp-360h]
  PVOID CurrentSilo; // [rsp+100h] [rbp-358h]
  char *v110; // [rsp+108h] [rbp-350h]
  __int64 v111; // [rsp+110h] [rbp-348h]
  __int64 *v112; // [rsp+118h] [rbp-340h]
  PEPROCESS v113; // [rsp+188h] [rbp-2D0h]
  HANDLE Handle; // [rsp+198h] [rbp-2C0h] BYREF
  int v115; // [rsp+1A0h] [rbp-2B8h]
  int v116; // [rsp+1B4h] [rbp-2A4h]
  PACCESS_TOKEN v117; // [rsp+1D0h] [rbp-288h]
  _QWORD v118[10]; // [rsp+1E0h] [rbp-278h] BYREF
  _BYTE Src[80]; // [rsp+230h] [rbp-228h] BYREF
  WCHAR AppId[72]; // [rsp+280h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+310h] [rbp-148h] BYREF

  v111 = a1;
  v90 = a3;
  AppIdSize = 130LL;
  v83 = 0;
  PackageSize = 254LL;
  v84 = 0LL;
  v78 = 0;
  Object = 0LL;
  uAugend = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 == 5 )
  {
    v82 = 0;
    v91 = 80;
  }
  else
  {
    v82 = 1;
    v91 = 136;
  }
  v105 = 480;
  v89 = a1;
  if ( a2 < 0x1E0 )
  {
    v78 = -1073741820;
    if ( !a3 )
      return 3221225476LL;
  }
  v81 = 0;
  v5 = KeGetCurrentThread()->gap0[10];
  if ( a5 != 148 || (result = ExpCheckFullProcessInformationAccess(v5), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v5) )
      v81 = 1;
    v79 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentSilo = (PVOID)PsGetCurrentSilo();
    v6 = (PEPROCESS)PsIdleProcess;
    while ( 1 )
    {
LABEL_10:
      v84 = v6;
LABEL_11:
      if ( !v6 )
      {
        if ( v78 >= 0 && v89 && (*(_DWORD *)v89 = 0, v79 < 0) )
        {
          v78 = v79;
        }
        else if ( v90 )
        {
          *v90 = uAugend;
        }
        goto LABEL_180;
      }
      if ( (v6[1].DirectoryTableBase & 0x400000000LL) == 0
        || !v6->Header.SignalState
        || (v65 = v6[1].ThreadSeed[0], v6 = (PEPROCESS)v84, v65)
        || *((PVOID *)v84 + 6) != (char *)v84 + 48 )
      {
        if ( !a4 || v6 != PsIdleProcess )
        {
          SessionId = MmGetSessionId(v6);
          v8 = SessionId;
          v116 = SessionId;
          if ( !a4 || SessionId == *a4 )
          {
            if ( PsIsProcessInSilo(v6, (__int64)CurrentSilo) )
            {
              v89 = v111 + uAugend;
              v83 = v105;
              v9 = v105 + uAugend;
              if ( v105 + uAugend < uAugend )
              {
                v9 = -1;
                v10 = -1073741675;
              }
              else
              {
                v10 = 0;
              }
              uAugend = v9;
              v79 = v10;
              if ( v10 < 0 )
              {
                v78 = v10;
LABEL_180:
                p_Blink = (char *)Object;
                goto LABEL_238;
              }
              memset(v118, 0, sizeof(v118));
              if ( v9 > a2 )
              {
                v78 = -1073741820;
                if ( !v90 )
                  goto LABEL_180;
              }
              else
              {
                v12 = ExpCopyProcessInfo(v89, (__int64)v6, v82, v118);
                v10 = v12;
                v79 = v12;
                if ( v12 < 0 )
                {
                  v78 = v12;
                  goto LABEL_180;
                }
                v13 = v89;
                *(_QWORD *)v89 = 0LL;
                *(_DWORD *)(v13 + 100) = v8;
                *(_QWORD *)(v13 + 64) = 0LL;
                *(_DWORD *)(v13 + 56) = 0;
                if ( v6 == PsIdleProcess )
                  *(_QWORD *)(v13 + 96) = 0LL;
                if ( v10 < 0 )
                {
                  v78 = v10;
                  goto LABEL_180;
                }
              }
              v14 = (char *)(v89 + 256);
              v86 = (void *)(v89 + 256);
              if ( v6 != PsIdleProcess )
              {
                p_Blink = 0LL;
                v108 = 0LL;
                CurrentThread = KeGetCurrentThread();
                v17 = (char *)v84;
                v18 = (_QWORD **)((char *)v84 + 1160);
                v19 = 0;
                --CurrentThread->KernelApcDisable;
                v20 = (unsigned __int64 *)(v17 + 728);
                v21 = KeAbPreAcquire((ULONG_PTR)(v17 + 728), 0LL, 0LL);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
                if ( v21 )
                  *(_BYTE *)(v21 + 26) |= 1u;
                for ( i = *v18; ; i = (_QWORD *)*i )
                {
                  if ( i == v18 )
                    goto LABEL_33;
                  p_Blink = (char *)(i - 210);
                  v108 = i - 210;
                  if ( ObReferenceObjectSafeWithTag((__int64)(i - 210)) )
                    break;
                }
                v19 = 1;
LABEL_33:
                v23 = (signed __int64 *)v84;
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v84 + 91, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v23 + 91);
                KeAbPostRelease((ULONG_PTR)(v23 + 91));
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
                if ( !v19 )
                {
                  p_Blink = 0LL;
                  v108 = 0LL;
                }
                v6 = (PEPROCESS)v84;
                v10 = v79;
                v9 = uAugend;
                v14 = (char *)v86;
                goto LABEL_38;
              }
              Flink = v6->ThreadListHead.Flink;
              if ( Flink == &v6->ThreadListHead )
              {
                p_Blink = 0LL;
                goto LABEL_38;
              }
LABEL_159:
              p_Blink = (char *)&Flink[-48].Blink;
              KeSynchronizeWithDynamicProcessors();
LABEL_38:
              while ( 1 )
              {
                Object = p_Blink;
                if ( !p_Blink )
                  break;
                v115 = *((_DWORD *)p_Blink + 1);
                if ( !(_BYTE)v115 )
                {
                  v24 = v91;
                  v25 = v91 + v9;
                  if ( v91 + v9 < v9 )
                  {
                    v25 = -1;
                    v10 = -1073741675;
                  }
                  else
                  {
                    v10 = 0;
                  }
                  uAugend = v25;
                  v9 = v25;
                  v79 = v10;
                  if ( v10 < 0 )
                  {
                    v78 = v10;
                    goto LABEL_238;
                  }
                  v83 += v91;
                  if ( v25 > a2 )
                  {
                    v78 = -1073741820;
                    if ( !v90 )
                      goto LABEL_238;
                  }
                  else
                  {
                    KeQueryValuesThread((__int64)p_Blink, (__int64)&v95, v11);
                    v26 = v96;
                    if ( v96 == 4 )
                    {
                      v83 -= v24;
                      v9 -= v24;
                      uAugend = v9;
                    }
                    else
                    {
                      *((_DWORD *)v14 + 6) = v95;
                      *((_DWORD *)v14 + 17) = v26;
                      *((_DWORD *)v14 + 18) = v97;
                      *((_DWORD *)v14 + 14) = v98;
                      *((_DWORD *)v14 + 15) = v99;
                      *(_QWORD *)v14 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
                      *((_QWORD *)v14 + 1) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
                      *((_QWORD *)v14 + 2) = *((_QWORD *)p_Blink + 187);
                      *((_DWORD *)v14 + 16) = *((_DWORD *)p_Blink + 85);
                      *(_OWORD *)(v14 + 40) = *(_OWORD *)(p_Blink + 1576);
                      if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
                      {
                        v27 = *((_QWORD *)p_Blink + 208);
                      }
                      else
                      {
                        if ( (p_Blink[1732] & 8) != 0
                          || (v27 = *((_QWORD *)Object + 192), _InterlockedOr(v77, 0), (p_Blink[1732] & 8) != 0) )
                        {
                          v27 = 0LL;
                        }
                        v6 = (PEPROCESS)v84;
                        v10 = v79;
                        p_Blink = (char *)Object;
                        v9 = uAugend;
                        v14 = (char *)v86;
                      }
                      v107 = v27;
                      if ( v81 && v27 > (unsigned __int64)MmHighestUserAddress )
                        *((_QWORD *)v14 + 4) = 0LL;
                      else
                        *((_QWORD *)v14 + 4) = v27;
                      if ( v82 )
                      {
                        if ( v81 )
                        {
                          *((_QWORD *)v14 + 10) = 0LL;
                          *((_QWORD *)v14 + 11) = 0LL;
                        }
                        else
                        {
                          *((_QWORD *)v14 + 10) = *((_QWORD *)p_Blink + 7);
                          v14 = (char *)v86;
                          *((_QWORD *)v86 + 11) = *((_QWORD *)p_Blink + 6);
                          v6 = (PEPROCESS)v84;
                          v10 = v79;
                          p_Blink = (char *)Object;
                          v9 = uAugend;
                        }
                        v28 = *((_QWORD *)p_Blink + 208);
                        v107 = v28;
                        if ( v81 && v28 > (unsigned __int64)MmHighestUserAddress )
                          *((_QWORD *)v14 + 12) = 0LL;
                        else
                          *((_QWORD *)v14 + 12) = v28;
                        *((_QWORD *)v14 + 13) = *((_QWORD *)p_Blink + 30);
                        *((_QWORD *)v14 + 14) = 0LL;
                        *((_QWORD *)v14 + 15) = 0LL;
                        *((_QWORD *)v14 + 16) = 0LL;
                      }
                      ++*(_DWORD *)(v89 + 4);
                      if ( v10 < 0 )
                      {
                        v78 = v10;
                        goto LABEL_238;
                      }
                      v14 += v24;
                      v86 = v14;
                    }
                  }
                }
                if ( v6 == PsIdleProcess )
                {
                  Flink = (_LIST_ENTRY *)*((_QWORD *)p_Blink + 95);
                  if ( Flink != &v6->ThreadListHead )
                    goto LABEL_159;
                  p_Blink = 0LL;
                }
                else
                {
                  p_Blink = 0LL;
                  v110 = 0LL;
                  v29 = KeGetCurrentThread();
                  v30 = (char *)v84;
                  v31 = (char *)v84 + 1160;
                  v32 = 0;
                  --v29->KernelApcDisable;
                  v33 = (unsigned __int64 *)(v30 + 728);
                  v34 = KeAbPreAcquire((ULONG_PTR)(v30 + 728), 0LL, 0LL);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33, 17LL, 0LL) )
                    ExfAcquirePushLockSharedEx(v33, v34, (ULONG_PTR)v33);
                  if ( v34 )
                    *(_BYTE *)(v34 + 26) |= 1u;
                  for ( j = (char *)*((_QWORD *)Object + 210); j != v31; j = *(char **)j )
                  {
                    p_Blink = j - 1680;
                    v110 = j - 1680;
                    if ( ObReferenceObjectSafeWithTag((__int64)(j - 1680)) )
                    {
                      v32 = 1;
                      break;
                    }
                  }
                  v36 = (signed __int64 *)v84;
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v84 + 91, 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared(v36 + 91);
                  KeAbPostRelease((ULONG_PTR)(v36 + 91));
                  KeLeaveCriticalRegionThread((__int64)v29);
                  if ( Object )
                    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
                  if ( !v32 )
                  {
                    p_Blink = 0LL;
                    v110 = 0LL;
                  }
                  v6 = (PEPROCESS)v84;
                  v10 = v79;
                  v9 = uAugend;
                  v14 = (char *)v86;
                }
              }
              v37 = v14;
              v102 = v14;
              v38 = v14 + 224;
              v86 = v38;
              if ( v78 >= 0 )
              {
                v39 = (signed __int64 *)&v6[1].Affinity.Bitmap[5];
                v40 = ObFastReferenceObject(v39);
                if ( !v40 )
                {
                  v74 = KeGetCurrentThread();
                  v75 = v84;
                  PspLockProcessShared((__int64)v84, (__int64)v74);
                  v40 = ObFastReferenceObjectLocked(v39);
                  PspUnlockProcessShared((__int64)v75, (__int64)v74);
                }
                v41 = KeGetCurrentThread();
                --v41->KernelApcDisable;
                ExAcquireResourceSharedLite(*(PERESOURCE *)(v40 + 48), 1u);
                v42 = AuthzBasepSecurityAttributePresent(*(_QWORD *)(v40 + 776), (__int64)&PspSysAppIdClaim);
                ExReleaseResourceLite(*(PERESOURCE *)(v40 + 48));
                KeLeaveCriticalRegion();
                v93 = v42;
                ObFastDereferenceObject(v39, v40);
                v43 = v102;
                *(_QWORD *)((char *)v102 + 52) = 0LL;
                v43[52] = 0;
                v37 = v102;
                *((_QWORD *)v102 + 27) = *((_QWORD *)v84 + 236) << 12;
                *((_QWORD *)v37 + 5) = v118[3];
                v37[12] = 0;
                if ( v42 )
                  v37[12] = 1;
                v6 = (PEPROCESS)v84;
                v44 = *((_QWORD *)v84 + 223);
                if ( v44 )
                {
                  *(_OWORD *)v37 = *(_OWORD *)v44;
                  *((_OWORD *)v37 + 1) = *(_OWORD *)(v44 + 16);
                  *((_QWORD *)v37 + 4) = *(_QWORD *)(v44 + 32);
                }
                else
                {
                  memset(v37, 0, 0x28uLL);
                }
                PsQueryProcessEnergyValues(v6, (__int64)(v37 + 16));
                v10 = v79;
                if ( v79 < 0 )
                {
                  v78 = v79;
                  goto LABEL_180;
                }
                p_Blink = (char *)Object;
                v9 = uAugend;
                v38 = (char *)v86;
              }
              if ( a5 == 148 )
              {
                v66 = PsReferencePrimaryToken(v6);
                v117 = v66;
                SeQueryUserSidToken(v66, Src, 68LL);
                PackageSize = 254LL;
                AppIdSize = 130LL;
                v79 = RtlQueryPackageIdentity(v66, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
                if ( v79 < 0 )
                {
                  PackageSize = 0LL;
                  AppIdSize = 0LL;
                }
                ObFastDereferenceObject((signed __int64 *)&v6[1].Affinity.Bitmap[5], (unsigned __int64)v66);
                v67 = (v94 + 7) & 0xFFFFFFF8;
                v87 = v67;
                v68 = RtlUIntAdd(v9, v67, &uAugend);
                v10 = v68;
                v79 = v68;
                if ( v68 < 0 )
                {
                  v78 = v68;
LABEL_238:
                  if ( v6 && v6 != PsIdleProcess )
                    ObfDereferenceObjectWithTag(v6, 0x6E457350u);
                  if ( p_Blink )
                    ExpQuitNextProcessThread(p_Blink);
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  if ( CurrentSilo )
                    ObfDereferenceObject(CurrentSilo);
                  return (unsigned int)v78;
                }
                v83 += v67;
                v9 = uAugend;
                if ( uAugend > a2 )
                {
                  v78 = -1073741820;
                  if ( !v90 )
                    goto LABEL_238;
                }
                else
                {
                  v37[13] = 224;
                  memmove(v38, Src, v69);
                  if ( v10 < 0 )
                  {
                    v78 = v10;
                    goto LABEL_238;
                  }
                  v38 += v67;
                  v86 = v38;
                }
                v70 = PackageSize;
                if ( PackageSize )
                {
                  if ( PackageSize > 0xFFFFFFFF )
                  {
                    v78 = -1073741820;
                    goto LABEL_238;
                  }
                  v87 = PackageSize;
                  v72 = RtlUIntAdd(v9, PackageSize, &uAugend);
                  v10 = v72;
                  v79 = v72;
                  if ( v72 < 0 )
                  {
                    v78 = v72;
                    goto LABEL_238;
                  }
                  v83 += v70;
                  v9 = uAugend;
                  if ( uAugend > a2 )
                  {
                    v78 = -1073741820;
                    if ( !v90 )
                      goto LABEL_238;
                  }
                  else
                  {
                    v37[14] = (_DWORD)v38 - (_DWORD)v37;
                    memmove(v38, PackageFullName, v70);
                    if ( v10 < 0 )
                    {
                      v78 = v10;
                      goto LABEL_238;
                    }
                    v38 += v70;
                    v86 = v38;
                  }
                }
                v71 = AppIdSize;
                if ( AppIdSize )
                {
                  if ( AppIdSize > 0xFFFFFFFF )
                  {
                    v78 = -1073741820;
                    goto LABEL_238;
                  }
                  v87 = AppIdSize;
                  v73 = RtlUIntAdd(v9, AppIdSize, &uAugend);
                  v10 = v73;
                  v79 = v73;
                  if ( v73 < 0 )
                  {
                    v78 = v73;
                    goto LABEL_238;
                  }
                  v83 += v71;
                  v9 = uAugend;
                  if ( uAugend > a2 )
                  {
                    v78 = -1073741820;
                    if ( !v90 )
                      goto LABEL_238;
                  }
                  else
                  {
                    v37[52] = (_DWORD)v38 - (_DWORD)v37;
                    memmove(v38, AppId, v71);
                    if ( v10 < 0 )
                    {
                      v78 = v10;
                      goto LABEL_238;
                    }
                    v38 += v71;
                    v86 = v38;
                  }
                }
              }
              if ( v6 == PsIdleProcess )
                goto LABEL_125;
              if ( v6 == PsInitialSystemProcess )
              {
                v49 = (unsigned __int16 *)&ExpSystemProcessName;
              }
              else if ( v6 == (PEPROCESS)PsSecureSystemProcess )
              {
                v49 = (unsigned __int16 *)&ExpSecureSystemProcessName;
              }
              else
              {
                if ( v6[2].ActiveProcessors.Bitmap[7] )
                {
                  if ( qword_1402DC060 )
                    v48 = qword_1402DC060(v6, &P);
                  else
                    v48 = -1073739509;
                }
                else
                {
                  v45 = v6[1].ActiveProcessors.Bitmap[15];
                  PoolWithTag = (char *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned int)*(unsigned __int16 *)(v45 + 2) + 16,
                                          0x6E497350u);
                  v47 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    *(_OWORD *)PoolWithTag = *(_OWORD *)v45;
                    if ( *((_QWORD *)PoolWithTag + 1) )
                    {
                      *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                      memmove(PoolWithTag + 16, *(const void **)(v45 + 8), *(unsigned __int16 *)(v45 + 2));
                    }
                    P = v47;
                    v48 = 0;
                  }
                  else
                  {
                    v48 = -1073741801;
                  }
                }
                v79 = v48;
                if ( v48 < 0 )
                  v49 = (unsigned __int16 *)v6[1].ActiveProcessors.Bitmap[15];
                else
                  v49 = (unsigned __int16 *)P;
              }
              v104 = v49;
              v50 = *v49;
              v87 = v50;
              v51 = v38;
              v88 = v38;
              v103 = v38;
              v94 = v50;
              v52 = (_WORD *)*((_QWORD *)v49 + 1);
              v106 = v52;
              if ( a5 != 148 && (_DWORD)v50 )
              {
                v52 += (unsigned __int64)(unsigned int)v50 >> 1;
                v106 = v52;
                while ( v52 != *((_WORD **)v49 + 1) )
                {
                  v106 = --v52;
                  if ( *v52 == 92 )
                  {
                    v106 = ++v52;
                    break;
                  }
                }
                v50 -= 2 * (((__int64)v52 - *((_QWORD *)v49 + 1)) >> 1);
                v94 = v50;
              }
              v53 = (unsigned int)v50;
              v54 = (v50 + 9) & 0xFFFFFFF8;
              v87 = v54;
              v55 = v54 + v9;
              if ( v54 + v9 < v9 )
              {
                v55 = -1;
                v10 = -1073741675;
              }
              else
              {
                v10 = 0;
              }
              uAugend = v55;
              v79 = v10;
              if ( v10 < 0 )
              {
                v78 = v10;
                goto LABEL_238;
              }
              v83 += v54;
              if ( v55 > a2 )
              {
                v78 = -1073741820;
                if ( !v90 )
                  goto LABEL_238;
              }
              else
              {
                if ( (_DWORD)v50 )
                {
                  memmove(v38, v52, (unsigned int)v50);
                  v51 = &v88[2 * (v53 >> 1)];
                  v103 = v51;
                }
                *(_WORD *)v51 = 0;
                v51 += 2;
                v88 = v51;
                v103 = v51;
              }
              if ( P )
              {
                ExFreePoolWithTag(P, 0);
                P = 0LL;
                LOWORD(v51) = (_WORD)v88;
              }
              if ( v78 >= 0 )
                break;
            }
          }
        }
      }
LABEL_127:
      if ( v6 == PsIdleProcess )
        v6 = 0LL;
      p_Lock = &v6->Header.Lock;
      v113 = v6;
      while ( 1 )
      {
        v6 = 0LL;
        v112 = 0LL;
        v58 = KeGetCurrentThread();
        v59 = 0;
        --v58->SpecialApcDisable;
        v60 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&PspActiveProcessLock, v60, (ULONG_PTR)&PspActiveProcessLock);
        if ( v60 )
          *(_BYTE *)(v60 + 26) |= 1u;
        if ( p_Lock )
          v61 = (__int64 *)p_Lock[94];
        else
          v61 = (__int64 *)PsActiveProcessHead;
        while ( v61 != &PsActiveProcessHead )
        {
          v6 = (PEPROCESS)(v61 - 94);
          v112 = v61 - 94;
          if ( ObReferenceObjectSafeWithTag((__int64)(v61 - 94)) )
          {
            v59 = 1;
            break;
          }
          v61 = (__int64 *)*v61;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v63 = v58->SpecialApcDisable + 1;
        v58->SpecialApcDisable = v63;
        if ( !v63 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v58->ApcState.ApcListHead[0].Flink != &v58->152 )
          KiCheckForKernelApcDelivery(v62);
        if ( p_Lock )
          ObfDereferenceObjectWithTag(p_Lock, 0x6E457350u);
        if ( !v59 )
        {
          v6 = 0LL;
          v112 = 0LL;
        }
        p_Lock = &v6->Header.Lock;
        v113 = v6;
        if ( !v6 )
        {
          v6 = 0LL;
          v84 = 0LL;
          goto LABEL_11;
        }
        if ( (v6[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v81 )
            goto LABEL_10;
          if ( ObOpenObjectByPointer(v6, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
            break;
        }
      }
      ObCloseHandle(Handle, 0);
    }
    v56 = v89;
    *(_WORD *)(v89 + 56) = (_WORD)v51 - (_WORD)v38 - 2;
    *(_WORD *)(v56 + 58) = v54;
    *(_QWORD *)(v56 + 64) = v38;
LABEL_125:
    if ( v78 >= 0 )
    {
      *(_DWORD *)v89 = v83;
      if ( v10 < 0 )
      {
        v78 = v10;
        goto LABEL_238;
      }
    }
    goto LABEL_127;
  }
  return result;
}
