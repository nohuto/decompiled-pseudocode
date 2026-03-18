/*
 * XREFs of IrqArbAddAllocation @ 0x1C006BB50
 * Callers:
 *     <none>
 * Callees:
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0019848 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C00198FC (ProcessorDeleteDeviceIdtAssignment.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AcpiCheckExternalConnection @ 0x1C006AC78 (AcpiCheckExternalConnection.c)
 *     IcIsInterruptTypeSecondary @ 0x1C006B8DC (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C006C23C (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C006C42C (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C006CFA4 (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C006D670 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     IcSetPossibleInput @ 0x1C006DC58 (IcSetPossibleInput.c)
 *     IcAddPossibleReference @ 0x1C006E138 (IcAddPossibleReference.c)
 *     IcGetPossibleInput @ 0x1C006E184 (IcGetPossibleInput.c)
 *     MsiGetTargetInfo @ 0x1C006E734 (MsiGetTargetInfo.c)
 *     ProcessorGetDestinationMode @ 0x1C006E7D8 (ProcessorGetDestinationMode.c)
 *     IcRemovePossibleReference @ 0x1C006E80C (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C007FFDC (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C007FFF8 (LinkNodeGetPossibleResources.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2)
{
  int v2; // ebx
  BOOL v3; // r13d
  _DWORD *v4; // r15
  char v5; // r14
  char v6; // r13
  unsigned int v7; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *UserData; // rdi
  unsigned int v14; // r12d
  __int64 v15; // rdx
  UCHAR v16; // bl
  int PossibleInput; // eax
  unsigned __int8 v18; // r14
  __int16 v19; // r9
  int v20; // ebx
  int v21; // r11d
  bool v22; // zf
  ULONGLONG v23; // rcx
  int v24; // edx
  __int64 v25; // r10
  unsigned int v26; // r13d
  void *v27; // r8
  int v28; // ebx
  int v29; // eax
  __int64 v30; // r8
  POOL_TYPE v31; // r11d
  int v32; // edx
  _DWORD *PoolWithTag; // rax
  int v34; // ecx
  char v35; // r14
  int v36; // eax
  int v37; // r9d
  NTSTATUS v38; // eax
  __int64 v39; // r14
  _DWORD *v40; // rbx
  __int128 v41; // xmm0
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  bool v45; // r14
  int v46; // ebx
  char v47; // [rsp+50h] [rbp-59h]
  char v48; // [rsp+51h] [rbp-58h]
  UCHAR Attributes; // [rsp+52h] [rbp-57h] BYREF
  unsigned __int8 v50; // [rsp+53h] [rbp-56h] BYREF
  int v51; // [rsp+54h] [rbp-55h]
  unsigned int v52; // [rsp+58h] [rbp-51h] BYREF
  char v53; // [rsp+5Ch] [rbp-4Dh]
  char v54; // [rsp+5Dh] [rbp-4Ch]
  int v55; // [rsp+60h] [rbp-49h] BYREF
  BOOL v56; // [rsp+64h] [rbp-45h]
  PVOID P; // [rsp+68h] [rbp-41h] BYREF
  __int64 v58; // [rsp+70h] [rbp-39h]
  __int64 v59; // [rsp+78h] [rbp-31h]
  __int128 v60; // [rsp+80h] [rbp-29h] BYREF
  __int64 v61; // [rsp+90h] [rbp-19h]
  __int64 v62; // [rsp+98h] [rbp-11h]
  _BYTE v63[32]; // [rsp+A0h] [rbp-9h] BYREF

  v60 = 0uLL;
  v4 = 0LL;
  v61 = 0LL;
  v5 = 0;
  v62 = 0LL;
  v6 = 0;
  v7 = *(_DWORD *)a2;
  v58 = a1;
  P = 0LL;
  v48 = 0;
  v47 = 0;
  v55 = v7;
  v9 = IrqArbGsivFromIrq(v7);
  v12 = *(_QWORD *)(v11 + 40);
  UserData = 0LL;
  v52 = 0;
  LOBYTE(v2) = 0;
  v14 = v9;
  v51 = v2;
  v53 = 0;
  v15 = *(_QWORD *)(v12 + 40);
  if ( (*(_BYTE *)(v15 + 4) & 0x20) != 0 )
  {
    v16 = 0;
  }
  else
  {
    if ( (int)PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &Attributes) < 0 )
    {
LABEL_107:
      v21 = 1;
      goto LABEL_108;
    }
    v16 = Attributes;
  }
  if ( (a2[8] & 2) != 0 && v16 )
    return;
  LOBYTE(v3) = 0;
  v50 = 0;
  v56 = v3;
  if ( v14 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v14, v15, &v50);
    if ( PossibleInput >= 0 )
    {
      LOBYTE(v3) = PossibleInput != 263;
      v56 = PossibleInput != 263;
    }
  }
  v18 = 3;
  if ( v16 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    if ( (a2[8] & 2) == 0 )
    {
      v44 = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &P, &v52, 1);
      v4 = P;
      if ( v44 >= 0 )
      {
        if ( !P )
        {
          v14 = v52;
          goto LABEL_71;
        }
        if ( (int)LinkNodeGetPossibleResources(P, &P, &Attributes) >= 0 )
        {
          ExFreePoolWithTag(P, 0);
          if ( (Attributes & 2) == 0 )
            v18 = 1;
          if ( (int)LinkNodeGetPossibleGsiv(v4, &v52) < 0 )
          {
            if ( v4[7] )
              goto LABEL_102;
            v4[9] = v14;
          }
          v4[7] += v21;
          v48 = v21;
          goto LABEL_19;
        }
      }
      v5 = 0;
      goto LABEL_105;
    }
LABEL_71:
    v21 = 1;
    goto LABEL_19;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v14, &v52, v10, 1LL) && byte_1C0057014[8 * v52] != 0xFF )
  {
    v18 = byte_1C0057014[8 * v52];
    goto LABEL_71;
  }
  v20 = (unsigned __int16)(v19 & *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL));
  if ( IcIsInterruptTypeSecondary(v14) )
  {
    v53 = 1;
    v45 = v20 != 1;
    AcpiCheckExternalConnection();
    v46 = -1073741822;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
    if ( ExternalTranslationInterface )
      v46 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))ExternalTranslationInterface + 9))(v14, 0LL, v63);
    ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
    KeLeaveCriticalRegion();
    v21 = 1;
    if ( v46 >= 0 )
    {
      v18 = v63[16] | v45;
      goto LABEL_19;
    }
LABEL_102:
    v5 = 0;
    goto LABEL_103;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v55, &v52) )
  {
    v21 = 1;
    v18 = v20 != 1 ? 3 : 0;
  }
  else
  {
    v21 = 1;
    v18 = v52 | (v20 != 1);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v18 |= 4u;
LABEL_19:
  v22 = (a2[8] & 2) == 0;
  Attributes = 0;
  if ( !v22 )
  {
    Attributes = v21;
    if ( v3 )
    {
      if ( ((v50 ^ v18) & 0xFFFFFFFB) != 0 )
      {
        v5 = v48;
LABEL_103:
        LOBYTE(v2) = v51;
        v6 = 0;
LABEL_108:
        if ( HIDWORD(v61) )
          ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v14, HIDWORD(v61), v21);
        if ( v5 )
          --v4[7];
        if ( v6 )
          IcRemovePossibleReference(v14, (*((unsigned __int8 *)a2 + 64) >> 1) & 1);
        if ( UserData )
        {
          if ( !(_BYTE)v2 )
            ExFreePoolWithTag(UserData, 0);
        }
        return;
      }
    }
  }
  v23 = a2[5];
  v24 = 0;
  v52 = 0;
  v25 = *(_QWORD *)(v23 + 40);
  v59 = v25;
  if ( (*(_BYTE *)(v25 + 4) & 2) != 0 )
  {
    v26 = v21 + *(_DWORD *)(v25 + 12) - *(_DWORD *)(v25 + 8);
  }
  else
  {
    v26 = v21;
    if ( ((unsigned __int8)v21 & *(_BYTE *)(v23 + 36)) != 0 )
      v24 = v21;
    v52 = v24;
  }
  if ( (*(_BYTE *)(v25 + 4) & 8) != 0 )
  {
    v24 |= 2u;
    v52 = v24;
  }
  v55 = 0;
  v27 = (void *)a2[9];
  v54 = v21 & v18;
  P = v27;
  v50 = v18 & 8;
  v55 = ((unsigned __int8)v21 & (((unsigned __int8)v21 & v18) == 0) ^ (unsigned __int8)(2 * ((v18 & 8) != 0))) & 2 ^ (unsigned __int8)v21 & (((unsigned __int8)v21 & v18) == 0);
  v28 = v55;
  v29 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, void *, unsigned int, int, int, int, __int128 *))ProcessorReserveIdtEntries)(
          *(_QWORD *)(a2[4] + 32),
          v25,
          v14,
          v27,
          v26,
          v55,
          v24,
          v21,
          &v60);
  if ( v29 >= 0 )
    goto LABEL_27;
  if ( v26 > 1 )
  {
    v26 = 1;
    v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, int, unsigned int, int, __int128 *))ProcessorReserveIdtEntries)(
            *(_QWORD *)(a2[4] + 32),
            *(_QWORD *)(a2[5] + 40),
            v14,
            P,
            1,
            v28,
            v52,
            1,
            &v60);
  }
  if ( v29 >= 0 )
  {
LABEL_27:
    if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    {
      v31 = PagedPool;
      goto LABEL_31;
    }
    if ( v56
      || (LOBYTE(v30) = v18, (int)IcSetPossibleInput(v14, &v60, v30, (*(unsigned __int8 *)(v59 + 4) >> 3) & 1) >= 0) )
    {
      IcAddPossibleReference(v14, (*((unsigned __int8 *)a2 + 64) >> 1) & 1);
      v47 = v31;
LABEL_31:
      v56 = 0;
      if ( (v18 & 4) == 0 )
      {
        v32 = v31;
        if ( ((unsigned __int8)v31 & *(_BYTE *)(a2[5] + 36)) != 0 )
          v32 = 3;
        v56 = v32;
      }
      PoolWithTag = ExAllocatePoolWithTag(v31, 80LL * (v26 - 1) + 128, 0x49706341u);
      UserData = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x80uLL);
        *UserData = 1;
        UserData[1] = 4;
        v34 = 4;
        if ( (*(_DWORD *)(a2[4] + 40) & 0xFFFFFFFD) != 0 )
          v34 = 5;
        UserData[1] = v34;
        if ( (*(_DWORD *)(a2[5] + 36) & 4) != 0 )
          UserData[1] |= 2u;
        if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 0x20) != 0 )
          UserData[1] |= 0x10u;
        if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
        {
          UserData[2] = 3;
          if ( (int)MsiGetTargetInfo(&v60, HIDWORD(v61), UserData + 4) >= 0 )
          {
            *((_BYTE *)UserData + 38) = v62;
            ProcessorGetDestinationMode(&v60, &v55);
            v39 = 0LL;
            if ( !v26 )
            {
LABEL_53:
              v38 = RtlAddRange(
                      *(PRTL_RANGE_LIST *)(v58 + 48),
                      *a2,
                      a2[1],
                      Attributes,
                      v56 | 0x10,
                      UserData,
                      *(PVOID *)(a2[4] + 32));
              if ( v38 >= 0 )
                return;
              LOBYTE(v2) = v51;
              v21 = 1;
              if ( v38 != -1073741823 )
                LOBYTE(v2) = 1;
              v5 = v48;
              v6 = v47;
              goto LABEL_108;
            }
            v40 = UserData + 18;
            while ( 1 )
            {
              *(v40 - 6) = 3;
              v41 = v60;
              *(v40 - 3) = 0;
              *(v40 - 2) = 1;
              v42 = v55;
              *(_OWORD *)v40 = v41;
              v43 = v39 + HIDWORD(v61);
              v40[10] = v42;
              *(v40 - 5) = v43;
              v40[8] = v39 + v14;
              if ( (int)IrqArbGetDeviceIrql(&UserData[20 * v39 + 12], &UserData[20 * v39 + 14]) < 0 )
                break;
              v40 += 20;
              v39 = (unsigned int)(v39 + 1);
              if ( (unsigned int)v39 >= v26 )
                goto LABEL_53;
            }
          }
        }
        else
        {
          if ( v4 )
          {
            UserData[2] = 2;
            *((_QWORD *)UserData + 2) = v4;
          }
          else
          {
            UserData[2] = 1;
          }
          UserData[12] = 0;
          v22 = v53 == 0;
          UserData[13] = HIDWORD(v61);
          *(_OWORD *)(UserData + 18) = v60;
          UserData[16] = (!v22 || v50) && !v54;
          v35 = v18 & 0xA;
          switch ( v35 )
          {
            case 10:
              v36 = 3;
              break;
            case 8:
              v36 = 4;
              break;
            case 2:
              v36 = 2;
              break;
            default:
              v36 = v35 == 0;
              break;
          }
          UserData[15] = v36;
          UserData[26] = IrqArbGsivFromIrq(*a2);
          UserData[27] ^= v37 & (UserData[27] ^ v37 & (*((unsigned __int8 *)UserData + 4) >> 4));
          if ( (int)IrqArbGetDeviceIrql(UserData + 12, UserData + 14) >= 0 )
            goto LABEL_53;
        }
      }
      v5 = v48;
      v6 = v47;
      goto LABEL_106;
    }
    v5 = v48;
LABEL_105:
    v6 = 0;
LABEL_106:
    LOBYTE(v2) = v51;
    goto LABEL_107;
  }
}
