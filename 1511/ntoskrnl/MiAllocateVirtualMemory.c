/*
 * XREFs of MiAllocateVirtualMemory @ 0x140419B20
 * Callers:
 *     NtAllocateVirtualMemory @ 0x140419AD0 (NtAllocateVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404F3C18 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140037DA0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140037FE4 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140037FF8 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiFlushRelease @ 0x140098554 (MiFlushRelease.c)
 *     MiFlushAcquire @ 0x1400985E0 (MiFlushAcquire.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     MiInsertPrivateVad @ 0x1400BC014 (MiInsertPrivateVad.c)
 *     RtlFindMostSignificantBit @ 0x1400D0454 (RtlFindMostSignificantBit.c)
 *     MiResetVirtualMemory @ 0x1400EEF4C (MiResetVirtualMemory.c)
 *     MiAllowProtectionChange @ 0x1400F5AE4 (MiAllowProtectionChange.c)
 *     MiArbitraryCodeBlocked @ 0x1400F5BF8 (MiArbitraryCodeBlocked.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 *     MiCheckSecuredVad @ 0x14047BB18 (MiCheckSecuredVad.c)
 *     MiCreateWriteWatchView @ 0x140482F1C (MiCreateWriteWatchView.c)
 *     MiCommitPagefileBackedSection @ 0x14049C528 (MiCommitPagefileBackedSection.c)
 *     MiAdvanceVadHint @ 0x14049D2A0 (MiAdvanceVadHint.c)
 *     MiCreateRotateView @ 0x1404C40C4 (MiCreateRotateView.c)
 *     MiLogMemResetInfo @ 0x140623740 (MiLogMemResetInfo.c)
 *     MiFreeRotateView @ 0x140623DAC (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x140623EA4 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x14062686C (MiAllocateAweInfo.c)
 *     MiCommitEnclavePages @ 0x140628FF8 (MiCommitEnclavePages.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 *     PerfInfoLogVirtualAlloc @ 0x1406626C0 (PerfInfoLogVirtualAlloc.c)
 */

NTSTATUS __fastcall MiAllocateVirtualMemory(
        __int64 a1,
        unsigned __int64 *a2,
        void *a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        KPROCESSOR_MODE a7,
        unsigned int a8,
        _QWORD *a9)
{
  int v9; // r12d
  int v10; // eax
  char v11; // bl
  unsigned int v12; // r13d
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned __int64 *v15; // r8
  LARGE_INTEGER *v16; // r9
  void *v17; // r10
  _KPROCESS *v18; // r11
  KPROCESSOR_MODE v19; // dl
  _QWORD *v20; // rcx
  _QWORD *p_QuadPart; // rcx
  unsigned __int64 v22; // r14
  unsigned __int64 QuadPart; // rsi
  _KPROCESS *v24; // rax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned int *v28; // rax
  ULONG_PTR v29; // r13
  unsigned int v30; // r9d
  int v31; // edx
  __int64 v32; // rax
  char v33; // cl
  int v34; // ecx
  unsigned int v35; // r8d
  int inserted; // r14d
  PVOID v37; // r12
  NTSTATUS result; // eax
  PVOID PoolWithTag; // rax
  _QWORD *v40; // rcx
  PVOID v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // r9
  _DWORD *v44; // r13
  unsigned __int64 v45; // r10
  PVOID v46; // rsi
  unsigned int v47; // r8d
  int v48; // edx
  unsigned int v49; // eax
  unsigned int v50; // edx
  __int64 v51; // r14
  int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  void *v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // r8
  _QWORD *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  int Object; // [rsp+28h] [rbp-1A0h]
  int HandleInformation; // [rsp+30h] [rbp-198h]
  PVOID v65; // [rsp+50h] [rbp-178h] BYREF
  unsigned int v66; // [rsp+58h] [rbp-170h]
  unsigned __int8 v67; // [rsp+5Ch] [rbp-16Ch] BYREF
  char v68; // [rsp+5Dh] [rbp-16Bh]
  unsigned int ProtectionMask; // [rsp+60h] [rbp-168h]
  PVOID Process; // [rsp+68h] [rbp-160h]
  __int64 v71; // [rsp+70h] [rbp-158h] BYREF
  unsigned __int64 v72; // [rsp+78h] [rbp-150h] BYREF
  PVOID P; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v74; // [rsp+88h] [rbp-140h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-138h]
  PVOID v76; // [rsp+98h] [rbp-130h]
  _QWORD *v77; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v78; // [rsp+A8h] [rbp-120h]
  __int64 v79; // [rsp+B0h] [rbp-118h] BYREF
  int v80; // [rsp+B8h] [rbp-110h] BYREF
  int v81; // [rsp+BCh] [rbp-10Ch] BYREF
  LARGE_INTEGER v82; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-100h]
  unsigned __int64 *v84; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 *v85; // [rsp+D8h] [rbp-F0h]
  unsigned __int64 v86; // [rsp+E8h] [rbp-E0h] BYREF
  unsigned __int64 v87; // [rsp+F0h] [rbp-D8h] BYREF
  unsigned __int64 v88[2]; // [rsp+F8h] [rbp-D0h] BYREF
  LARGE_INTEGER v89; // [rsp+108h] [rbp-C0h]
  _QWORD v90[9]; // [rsp+110h] [rbp-B8h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v91; // [rsp+158h] [rbp-70h] BYREF

  v85 = a4;
  v76 = a3;
  v84 = a2;
  v83 = a1;
  v77 = a9;
  if ( a3
    && ((unsigned __int64)a3 < 0x20
      ? (v54 = (unsigned __int64)a3 + 32)
      : (v54 = 63 - RtlFindMostSignificantBit((ULONGLONG)a3)),
        v76 = (PVOID)v54,
        v54 > 0x35) )
  {
    v10 = -1073741811;
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  LODWORD(v71) = v10;
  if ( v10 < 0 )
    return -1073741583;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = a5 & 0x7F;
  if ( v12 > (unsigned __int16)KeNumberNodes )
    return -1073741581;
  v13 = a5 & 0xFFFFFF80;
  if ( (a5 & 0xDE07CF80) != 0 || (a5 & 0x1083000) == 0 )
    return -1073741581;
  if ( (a5 & 0x21E80000) == 0 )
  {
LABEL_8:
    v14 = a6;
    v66 = a6;
    goto LABEL_9;
  }
  if ( (a5 & 0x80000) != 0 && v13 != 0x80000 || (a5 & 0x1000000) != 0 && v13 != 0x1000000 )
    return -1073741581;
  if ( (a5 & 0x20000000) != 0 )
  {
    if ( (a5 & 0x1000) != 0 && (a5 & 0xE00000) == 0 )
      goto LABEL_8;
    return -1073741581;
  }
  if ( (a5 & 0x800000) != 0 )
  {
    if ( (a5 & 0x600000) != 0 )
      return -1073741581;
    v14 = a6;
    v66 = a6;
    if ( (a6 & 0xFFFFF9F9) != 0 )
      return -1073741755;
  }
  else
  {
    if ( (a5 & 0x200000) != 0 )
    {
      if ( (a5 & 0x400000) == 0 && (a5 & 0x2000) != 0 )
        goto LABEL_8;
      return -1073741581;
    }
    if ( (a5 & 0x400000) == 0 )
      goto LABEL_8;
    if ( (a5 & 0x2000) == 0 || (a5 & 0xFFAFDF80) != 0 )
      return -1073741581;
    v14 = a6;
    v66 = a6;
    if ( a6 != 4 )
      return -1073741580;
  }
LABEL_9:
  v67 = 1;
  v68 = 0;
  if ( (v14 & 0x40000000) == 0 )
    goto LABEL_10;
  if ( (v14 & 0xF0) == 0 )
    return -1073741580;
  v14 &= ~0x40000000u;
  v67 = 0;
  v66 = v14;
LABEL_10:
  ProtectionMask = MiMakeProtectionMask(v14);
  if ( ProtectionMask == -1 )
    return -1073741755;
  v19 = a7;
  if ( a7 )
  {
    v20 = v15;
    if ( (unsigned __int64)v15 >= MmUserProbeAddress )
      v20 = (_QWORD *)MmUserProbeAddress;
    *v20 = *v20;
    p_QuadPart = &v16->QuadPart;
    if ( (unsigned __int64)v16 >= MmUserProbeAddress )
      p_QuadPart = (_QWORD *)MmUserProbeAddress;
    *p_QuadPart = *p_QuadPart;
  }
  v22 = *v15;
  v78 = v22;
  v90[8] = v22;
  v89 = *v16;
  QuadPart = v89.QuadPart;
  v82 = v89;
  if ( (char *)v22 > (char *)MmHighestUserAddress - 0x10000 )
    return -1073741584;
  if ( (unsigned __int64)MmHighestUserAddress - v22 - 0xFFFF < v89.QuadPart || !v89.QuadPart )
    return -1073741582;
  if ( v17 == (void *)-1LL )
  {
    v24 = v18;
    goto LABEL_22;
  }
  result = ObReferenceObjectByHandleWithTag(v17, 8u, (POBJECT_TYPE)PsProcessType, a7, 0x6D566D4Du, &v65, 0LL);
  LODWORD(v71) = result;
  if ( result >= 0 )
  {
    v24 = (_KPROCESS *)v65;
    v19 = a7;
    v18 = (_KPROCESS *)Process;
LABEL_22:
    v65 = v24;
    v25 = 0LL;
    v74 = 0LL;
    if ( (a5 & 0x20000000) != 0 )
    {
      if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v19) )
      {
        inserted = -1073741727;
        v37 = v65;
        goto LABEL_163;
      }
      v24 = (_KPROCESS *)v65;
      v18 = (_KPROCESS *)Process;
    }
    if ( v18 != v24 )
    {
      KiStackAttachProcess(v24, 0LL, (__int64)&v91);
      v11 = 2;
      v18 = (_KPROCESS *)Process;
    }
    if ( (a5 & 0x1000) != 0 && !v22 )
      v13 = a5 & 0xFFFFDF80 | 0x2000;
    if ( (v13 & 0x2000) == 0 )
    {
      if ( v13 == 0x80000 || v13 == 0x1000000 )
      {
        if ( QuadPart + v22 < 0x1000 )
        {
          inserted = -1073741800;
          goto LABEL_162;
        }
        v26 = ((QuadPart + v22) & 0xFFFFFFFFFFFFF000uLL) - 1;
        v72 = v26;
        v25 = (v22 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( v25 > v26 )
        {
          inserted = -1073741800;
          goto LABEL_162;
        }
      }
      else
      {
        v26 = (QuadPart + v22 - 1) | 0xFFF;
        v72 = v26;
        v25 = v22 & 0xFFFFFFFFFFFFF000uLL;
      }
      QuadPart = v26 - v25 + 1;
      v74 = v25 >> 12;
      v27 = v26 >> 12;
      v77 = (_QWORD *)(v26 >> 12);
      v28 = MiObtainReferencedVad(v25, &v71);
      v29 = (ULONG_PTR)v28;
      if ( !v28 )
      {
        inserted = v71;
        if ( (_DWORD)v71 == -1073741664 )
          inserted = -1073741800;
        goto LABEL_162;
      }
      if ( v27 > (v28[7] | ((unsigned __int64)*((unsigned __int8 *)v28 + 33) << 32)) )
      {
        inserted = -1073741800;
        goto LABEL_191;
      }
      v30 = v28[12];
      v31 = v30 & 7;
      if ( v31 == 3 && (v30 & 0x40000) != 0 )
      {
        v37 = v65;
        v52 = MiCommitEnclavePages((_DWORD)v65, (_DWORD)v28, v25, v72, v13, ProtectionMask);
LABEL_124:
        inserted = v52;
        LODWORD(v71) = v52;
        if ( v52 >= 0 )
        {
          MiUnlockAndDereferenceVad((PVOID)v29);
          goto LABEL_48;
        }
        goto LABEL_188;
      }
      if ( ((1 << v31) & 0x55) == 0 )
      {
        inserted = -1073741800;
        goto LABEL_191;
      }
      v32 = v28[13];
      LODWORD(v32) = v32 & 0x7FFFFFFF;
      if ( (v32 | ((unsigned __int64)*(unsigned __int8 *)(v29 + 34) << 31)) >= 0x7FFFFFFFELL )
      {
        inserted = -1073741800;
        goto LABEL_191;
      }
      if ( v31 != 6 )
      {
        v33 = ProtectionMask;
LABEL_39:
        if ( (v13 & 0x1080000) == 0 )
        {
          v11 &= ~4u;
          if ( (v33 & 2) != 0 )
          {
            inserted = MiAllowProtectionChange((__int64)v65, (__int64)Process, v29, v33, v25, v72);
            if ( inserted < 0 )
              goto LABEL_191;
            if ( (!v67 || (*(_DWORD *)(v29 + 48) & 0x10) == 0) && MiIsProcessCfgEnabled() )
            {
              if ( (*(_DWORD *)(v29 + 48) & 0x4000) != 0 )
              {
                inserted = MiCheckSecuredVad(v29, v78, QuadPart, ProtectionMask);
                if ( inserted < 0 )
                  goto LABEL_191;
                v11 |= 4u;
              }
              v88[0] = v25;
              v88[1] = v72;
              inserted = MiCommitVadCfgBits(v29, v88, &v67);
              if ( inserted < 0 )
                goto LABEL_191;
              v68 = 1;
            }
          }
          v34 = *(_DWORD *)(v29 + 48);
          if ( (v34 & 0x8000) != 0 )
          {
            v35 = v66;
            if ( (v66 & 0x88) != 0
              || (v34 & 7) == 6 && (v66 & 0xFFFFF9F9) != 0
              || (v34 & 0x4000) != 0 && MiLocateVadEvent(v29, 64) )
            {
              goto LABEL_261;
            }
            LODWORD(v72) = 0;
            inserted = MiCommitExistingVad(v29, v78, v82.QuadPart, v35, &v72);
            LODWORD(v71) = inserted;
            if ( inserted >= 0 )
            {
              MiUnlockAndDereferenceVad((PVOID)v29);
              if ( (_DWORD)v72 == 1 )
              {
                v87 = v25;
                v86 = QuadPart;
                v55 = v66;
                if ( v68 && !v67 )
                  v55 = v66 | 0x40000000;
                v37 = v65;
                MiProtectVirtualMemory((__int64)Process, (__int64)v65, &v87, (__int64 *)&v86, v55, &P);
                goto LABEL_48;
              }
              goto LABEL_47;
            }
            goto LABEL_191;
          }
          v50 = v66;
          if ( (v66 & 0x600) == 0 )
          {
            if ( (*(_DWORD *)(v29 + 48) & 0x4000) != 0 && (v11 & 4) == 0 )
            {
              inserted = MiCheckSecuredVad(v29, v78, QuadPart, ProtectionMask);
              if ( inserted < 0 )
                goto LABEL_191;
              v50 = v66;
            }
            v51 = **(_QWORD **)(v29 + 72);
            Process = (PVOID)v51;
            if ( !*(_QWORD *)(v51 + 64) )
            {
              v37 = v65;
              v52 = MiCommitPagefileBackedSection(
                      (_DWORD)v65,
                      v29,
                      v25,
                      v72,
                      v50,
                      Object,
                      HandleInformation,
                      (__int64)&v79,
                      (__int64)&v80);
              goto LABEL_124;
            }
            if ( *(__int64 *)(v29 + 120) >= 0 )
            {
              inserted = -1073741791;
            }
            else
            {
              v82.QuadPart = v72
                           + 1
                           + ((unsigned __int64)(*(_DWORD *)(v29 + 64) & 0xFFFFFF) << 16)
                           - ((*(unsigned int *)(v29 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 32) << 32)) << 12);
              if ( (unsigned int)MiFlushAcquire(v51, 0LL, 0LL) )
              {
                v76 = 0LL;
                if ( (*(_DWORD *)(v29 + 48) & 0x8000) == 0 )
                {
                  v56 = *(void **)(v29 + 128);
                  if ( v56 )
                  {
                    v76 = *(PVOID *)(v29 + 128);
                    ObfReferenceObject(v56);
                  }
                }
                MiUnlockVad((__int64)CurrentThread, v29);
                memset(v90, 0, 0x40uLL);
                if ( v76 )
                {
                  if ( (*(_DWORD *)(v51 + 56) & 0x20) != 0 )
                    v90[5] = (unsigned __int64)v76 | 1;
                  else
                    v90[5] = (unsigned __int64)v76 | 2;
                }
                else
                {
                  v90[5] = v51;
                }
                LODWORD(v90[7]) = *(_DWORD *)(v51 + 56);
                HIDWORD(v90[7]) = HIDWORD(v90[7]) & 0xFFFFF000 | 4;
                inserted = MmExtendSection((__int64)v90, &v82, 0);
                if ( v76 )
                  ObfDereferenceObject(v76);
                MiLockVad((__int64)CurrentThread, v29);
                MiFlushRelease((__int64)Process, 0LL, 0LL);
                if ( inserted >= 0
                  && !MiVadDeleted(v29)
                  && v74 >= v59
                  && v74 <= v57
                  && (unsigned __int64)v77 <= v57
                  && (unsigned __int64)v77 >= v59
                  && ((*(_DWORD *)(v29 + 48) & 0x4000) == 0
                   || (int)MiCheckSecuredVad(v58, v78, QuadPart, ProtectionMask) >= 0)
                  && *(__int64 *)(v29 + 120) < 0 )
                {
                  v37 = v65;
                  inserted = MiSetProtectionOnSection((__int64)v65, v29, v25, v72, v66, 0, &v79, &v80);
LABEL_188:
                  MiUnlockAndDereferenceVad((PVOID)v29);
                  goto LABEL_163;
                }
              }
              else
              {
                inserted = -1073741670;
              }
            }
LABEL_191:
            v37 = v65;
            goto LABEL_188;
          }
LABEL_261:
          inserted = -1073741755;
          goto LABEL_191;
        }
        inserted = MiResetVirtualMemory(v25, v72, v29, v13);
        LODWORD(v71) = inserted;
        MiUnlockAndDereferenceVad((PVOID)v29);
        if ( inserted >= 0 )
        {
LABEL_47:
          v37 = v65;
LABEL_48:
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          {
            if ( (v13 & 0x3000) != 0 )
            {
              PerfInfoLogVirtualAlloc(v25, QuadPart, v37, v13);
            }
            else if ( (v13 & 0x1080000) != 0 )
            {
              MiLogMemResetInfo(v25, QuadPart, v13);
            }
          }
          if ( (v11 & 2) != 0 )
            KiUnstackDetachProcess(&v91, 0LL);
          if ( v83 != -1 )
            ObfDereferenceObjectWithTag(v37, 0x6D566D4Du);
          *v85 = QuadPart;
          *v84 = v25;
          return inserted;
        }
LABEL_162:
        v37 = v65;
        goto LABEL_163;
      }
      v47 = v66 & 0xFFFFF9FF;
      v66 &= 0xFFFFF9FF;
      v48 = (unsigned __int8)v30 >> 6;
      if ( (v30 & 0x38) != 0 && v48 == 3 )
      {
        v47 |= 0x400u;
      }
      else
      {
        if ( v48 != 1 )
        {
LABEL_116:
          v49 = MiMakeProtectionMask(v47);
          v33 = v49;
          ProtectionMask = v49;
          if ( v49 == -1 )
            goto LABEL_261;
          goto LABEL_39;
        }
        v47 |= 0x200u;
      }
      v66 = v47;
      goto LABEL_116;
    }
    if ( (v66 & 0x88) != 0 )
    {
      inserted = -1073741755;
      v37 = v65;
      goto LABEL_163;
    }
    v80 = ProtectionMask & 2;
    if ( (ProtectionMask & 2) != 0 )
    {
      inserted = MiArbitraryCodeBlocked((__int64)v18);
      if ( inserted < 0 )
        goto LABEL_162;
      v22 = v78;
    }
    v71 = 0x10000LL;
    if ( v22 )
    {
      v66 = v13 & 0x20000000;
      if ( (v13 & 0x20000000) != 0 )
      {
        if ( (QuadPart & 0x1FFFFF) != 0 )
        {
          inserted = -1073741582;
          v37 = v65;
          goto LABEL_163;
        }
        v71 = 0x200000LL;
        v25 = v22 & 0xFFFFFFFFFFE00000uLL;
        v53 = (v22 & 0xFFFFFFFFFFE00000uLL) + QuadPart - 1;
      }
      else
      {
        v25 = v22 & 0xFFFFFFFFFFFF0000uLL;
        v53 = (QuadPart + v22 - 1) | 0xFFF;
      }
      v79 = v53;
      v74 = v25;
      if ( v25 < 0x10000 && !*((_QWORD *)v65 + 224) )
      {
        inserted = -1073741584;
        v37 = v65;
        goto LABEL_163;
      }
      Process = (PVOID)((((v53 - v25) & 0xFFF) != 0) + ((__int64)(v53 - v25) >> 12));
    }
    else
    {
      QuadPart = (QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
      Process = (PVOID)(((QuadPart & 0xFFF) != 0) + (QuadPart >> 12));
      v79 = 0LL;
      v66 = v13 & 0x20000000;
      if ( (v13 & 0x20000000) != 0 )
      {
        if ( (QuadPart & 0x1FFFFF) != 0 )
        {
          inserted = -1073741582;
          v37 = v65;
          goto LABEL_163;
        }
        v71 = 0x200000LL;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      inserted = -1073741670;
      v37 = v65;
      goto LABEL_163;
    }
    memset(PoolWithTag, 0, 0x40uLL);
    v40 = P;
    *((_QWORD *)P + 2) = -2LL;
    v40[5] = 0LL;
    *((_DWORD *)v40 + 12) ^= (*((_DWORD *)v40 + 12) ^ (v12 << 8)) & 0x3F00;
    if ( (a5 & 0x7F) != 0 )
      MEMORY[0xFFFFF580108042A8] = 1;
    v41 = Process;
    if ( (v13 & 0x1000) != 0 )
    {
      v42 = (unsigned __int64)Process;
      *((_DWORD *)v40 + 13) |= 0x80000000;
    }
    else
    {
      v42 = 0LL;
    }
    v43 = ProtectionMask;
    *((_DWORD *)v40 + 12) = *((_DWORD *)v40 + 12) ^ (*((_DWORD *)v40 + 12) ^ (8 * ProtectionMask)) & 0xF8 | 0x8000;
    if ( (a8 & 1) != 0 )
      v42 = 0x7FFFFFFFELL;
    *((_DWORD *)v40 + 13) ^= (v42 ^ *((_DWORD *)v40 + 13)) & 0x7FFFFFFF;
    *((_BYTE *)v40 + 34) = v42 >> 31;
    Process = 0LL;
    LODWORD(v72) = v13 & 0x400000;
    if ( (v13 & 0x400000) == 0 )
    {
      if ( !v66 )
      {
        if ( (v13 & 0x800000) == 0 )
        {
          if ( (v13 & 0x200000) != 0 )
          {
            inserted = MiCreateWriteWatchView(v65, v40, v41);
            if ( inserted < 0 )
            {
              ExFreePoolWithTag(P, 0);
              goto LABEL_162;
            }
            v44 = P;
            *((_DWORD *)P + 12) = *((_DWORD *)P + 12) & 0xFFFFFFF8 | 4;
            v11 |= 8u;
            v22 = v78;
          }
          else
          {
            v44 = v40;
          }
LABEL_72:
          v81 = 0;
          LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v65);
          if ( (*((_DWORD *)v65 + 193) & 0x20) != 0 )
          {
            inserted = -1073741558;
            goto LABEL_228;
          }
          if ( v22 )
          {
            if ( MiCheckForConflictingVadExistence() )
            {
              inserted = -1073741800;
              goto LABEL_228;
            }
          }
          else
          {
            inserted = MiSelectUserAddress(
                         v13,
                         (_DWORD)v76,
                         QuadPart,
                         v71,
                         ProtectionMask,
                         a8,
                         (__int64)&v81,
                         (__int64)&v74);
            if ( inserted < 0 )
            {
              v25 = v74;
              goto LABEL_228;
            }
            if ( !v66 )
              v9 = v81;
            v25 = v74;
            v79 = (QuadPart + v74 - 1) | 0xFFF;
            v45 = v79;
          }
          v74 = v25 >> 12;
          v44[6] = v25 >> 12;
          *((_BYTE *)v44 + 32) = v25 >> 44;
          v76 = (PVOID)(v45 >> 12);
          v44[7] = v45 >> 12;
          *((_BYTE *)v44 + 33) = v45 >> 44;
          inserted = MiInsertVadCharges((__int64)v44, (struct _KPROCESS *)v65);
          LODWORD(v71) = inserted;
          if ( inserted >= 0 )
          {
            v46 = v65;
            MiInsertPrivateVad((unsigned __int64)v44, (__int64)Process, (__int64)v65);
            if ( (v44[12] & 7) == 5 )
              MiMapUserLargePages((__int64)v44, (v44[12] >> 8) & 0x3F, (__int64)v46);
            if ( v9 == 1 )
              MiAdvanceVadHint(v74, v76, a8);
            QuadPart = v79 - v25 + 1;
            v11 |= 1u;
            if ( !v80 || !MiIsProcessCfgEnabled() )
            {
              if ( v77 )
                MiLockVad((__int64)CurrentThread, (__int64)v44);
              v37 = v65;
              goto LABEL_87;
            }
            MiLockVad((__int64)CurrentThread, (__int64)v44);
            v37 = v65;
            UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v65);
            v11 &= ~1u;
            inserted = MiCommitVadCfgBits((__int64)v44, 0LL, &v67);
            LODWORD(v71) = inserted;
            if ( inserted >= 0 )
            {
              if ( v77 )
              {
LABEL_157:
                UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v37);
                v11 &= ~1u;
                MiReferenceVad((__int64)v44);
                *v77 = v44;
LABEL_88:
                if ( (v11 & 1) != 0 )
                  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v37);
                goto LABEL_48;
              }
              MiUnlockVad((__int64)CurrentThread, (__int64)v44);
LABEL_87:
              if ( !v77 )
                goto LABEL_88;
              goto LABEL_157;
            }
            MiReferenceVad((__int64)v44);
            MiDeleteVad(v61, 0, v62);
LABEL_163:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (v13 & 0x1000000) != 0 && inserted == -1073740748 )
              MiLogMemResetInfo(v25, QuadPart, 0LL);
            if ( (v11 & 2) != 0 )
              KiUnstackDetachProcess(&v91, 0LL);
            if ( v83 != -1 )
              ObfDereferenceObjectWithTag(v37, 0x6D566D4Du);
            return inserted;
          }
LABEL_228:
          v37 = v65;
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v65);
          if ( (v11 & 8) != 0 )
          {
            MiFreeVadEventBitmap(v37, v44, 4LL);
          }
          else if ( (v13 & 0x800000) != 0 )
          {
            MiFreeRotateView(v44);
          }
          else if ( v66 )
          {
            MiFreeLargePageView(v37, v44, 0LL);
          }
          ExFreePoolWithTag(v44, 0);
          if ( (_DWORD)v72 )
            ExFreePoolWithTag(Process, 0);
          goto LABEL_163;
        }
        if ( (unsigned int)MiCreateRotateView(v40) )
        {
          v44 = P;
          *((_DWORD *)P + 12) = *((_DWORD *)P + 12) & 0xFFFFFFF8 | 6;
          goto LABEL_72;
        }
LABEL_222:
        ExFreePoolWithTag(P, 0);
        inserted = -1073741670;
        goto LABEL_162;
      }
      inserted = MiCreateLargePageVad(v65, v40, a5 & 0x7F, v43);
      if ( inserted >= 0 )
      {
        v44 = P;
        *((_DWORD *)P + 12) = *((_DWORD *)P + 12) & 0xFFFFFFF8 | 5;
        v22 = v78;
        goto LABEL_72;
      }
LABEL_218:
      ExFreePoolWithTag(P, 0);
      v37 = v65;
      goto LABEL_163;
    }
    if ( !*((_QWORD *)v65 + 129) )
    {
      inserted = MiAllocateAweInfo(v40, v41);
      if ( inserted < 0 )
        goto LABEL_218;
      v22 = v78;
    }
    v60 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x76706D4Du);
    Process = v60;
    if ( v60 )
    {
      v44 = P;
      *((_DWORD *)P + 12) = *((_DWORD *)P + 12) & 0xFFFBFFF8 | 3;
      v60[3] = v44;
      goto LABEL_72;
    }
    goto LABEL_222;
  }
  return result;
}
