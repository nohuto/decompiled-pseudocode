/*
 * XREFs of IrqArbAddAllocation @ 0x1C0089870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C00222EC (WPP_RECORDER_SF_Dq.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C002236C (WPP_RECORDER_SF_DDDssDssqq.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00225D8 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C00272A4 (ProcessorDeleteDeviceIdtAssignment.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00554D8 (WPP_RECORDER_SF_d.c)
 *     AcpiCheckExternalConnection @ 0x1C0085584 (AcpiCheckExternalConnection.c)
 *     IcSetPossibleInput @ 0x1C00884D0 (IcSetPossibleInput.c)
 *     IcIsInterruptTypeSecondary @ 0x1C00895C8 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C008A05C (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C008A248 (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C008B21C (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C008B8E0 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcAddPossibleReference @ 0x1C008C398 (IcAddPossibleReference.c)
 *     IcGetPossibleInput @ 0x1C008C3E4 (IcGetPossibleInput.c)
 *     ProcessorGetDestinationMode @ 0x1C008C5B4 (ProcessorGetDestinationMode.c)
 *     MsiGetTargetInfo @ 0x1C008C5E8 (MsiGetTargetInfo.c)
 *     IcRemovePossibleReference @ 0x1C00908EC (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00A1CFC (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A1D18 (LinkNodeGetPossibleResources.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2, int a3)
{
  int IsPciDevice; // esi
  int v5; // r15d
  _DWORD *v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  ULONGLONG v10; // rcx
  char *UserData; // rdi
  unsigned int v12; // r12d
  __int64 v13; // rdx
  char v14; // bl
  int PossibleInput; // eax
  __int16 v16; // r9
  int v17; // ebx
  unsigned __int8 v18; // r15
  __int64 v19; // r8
  bool v20; // zf
  ULONGLONG v21; // rcx
  BOOL v22; // edx
  __int64 v23; // r10
  char v24; // al
  unsigned int v25; // r12d
  ULONGLONG v26; // r9
  unsigned int v27; // ebx
  int v28; // eax
  POOL_TYPE v29; // r10d
  int v30; // edx
  char *PoolWithTag; // rax
  int v32; // ecx
  char v33; // r15
  int v34; // eax
  int v35; // eax
  int v36; // ebx
  UCHAR v37; // si
  const char *v38; // r9
  const char *v39; // r8
  const char *v40; // rdx
  NTSTATUS v41; // eax
  int TargetInfo; // eax
  int v43; // r15d
  char *v44; // rbx
  __int128 v45; // xmm0
  BOOL v46; // eax
  int v47; // ecx
  unsigned int v48; // eax
  int DeviceIrql; // eax
  int v50; // eax
  int PossibleResources; // eax
  unsigned int v52; // ebx
  int v53; // ebx
  __int64 Flags; // [rsp+20h] [rbp-E0h]
  PVOID Owner; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+80h] [rbp-80h] BYREF
  char v57[3]; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned int v58; // [rsp+84h] [rbp-7Ch]
  char v59; // [rsp+88h] [rbp-78h]
  char v60; // [rsp+89h] [rbp-77h]
  char v61; // [rsp+8Ah] [rbp-76h]
  unsigned int v62; // [rsp+8Ch] [rbp-74h] BYREF
  char v63; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  BOOL v65; // [rsp+A0h] [rbp-60h] BYREF
  int v66; // [rsp+A4h] [rbp-5Ch]
  ULONGLONG v67; // [rsp+A8h] [rbp-58h]
  __int64 v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  __int128 v70; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  _BYTE v73[32]; // [rsp+E0h] [rbp-20h] BYREF

  v70 = 0uLL;
  v69 = a1;
  v71 = 0LL;
  v72 = 0LL;
  Owner = *(PVOID *)(a2[4] + 32);
  WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, 13);
  v5 = *(_DWORD *)a2;
  v6 = 0LL;
  v7 = *(unsigned int *)a2;
  P = 0LL;
  v60 = 0;
  v61 = 0;
  v8 = IrqArbGsivFromIrq(v7);
  v10 = a2[5];
  UserData = 0LL;
  v62 = 0;
  v12 = v8;
  v58 = v8;
  LOBYTE(v66) = 0;
  v13 = *(_QWORD *)(v10 + 40);
  v59 = 0;
  if ( (*(_BYTE *)(v13 + 4) & 0x20) != 0 )
  {
    v14 = 0;
  }
  else
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &v56);
    if ( IsPciDevice < 0 )
      goto LABEL_86;
    v14 = v56;
  }
  if ( (a2[8] & 2) != 0 && v14 )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      20,
      14,
      (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids);
    return;
  }
  LOBYTE(IsPciDevice) = 0;
  v57[0] = 0;
  v65 = IsPciDevice;
  if ( v12 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v12, v13, v57);
    if ( PossibleInput >= 0 )
      v65 = PossibleInput != 263;
  }
  if ( v14 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    v18 = 3;
    if ( (a2[8] & 2) == 0 )
    {
      v50 = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &P, &v62, 1);
      v6 = P;
      LOBYTE(IsPciDevice) = v50;
      if ( v50 < 0 )
        goto LABEL_86;
      if ( !P )
      {
        v19 = v62;
        v58 = v62;
        goto LABEL_20;
      }
      PossibleResources = LinkNodeGetPossibleResources(P, &P, &v56);
      LOBYTE(IsPciDevice) = PossibleResources;
      if ( PossibleResources < 0 )
        goto LABEL_86;
      ExFreePoolWithTag(P, 0);
      v18 = 3;
      if ( (v56 & 2) == 0 )
        v18 = 1;
      if ( (int)LinkNodeGetPossibleGsiv(v6, &v62) < 0 )
      {
        if ( v6[7] )
        {
          LOBYTE(IsPciDevice) = 1;
          goto LABEL_86;
        }
        v6[9] = v12;
      }
      ++v6[7];
      v60 = 1;
    }
LABEL_78:
    v19 = v12;
    goto LABEL_20;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v12, &v62, v9, 1LL) && byte_1C00732E4[8 * v62] != 0xFF )
  {
    v18 = byte_1C00732E4[8 * v62];
    goto LABEL_78;
  }
  v17 = (unsigned __int16)(v16 & *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL));
  if ( IcIsInterruptTypeSecondary(v12) )
  {
    v59 = 1;
    AcpiCheckExternalConnection();
    IsPciDevice = -1073741822;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
    if ( ExternalTranslationInterface )
      IsPciDevice = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(
                      v12,
                      0LL,
                      v73);
    ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
    KeLeaveCriticalRegion();
    if ( IsPciDevice < 0 )
      goto LABEL_86;
    v18 = v73[16] | (v17 != 1);
    goto LABEL_78;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v5, &P) )
  {
    v18 = v17 != 1 ? 3 : 0;
  }
  else
  {
    v18 = (unsigned __int8)P | (v17 != 1);
  }
  v19 = v12;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v18 |= 4u;
LABEL_20:
  v20 = (a2[8] & 2) == 0;
  v56 = 0;
  if ( !v20 )
  {
    v56 = 1;
    if ( v65 )
    {
      if ( (((unsigned __int8)v57[0] ^ v18) & 0xFFFFFFFB) != 0 )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          20,
          15,
          (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids);
        LOBYTE(IsPciDevice) = 1;
        goto LABEL_86;
      }
    }
  }
  v21 = a2[5];
  v22 = 0;
  v62 = 0;
  v23 = *(_QWORD *)(v21 + 40);
  v68 = v23;
  v24 = *(_BYTE *)(v23 + 4);
  if ( (v24 & 2) != 0 )
  {
    v25 = *(_DWORD *)(v23 + 12) - *(_DWORD *)(v23 + 8) + 1;
  }
  else
  {
    v25 = 1;
    v22 = (*(_BYTE *)(v21 + 36) & 1) != 0;
    v62 = v22;
  }
  if ( (v24 & 8) != 0 )
    v62 = v22 | 2;
  LODWORD(P) = 0;
  v26 = a2[9];
  v63 = v18 & 1;
  v67 = v26;
  v57[0] = v18 & 8;
  LODWORD(P) = (((v18 & 1) == 0) ^ (unsigned __int8)(2 * ((v18 & 8) != 0))) & 2 ^ ((v18 & 1) == 0);
  LODWORD(Flags) = v25;
  IsPciDevice = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))ProcessorReserveIdtEntries)(
                  *(_QWORD *)(a2[4] + 32),
                  v23,
                  v19);
  if ( IsPciDevice < 0 )
  {
    if ( v25 <= 1 )
    {
      v27 = v58;
    }
    else
    {
      v25 = 1;
      LODWORD(Owner) = v62;
      v27 = v58;
      IsPciDevice = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, ULONGLONG, int, unsigned int, PVOID, int, __int128 *))ProcessorReserveIdtEntries)(
                      *(_QWORD *)(a2[4] + 32),
                      *(_QWORD *)(a2[5] + 40),
                      v58,
                      v67,
                      1,
                      (unsigned __int8)(((v18 & 1) == 0) ^ (2 * ((v18 & 8) != 0))) & 2u ^ ((v18 & 1) == 0),
                      Owner,
                      1,
                      &v70);
    }
    if ( IsPciDevice < 0 )
      return;
  }
  else
  {
    v27 = v58;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    v29 = PagedPool;
  }
  else
  {
    if ( !v65 )
    {
      v28 = IcSetPossibleInput(v27, (__int64)&v70, v18, (*(_BYTE *)(v68 + 4) & 8) != 0);
      LOBYTE(IsPciDevice) = v28;
      if ( v28 < 0 )
        goto LABEL_86;
    }
    IcAddPossibleReference(v27, (*((unsigned __int8 *)a2 + 64) >> 1) & 1);
    v61 = v29;
  }
  LODWORD(P) = 0;
  if ( (v18 & 4) == 0 )
  {
    v30 = v29;
    if ( ((unsigned __int8)v29 & *(_BYTE *)(a2[5] + 36)) != 0 )
      v30 = 3;
    LODWORD(P) = v30;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(v29, 88LL * (v25 - 1) + 136, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_86;
  memset(PoolWithTag, 0, 0x88uLL);
  *((_DWORD *)UserData + 1) = 4;
  *(_DWORD *)UserData = 1;
  v32 = *((_DWORD *)UserData + 1);
  if ( (*(_DWORD *)(a2[4] + 40) & 0xFFFFFFFD) != 0 )
    v32 = 5;
  *((_DWORD *)UserData + 1) = v32;
  if ( (*(_DWORD *)(a2[5] + 36) & 4) != 0 )
    *((_DWORD *)UserData + 1) |= 2u;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 0x20) != 0 )
    *((_DWORD *)UserData + 1) |= 0x10u;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    *((_DWORD *)UserData + 2) = 3;
    TargetInfo = MsiGetTargetInfo(&v70, HIDWORD(v71), UserData + 16);
    LOBYTE(IsPciDevice) = TargetInfo;
    if ( TargetInfo >= 0 )
    {
      UserData[38] = v72;
      ProcessorGetDestinationMode(&v70, &v65);
      v43 = 0;
      if ( v25 )
      {
        v44 = UserData + 72;
        while ( 1 )
        {
          *((_DWORD *)v44 - 6) = 3;
          v45 = v70;
          *((_DWORD *)v44 - 3) = 0;
          *((_DWORD *)v44 - 2) = 1;
          v46 = v65;
          *(_OWORD *)v44 = v45;
          v47 = v43 + HIDWORD(v71);
          *((_DWORD *)v44 + 12) = v46;
          v48 = v58;
          *((_DWORD *)v44 - 5) = v47;
          *((_DWORD *)v44 + 8) = v43 + v48;
          DeviceIrql = IrqArbGetDeviceIrql(&UserData[88 * v43 + 48], &UserData[88 * v43 + 56]);
          LOBYTE(IsPciDevice) = DeviceIrql;
          if ( DeviceIrql < 0 )
            goto LABEL_86;
          v44 += 88;
          if ( ++v43 >= v25 )
            goto LABEL_53;
        }
      }
      goto LABEL_53;
    }
LABEL_86:
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      20,
      17,
      (__int64)&WPP_3585a71d64e933af8fb821a0f1a30971_Traceguids,
      IsPciDevice);
    v52 = v58;
    if ( HIDWORD(v71) )
      ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v58, HIDWORD(v71), 1);
    if ( v60 )
      --v6[7];
    if ( v61 )
      IcRemovePossibleReference(v52, (*((unsigned __int8 *)a2 + 64) >> 1) & 1);
    if ( UserData )
    {
      if ( !(_BYTE)v66 )
        ExFreePoolWithTag(UserData, 0);
    }
    return;
  }
  if ( v6 )
  {
    *((_DWORD *)UserData + 2) = 2;
    *((_QWORD *)UserData + 2) = v6;
  }
  else
  {
    *((_DWORD *)UserData + 2) = 1;
  }
  *((_DWORD *)UserData + 12) = 0;
  *((_DWORD *)UserData + 13) = HIDWORD(v71);
  *(_OWORD *)(UserData + 72) = v70;
  *((_DWORD *)UserData + 16) = (v59 || v57[0]) && !v63;
  v33 = v18 & 0xA;
  switch ( v33 )
  {
    case 10:
      v34 = 3;
      break;
    case 8:
      v34 = 4;
      break;
    case 2:
      v34 = 2;
      break;
    default:
      v34 = v33 == 0;
      break;
  }
  *((_DWORD *)UserData + 15) = v34;
  *((_DWORD *)UserData + 26) = IrqArbGsivFromIrq(*a2);
  *((_DWORD *)UserData + 27) ^= (*((_DWORD *)UserData + 27) ^ ((unsigned __int8)UserData[4] >> 4) & 1) & 1;
  v35 = IrqArbGetDeviceIrql(UserData + 48, UserData + 56);
  LOBYTE(IsPciDevice) = v35;
  if ( v35 < 0 )
    goto LABEL_86;
LABEL_53:
  v36 = (int)P;
  v37 = v56;
  v38 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
  v39 = "ARBITER_RANGE_SHARE_DRIVER_EXCLUSIVE";
  v40 = "ARBITER_RANGE_BOOT_ALLOCATED";
  if ( ((unsigned __int8)P & 1) == 0 )
    v38 = " ";
  if ( (v56 & 2) == 0 )
    v39 = " ";
  if ( (v56 & 1) == 0 )
    v40 = " ";
  WPP_RECORDER_SF_DDDssDssqq(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v40,
    (__int64)v39,
    (__int64)v38,
    Flags);
  v41 = RtlAddRange(*(PRTL_RANGE_LIST *)(v69 + 48), *a2, a2[1], v37, v36 | 0x10, UserData, *(PVOID *)(a2[4] + 32));
  LOBYTE(IsPciDevice) = v41;
  if ( v41 < 0 )
  {
    v53 = (unsigned __int8)v66;
    if ( v41 != -1073741823 )
      v53 = 1;
    v66 = v53;
    goto LABEL_86;
  }
}
