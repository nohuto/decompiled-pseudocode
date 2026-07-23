/*
 * XREFs of MiAllocateVirtualMemory @ 0x14042FD50
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     NtAllocateVirtualMemory @ 0x14042FD00 (NtAllocateVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x14053260C (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140013E84 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140013E98 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400141A4 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiVadDeleted @ 0x14002BEF0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MiInsertPrivateVad @ 0x140095DF0 (MiInsertPrivateVad.c)
 *     RtlFindMostSignificantBit @ 0x14009D954 (RtlFindMostSignificantBit.c)
 *     MiFlushRelease @ 0x1400A43EC (MiFlushRelease.c)
 *     MiFlushAcquire @ 0x1400A4478 (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x1400ADFA4 (MiResetVirtualMemory.c)
 *     MiAllowProtectionChange @ 0x1400B5348 (MiAllowProtectionChange.c)
 *     MiArbitraryCodeBlocked @ 0x1400B548C (MiArbitraryCodeBlocked.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCheckSecuredVad @ 0x14040B2AC (MiCheckSecuredVad.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     MiCommitVadCfgBits @ 0x140428720 (MiCommitVadCfgBits.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     MiAdvanceVadHint @ 0x140435A80 (MiAdvanceVadHint.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCommitPagefileBackedSection @ 0x1404A6010 (MiCommitPagefileBackedSection.c)
 *     MiCreateWriteWatchView @ 0x1404A6424 (MiCreateWriteWatchView.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 *     MiCreateRotateView @ 0x1404D151C (MiCreateRotateView.c)
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 *     MiLogMemResetInfo @ 0x140658C84 (MiLogMemResetInfo.c)
 *     MiLogReserveVaFailed @ 0x140658CE0 (MiLogReserveVaFailed.c)
 *     MiFreeRotateView @ 0x140659D18 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x140659E10 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x14065C110 (MiAllocateAweInfo.c)
 *     MiCommitEnclavePages @ 0x14065E818 (MiCommitEnclavePages.c)
 *     MiCreateLargePageVad @ 0x1406625E0 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14066295C (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 *     PerfInfoLogVirtualAlloc @ 0x1406A3158 (PerfInfoLogVirtualAlloc.c)
 *     EtwTiLogAllocExecVm @ 0x1406A5758 (EtwTiLogAllocExecVm.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(
        __int64 a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned int a8,
        _QWORD *a9)
{
  unsigned __int64 v9; // rax
  int v10; // eax
  __int64 result; // rax
  char v12; // bl
  unsigned int v13; // r14d
  bool v14; // zf
  unsigned int v15; // edi
  _KPROCESS *v16; // r8
  unsigned __int64 *v17; // r9
  unsigned __int64 *v18; // r10
  ULONG_PTR v19; // r11
  KPROCESSOR_MODE v20; // dl
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r13
  _KPROCESS *v25; // r12
  unsigned __int64 v26; // r15
  int AweInfo; // edi
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v33; // rsi
  int v34; // ecx
  unsigned __int64 v35; // rdx
  unsigned int v36; // ecx
  _QWORD *v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // r15
  unsigned int v40; // eax
  unsigned __int64 v41; // r10
  __int64 v42; // rcx
  _QWORD *v43; // rcx
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  int v48; // eax
  __int64 v49; // rax
  unsigned int v50; // edi
  int v51; // eax
  unsigned int v52; // eax
  int v53; // edx
  unsigned int v54; // ecx
  __int64 v55; // r9
  unsigned __int64 v56; // rdi
  void *v57; // rax
  unsigned __int64 v58; // rdx
  ULONG_PTR v59; // rcx
  unsigned __int64 v60; // r8
  unsigned int v61; // r12d
  int v62; // eax
  PVOID v63; // rsi
  __int64 v64; // r9
  int v65; // [rsp+28h] [rbp-1C0h]
  int v66; // [rsp+30h] [rbp-1B8h]
  _BYTE v67[4]; // [rsp+50h] [rbp-198h] BYREF
  unsigned int v68; // [rsp+54h] [rbp-194h]
  char v69; // [rsp+58h] [rbp-190h]
  int v70; // [rsp+5Ch] [rbp-18Ch] BYREF
  unsigned int ProtectionMask; // [rsp+60h] [rbp-188h]
  PVOID v72; // [rsp+68h] [rbp-180h] BYREF
  int v73; // [rsp+70h] [rbp-178h] BYREF
  __int64 Process; // [rsp+78h] [rbp-170h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-168h]
  _QWORD *v76; // [rsp+88h] [rbp-160h]
  unsigned __int64 v77; // [rsp+90h] [rbp-158h] BYREF
  __int64 v78; // [rsp+98h] [rbp-150h]
  unsigned __int64 v79; // [rsp+A0h] [rbp-148h]
  unsigned int v80; // [rsp+A8h] [rbp-140h] BYREF
  unsigned __int64 v81; // [rsp+B0h] [rbp-138h] BYREF
  unsigned int v82; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-128h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-120h]
  PVOID P; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v86; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v87; // [rsp+E0h] [rbp-108h]
  unsigned __int64 *v88; // [rsp+E8h] [rbp-100h]
  unsigned __int64 *v89; // [rsp+F0h] [rbp-F8h]
  unsigned __int64 v90; // [rsp+F8h] [rbp-F0h] BYREF
  unsigned __int64 v91; // [rsp+100h] [rbp-E8h] BYREF
  _QWORD v92[5]; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+138h] [rbp-B0h]
  __int64 v94; // [rsp+140h] [rbp-A8h]
  __int64 v95; // [rsp+148h] [rbp-A0h]
  _QWORD v96[3]; // [rsp+150h] [rbp-98h] BYREF
  unsigned __int64 v97; // [rsp+168h] [rbp-80h]
  _BYTE v98[48]; // [rsp+170h] [rbp-78h] BYREF

  v88 = a4;
  v78 = a3;
  v89 = a2;
  v87 = a1;
  v76 = a9;
  if ( a3 && (a3 < 0x20 ? (v9 = a3 + 32) : (v9 = 63 - RtlFindMostSignificantBit(a3)), v78 = v9, v9 > 0x35) )
    v10 = -1073741811;
  else
    v10 = 0;
  Object = 0LL;
  v70 = v10;
  if ( v10 < 0 )
    return 3221225713LL;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LODWORD(P) = a5 & 0x7F;
  if ( (unsigned int)P > (unsigned __int16)KeNumberNodes )
    return 3221225715LL;
  v13 = a5 & 0xFFFFFF80;
  if ( (a5 & 0x9E07CF80) != 0 || (a5 & 0x1083000) == 0 )
    return 3221225715LL;
  if ( (a5 & 0x21E80000) == 0 )
  {
LABEL_36:
    v15 = a6;
    v68 = a6;
LABEL_37:
    v67[0] = 1;
    v69 = 0;
    if ( (v15 & 0x40000000) == 0 )
      goto LABEL_40;
    if ( (v15 & 0xF0) != 0 )
    {
      v15 &= ~0x40000000u;
      v68 = v15;
      v67[0] = 0;
LABEL_40:
      ProtectionMask = MiMakeProtectionMask(v15);
      if ( ProtectionMask != -1 )
      {
        v20 = a7;
        if ( a7 )
        {
          v21 = (__int64)v17;
          if ( (unsigned __int64)v17 >= 0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v21 = *(_QWORD *)v21;
          v22 = (__int64)v18;
          if ( (unsigned __int64)v18 >= 0x7FFFFFFF0000LL )
            v22 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v22 = *(_QWORD *)v22;
        }
        v23 = *v17;
        v79 = v23;
        v96[2] = v23;
        v97 = *v18;
        v24 = v97;
        v86 = v97;
        if ( v23 > 0x7FFFFFFDFFFFLL )
          return 3221225712LL;
        if ( 0x7FFFFFFE0000LL - v23 < v97 || !v97 )
          return 3221225714LL;
        if ( v19 == -1LL )
        {
          v25 = v16;
          v72 = v16;
        }
        else
        {
          result = ObpReferenceObjectByHandleWithTag(v19, 1834380621, (__int64)&v72, 0LL, 0LL);
          v70 = result;
          if ( (int)result < 0 )
            return result;
          v25 = (_KPROCESS *)v72;
          v20 = a7;
        }
        v26 = 0LL;
        v77 = 0LL;
        if ( (a5 & 0x40000000) != 0 )
        {
          if ( !v25[2].ActiveProcessors.Bitmap[9] )
          {
            AweInfo = -1073741581;
            goto LABEL_282;
          }
          if ( (a5 & 0x21F80000) != 0 )
          {
            AweInfo = -1073741581;
            goto LABEL_282;
          }
        }
        v28 = 4096LL;
        if ( (a5 & 0x20400000) == 0x20400000 )
        {
          v28 = 0x10000LL;
        }
        else if ( (a5 & 0x20000000) != 0 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v20) )
          {
            AweInfo = -1073741727;
            goto LABEL_282;
          }
          v28 = 0x200000LL;
        }
        v29 = Process;
        if ( (_KPROCESS *)Process != v25 )
        {
          KiStackAttachProcess(v25, 0, (__int64)v98);
          v12 = 2;
          v29 = Process;
        }
        v81 = 0LL;
        if ( (a5 & 0x1000) != 0 && !v79 )
          v13 = a5 & 0xFFFFDF80 | 0x2000;
        if ( (v13 & 0x2000) != 0 )
        {
          if ( (v15 & 0x88) == 0 )
          {
            v82 = ProtectionMask & 2;
            if ( (ProtectionMask & 2) != 0 )
            {
              AweInfo = MiArbitraryCodeBlocked(v29);
              if ( AweInfo < 0 )
                goto LABEL_282;
            }
            Process = 0x10000LL;
            if ( !v79 )
            {
              v24 = (v24 + 4095) & 0xFFFFFFFFFFFFF000uLL;
              v30 = ((v24 & 0xFFF) != 0) + (v24 >> 12);
              v83 = 0LL;
              v73 = v13 & 0x20000000;
              if ( (v13 & 0x20000000) != 0 )
              {
                if ( v24 % v28 )
                {
                  AweInfo = -1073741582;
                  goto LABEL_282;
                }
                Process = v28;
              }
LABEL_94:
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
              v33 = (unsigned __int64)PoolWithTag;
              if ( !PoolWithTag )
              {
                AweInfo = -1073741670;
                goto LABEL_282;
              }
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[3] = 0LL;
              PoolWithTag[4] = 0LL;
              PoolWithTag[6] = 0LL;
              PoolWithTag[7] = 0LL;
              PoolWithTag[2] = -2LL;
              PoolWithTag[5] = 0LL;
              v34 = (int)P;
              *((_DWORD *)PoolWithTag + 12) ^= (*((_DWORD *)PoolWithTag + 12) ^ ((_DWORD)P << 8)) & 0x3F00;
              if ( v34 )
                *(_BYTE *)(qword_140327FD0 + 276840624) = 1;
              if ( (v13 & 0x1000) != 0 )
              {
                v35 = v30;
                *((_DWORD *)PoolWithTag + 13) |= 0x80000000;
              }
              else
              {
                v35 = v81;
              }
              v36 = *((_DWORD *)PoolWithTag + 12) ^ (*((_DWORD *)PoolWithTag + 12) ^ (8 * ProtectionMask)) & 0xF8 | 0x8000;
              *((_DWORD *)PoolWithTag + 12) = v36;
              if ( (a8 & 1) != 0 )
                v35 = 0x7FFFFFFFELL;
              *((_DWORD *)PoolWithTag + 13) ^= (v35 ^ *((_DWORD *)PoolWithTag + 13)) & 0x7FFFFFFF;
              *((_BYTE *)PoolWithTag + 34) = v35 >> 31;
              P = 0LL;
              LODWORD(v81) = v13 & 0x20400000;
              if ( (v13 & 0x20400000) == 0x20400000 )
              {
                *((_DWORD *)PoolWithTag + 12) = v36 | 0x100000;
                goto LABEL_123;
              }
              if ( (v13 & 0x400000) != 0 )
              {
                if ( !v25[1].ActiveProcessors.Bitmap[3] )
                {
                  AweInfo = MiAllocateAweInfo();
                  if ( AweInfo < 0 )
                    goto LABEL_120;
                }
                v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x76706D4Du);
                P = v37;
                if ( !v37 )
                {
LABEL_110:
                  ExFreePoolWithTag((PVOID)v33, 0);
                  AweInfo = -1073741670;
                  goto LABEL_282;
                }
                *(_DWORD *)(v33 + 48) = *(_DWORD *)(v33 + 48) & 0xFFFBFFF8 | 3;
                v37[3] = v33;
LABEL_123:
                v80 = 0;
                LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v25);
                if ( (v25[1].DirectoryTableBase & 0x2000000000LL) != 0 )
                {
                  AweInfo = -1073741558;
                  goto LABEL_137;
                }
                if ( v79 )
                {
                  if ( MiCheckForConflictingVadExistence() )
                  {
                    AweInfo = -1073741800;
                    goto LABEL_137;
                  }
                }
                else
                {
                  v39 = v78;
                  AweInfo = MiSelectUserAddress(
                              v13,
                              v78,
                              v24,
                              Process,
                              ProtectionMask,
                              a8,
                              (__int64)&v80,
                              (__int64)&v77);
                  if ( AweInfo < 0 )
                  {
                    MiLogReserveVaFailed(v24, Process, v39);
                    v26 = v77;
                    goto LABEL_137;
                  }
                  v40 = v80;
                  if ( (_DWORD)v81 == 541065216 )
                  {
                    Object = (PVOID)v80;
                  }
                  else
                  {
                    if ( v73 )
                      v40 = 0;
                    Object = (PVOID)v40;
                  }
                  v26 = v77;
                  v83 = (v24 + v77 - 1) | 0xFFF;
                  v41 = v83;
                }
                Process = v26 >> 12;
                *(_DWORD *)(v33 + 24) = v26 >> 12;
                *(_BYTE *)(v33 + 32) = v26 >> 44;
                v78 = v41 >> 12;
                *(_DWORD *)(v33 + 28) = v41 >> 12;
                *(_BYTE *)(v33 + 33) = v41 >> 44;
                AweInfo = MiInsertVadCharges(v33, v25);
                v70 = AweInfo;
                if ( AweInfo < 0 )
                {
LABEL_137:
                  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v25);
                  if ( (v12 & 8) != 0 )
                  {
                    MiFreeVadEventBitmap(v25, v33, 4LL);
                  }
                  else if ( (v13 & 0x800000) != 0 )
                  {
                    MiFreeRotateView(v33);
                  }
                  else if ( (_DWORD)v81 != 541065216 )
                  {
                    if ( v73 )
                    {
                      MiFreeLargePageView(v25, v33, 0LL);
                    }
                    else if ( (v13 & 0x400000) != 0 )
                    {
                      ExFreePoolWithTag(P, 0);
                    }
                  }
                  goto LABEL_120;
                }
                MiInsertPrivateVad(v33, (__int64)P, (__int64)v25);
                if ( (_DWORD)Object == 1 )
                  MiAdvanceVadHint(Process, v78, a8);
                v24 = v83 - v26 + 1;
                v12 |= 1u;
                if ( v82 && MiIsProcessCfgEnabled() )
                {
                  MiLockVad((__int64)CurrentThread, v33);
                  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v25);
                  v12 &= ~1u;
                  AweInfo = MiCommitVadCfgBits(v33, 0LL, (__int64)v67);
                  v70 = AweInfo;
                  if ( AweInfo < 0 )
                  {
                    MiReferenceVad(v33);
                    MiDeleteVad(v42, 0);
                    goto LABEL_282;
                  }
                  v43 = v76;
                  if ( v76 )
                    goto LABEL_162;
                  if ( (*(_BYTE *)(v33 + 48) & 7) == 5 )
                  {
LABEL_160:
                    if ( !v43 && (*(_BYTE *)(v33 + 48) & 7) != 5 )
                    {
LABEL_166:
                      if ( (v12 & 1) != 0 )
                        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v25);
                      if ( (*(_BYTE *)(v33 + 48) & 7) != 5 )
                        goto LABEL_264;
                      AweInfo = MiMapUserLargePages(v33, (*(_DWORD *)(v33 + 48) >> 8) & 0x3F);
                      v70 = AweInfo;
                      if ( AweInfo < 0 )
                      {
                        MiDeleteVad(v33, 0);
                        goto LABEL_282;
                      }
                      if ( v76 )
                        goto LABEL_264;
                      goto LABEL_263;
                    }
LABEL_162:
                    if ( (v12 & 1) != 0 )
                    {
                      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v25);
                      v12 &= ~1u;
                    }
                    MiReferenceVad(v33);
                    if ( v76 )
                      *v76 = v33;
                    goto LABEL_166;
                  }
                  MiUnlockVad((__int64)CurrentThread, v33);
                }
                else if ( v76 || (*(_BYTE *)(v33 + 48) & 7) == 5 )
                {
                  MiLockVad((__int64)CurrentThread, v33);
                }
                v43 = v76;
                goto LABEL_160;
              }
              if ( v73 )
              {
                AweInfo = MiCreateLargePageVad(v25, PoolWithTag);
                if ( AweInfo >= 0 )
                {
                  v38 = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 5;
LABEL_122:
                  *(_DWORD *)(v33 + 48) = v38;
                  goto LABEL_123;
                }
              }
              else
              {
                if ( (v13 & 0x800000) != 0 )
                {
                  if ( !(unsigned int)MiCreateRotateView(PoolWithTag) )
                    goto LABEL_110;
                  v38 = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 6;
                  goto LABEL_122;
                }
                if ( (v13 & 0x200000) == 0 )
                  goto LABEL_123;
                AweInfo = MiCreateWriteWatchView(v25, PoolWithTag, v30);
                if ( AweInfo >= 0 )
                {
                  v38 = *(_DWORD *)(v33 + 48) & 0xFFFFFFF8 | 4;
                  v12 |= 8u;
                  goto LABEL_122;
                }
              }
LABEL_120:
              ExFreePoolWithTag((PVOID)v33, 0);
              goto LABEL_282;
            }
            v73 = v13 & 0x20000000;
            if ( (v13 & 0x20000000) != 0 )
            {
              if ( v24 % v28 )
              {
                AweInfo = -1073741582;
                goto LABEL_282;
              }
              Process = v28;
              v26 = v79 & ~(v28 - 1);
              v77 = v26;
              v31 = v26 + v24 - 1;
            }
            else
            {
              if ( (v13 & 0x40000000) != 0 )
              {
                if ( (((unsigned int)v79 | (unsigned int)v24) & 0xFFF) != 0 )
                  goto LABEL_92;
                v26 = v79;
                v77 = v79;
              }
              else
              {
                v26 = v79 & 0xFFFFFFFFFFFF0000uLL;
                v77 = v79 & 0xFFFFFFFFFFFF0000uLL;
              }
              v31 = (v24 + v79 - 1) | 0xFFF;
            }
            v83 = v31;
            if ( v26 >= 0x10000 || v25[2].ActiveProcessors.Bitmap[9] )
            {
              v30 = (((v31 - v26) & 0xFFF) != 0) + ((__int64)(v31 - v26) >> 12);
              goto LABEL_94;
            }
LABEL_92:
            AweInfo = -1073741584;
            goto LABEL_282;
          }
          AweInfo = -1073741755;
LABEL_282:
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (v13 & 0x1000000) != 0 && AweInfo == -1073740748 )
            MiLogMemResetInfo(v26, v24, 0LL);
          if ( (v12 & 2) != 0 )
            KiUnstackDetachProcess((struct _KTHREAD *)v98, 0);
          if ( v87 != -1 )
            ObfDereferenceObjectWithTag(v72, 0x6D566D4Du);
          return (unsigned int)AweInfo;
        }
        if ( (v13 & 0x40000000) != 0 )
        {
          AweInfo = -1073741581;
          goto LABEL_282;
        }
        if ( v13 == 0x80000 || v13 == 0x1000000 )
        {
          if ( v79 + v24 < 0x1000 )
          {
            AweInfo = -1073741800;
            goto LABEL_282;
          }
          v44 = ((v79 + v24) & 0xFFFFFFFFFFFFF000uLL) - 1;
          v26 = (v79 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          if ( v26 > v44 )
          {
            AweInfo = -1073741800;
            goto LABEL_282;
          }
        }
        else
        {
          v44 = (v79 + v24 - 1) | 0xFFF;
          v26 = v79 & 0xFFFFFFFFFFFFF000uLL;
        }
        v24 = v44 - v26 + 1;
        v76 = (_QWORD *)(v26 >> 12);
        v77 = v44 >> 12;
        v45 = MiObtainReferencedVad(v26, &v70);
        v33 = v45;
        if ( !v45 )
        {
          AweInfo = v70;
          if ( v70 == -1073741664 )
            AweInfo = -1073741800;
          goto LABEL_282;
        }
        if ( v77 > (*(unsigned int *)(v45 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v45 + 33) << 32)) )
        {
          AweInfo = -1073741800;
LABEL_281:
          MiUnlockAndDereferenceVad((char *)v33);
          goto LABEL_282;
        }
        v46 = *(_DWORD *)(v45 + 48);
        v47 = v46 & 7;
        if ( v47 == 3 && (v46 & 0x40000) != 0 )
        {
          v48 = MiCommitEnclavePages((_DWORD)v72, v45, v26, v44, v13, ProtectionMask);
          goto LABEL_191;
        }
        if ( ((1 << v47) & 0x55) == 0 )
        {
          AweInfo = -1073741800;
          goto LABEL_281;
        }
        v49 = *(unsigned int *)(v45 + 52);
        LODWORD(v49) = v49 & 0x7FFFFFFF;
        if ( (v49 | ((unsigned __int64)*(unsigned __int8 *)(v33 + 34) << 31)) >= 0x7FFFFFFFELL )
        {
          AweInfo = -1073741800;
          goto LABEL_281;
        }
        if ( v47 != 6 )
        {
          LOBYTE(v52) = ProtectionMask;
LABEL_207:
          if ( (v13 & 0x1080000) != 0 )
          {
            AweInfo = MiResetVirtualMemory(Process, v26, v44, v33, v13);
            v70 = AweInfo;
            MiUnlockAndDereferenceVad((char *)v33);
            if ( AweInfo >= 0 )
              goto LABEL_264;
            goto LABEL_282;
          }
          v12 &= ~4u;
          if ( (v52 & 2) != 0 )
          {
            AweInfo = MiAllowProtectionChange((__int64)v72, Process, v33, v52, v26, v44);
            if ( AweInfo < 0 )
              goto LABEL_281;
            if ( (!v67[0] || (*(_DWORD *)(v33 + 48) & 0x10) == 0) && MiIsProcessCfgEnabled() )
            {
              if ( (*(_DWORD *)(v33 + 48) & 0x4000) != 0 )
              {
                AweInfo = MiCheckSecuredVad(v33, v79, v44 - v26 + 1, ProtectionMask);
                if ( AweInfo < 0 )
                  goto LABEL_281;
                v12 |= 4u;
              }
              v96[0] = v26;
              v96[1] = v44;
              AweInfo = MiCommitVadCfgBits(v33, (__int64)v96, (__int64)v67);
              if ( AweInfo < 0 )
                goto LABEL_281;
              v69 = 1;
            }
          }
          v53 = *(_DWORD *)(v33 + 48);
          if ( (v53 & 0x8000) != 0 )
          {
            v61 = v68;
            if ( (v68 & 0x88) == 0
              && ((v53 & 7) != 6 || (v68 & 0xFFFFF9F9) == 0)
              && ((v53 & 0x4000) == 0 || !MiLocateVadEvent(v33, 64)) )
            {
              LODWORD(v81) = 0;
              AweInfo = MiCommitExistingVad(v33, v79, v86, v61, &v81);
              v70 = AweInfo;
              if ( AweInfo >= 0 )
              {
                MiUnlockAndDereferenceVad((char *)v33);
                if ( (_DWORD)v81 == 1 )
                {
                  v91 = v26;
                  v90 = v24;
                  v62 = v61;
                  if ( v69 && !v67[0] )
                    v62 = v61 | 0x40000000;
                  v63 = v72;
                  MiProtectVirtualMemory(
                    Process,
                    (_DWORD)v72,
                    (unsigned int)&v91,
                    (unsigned int)&v90,
                    v62,
                    (__int64)&v83);
                  goto LABEL_266;
                }
LABEL_265:
                v63 = v72;
LABEL_266:
                if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
                {
                  if ( (v13 & 0x3000) != 0 )
                  {
                    v64 = v13;
                    if ( (a8 & 1) != 0 )
                      v64 = 0x2000LL;
                    PerfInfoLogVirtualAlloc(v26, v24, v63, v64);
                  }
                  else if ( (v13 & 0x1080000) != 0 )
                  {
                    MiLogMemResetInfo(v26, v24, v13);
                  }
                }
                if ( (v12 & 2) != 0 )
                  KiUnstackDetachProcess((struct _KTHREAD *)v98, 0);
                if ( (ProtectionMask & 2) != 0 )
                  EtwTiLogAllocExecVm((_DWORD)v63, a7, v26, v86, v13, v61);
                if ( v87 != -1 )
                  ObfDereferenceObjectWithTag(v63, 0x6D566D4Du);
                *v88 = v24;
                *v89 = v26;
                return (unsigned int)AweInfo;
              }
              goto LABEL_281;
            }
          }
          else
          {
            v54 = v68;
            if ( (v68 & 0x600) == 0 )
            {
              if ( (v53 & 0x4000) != 0 && (v12 & 4) == 0 )
              {
                AweInfo = MiCheckSecuredVad(v33, v79, v44 - v26 + 1, ProtectionMask);
                if ( AweInfo < 0 )
                  goto LABEL_281;
                v54 = v68;
              }
              v55 = **(_QWORD **)(v33 + 72);
              v78 = v55;
              if ( *(_QWORD *)(v55 + 64) )
              {
                if ( *(__int64 *)(v33 + 120) < 0 )
                {
                  v86 = v44
                      + ((unsigned __int64)(*(_DWORD *)(v33 + 64) & 0xFFFFFF) << 16)
                      - ((*(unsigned int *)(v33 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v33 + 32) << 32)) << 12)
                      + 1;
                  if ( (unsigned int)MiFlushAcquire(v55, 0LL, 0LL) )
                  {
                    v56 = 0LL;
                    Object = 0LL;
                    if ( (*(_DWORD *)(v33 + 48) & 0x8000) == 0 )
                    {
                      v57 = *(void **)(v33 + 128);
                      if ( v57 )
                      {
                        v56 = *(_QWORD *)(v33 + 128);
                        Object = (PVOID)v56;
                        ObfReferenceObject(v57);
                      }
                    }
                    MiUnlockVad((__int64)CurrentThread, v33);
                    memset(v92, 0, sizeof(v92));
                    v93 = 0LL;
                    v94 = 0LL;
                    v95 = 0LL;
                    if ( v56 )
                    {
                      if ( (*(_DWORD *)(v78 + 56) & 0x20) != 0 )
                        v93 = v56 | 1;
                      else
                        v93 = v56 | 2;
                    }
                    else
                    {
                      v93 = v78;
                    }
                    LODWORD(v95) = *(_DWORD *)(v78 + 56);
                    HIDWORD(v95) = HIDWORD(v95) & 0xFFFFF000 | 4;
                    AweInfo = MmExtendSection(v92, &v86, 0LL);
                    if ( Object )
                      ObfDereferenceObject(Object);
                    MiLockVad((__int64)CurrentThread, v33);
                    MiFlushRelease(v78, 0LL, 0LL);
                    if ( AweInfo >= 0
                      && (unsigned int)MiVadDeleted(v33) != 1
                      && (unsigned __int64)v76 >= v60
                      && (unsigned __int64)v76 <= v58
                      && v77 <= v58
                      && v77 >= v60
                      && ((*(_DWORD *)(v33 + 48) & 0x4000) == 0
                       || (int)MiCheckSecuredVad(v59, v79, v44 - v26 + 1, ProtectionMask) >= 0)
                      && *(__int64 *)(v33 + 120) < 0 )
                    {
                      AweInfo = MiSetProtectionOnSection((__int64)v72, v33, v26, v44, v68, 0, &v73, &v82);
                    }
                  }
                  else
                  {
                    AweInfo = -1073741670;
                  }
                }
                else
                {
                  AweInfo = -1073741791;
                }
                goto LABEL_281;
              }
              v48 = MiCommitPagefileBackedSection(
                      (_DWORD)v72,
                      v33,
                      v26,
                      v44,
                      v54,
                      v65,
                      v66,
                      (__int64)&v73,
                      (__int64)&v82);
LABEL_191:
              AweInfo = v48;
              v70 = v48;
              if ( v48 >= 0 )
              {
LABEL_263:
                MiUnlockAndDereferenceVad((char *)v33);
LABEL_264:
                LOBYTE(v61) = v68;
                goto LABEL_265;
              }
              goto LABEL_281;
            }
          }
LABEL_280:
          AweInfo = -1073741755;
          goto LABEL_281;
        }
        v50 = v15 & 0xFFFFF9FF;
        v68 = v50;
        v51 = (unsigned __int8)v46 >> 6;
        if ( v51 == 3 && (v46 & 0x38) != 0 )
        {
          v50 |= 0x400u;
        }
        else
        {
          if ( v51 != 1 )
            goto LABEL_204;
          v50 |= 0x200u;
        }
        v68 = v50;
LABEL_204:
        v52 = MiMakeProtectionMask(v50);
        ProtectionMask = v52;
        if ( v52 == -1 )
          goto LABEL_280;
        goto LABEL_207;
      }
      return 3221225541LL;
    }
    return 3221225716LL;
  }
  if ( (a5 & 0x80000) != 0 && v13 != 0x80000 || (a5 & 0x1000000) != 0 && v13 != 0x1000000 )
    return 3221225715LL;
  if ( (a5 & 0x20400000) == 0x20400000 )
  {
    v14 = (a5 & 0x800000) == 0;
    goto LABEL_291;
  }
  if ( (a5 & 0x20000000) != 0 )
  {
    if ( (a5 & 0x1000) != 0 )
    {
      v14 = (a5 & 0xE00000) == 0;
LABEL_291:
      if ( !v14 )
        return 3221225715LL;
      goto LABEL_36;
    }
  }
  else
  {
    if ( (a5 & 0x800000) == 0 )
    {
      if ( (a5 & 0x200000) != 0 )
      {
        if ( (a5 & 0x400000) != 0 || (a5 & 0x2000) == 0 )
          return 3221225715LL;
      }
      else if ( (a5 & 0x400000) != 0 )
      {
        if ( (a5 & 0x2000) == 0 || (a5 & 0xFFAFDF80) != 0 )
          return 3221225715LL;
        v15 = a6;
        v68 = a6;
        if ( a6 != 4 )
          return 3221225716LL;
        goto LABEL_37;
      }
      goto LABEL_36;
    }
    if ( (a5 & 0x600000) == 0 )
    {
      v15 = a6;
      v68 = a6;
      if ( (a6 & 0xFFFFF9F9) != 0 )
        return 3221225541LL;
      goto LABEL_37;
    }
  }
  return 3221225715LL;
}
