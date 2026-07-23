/*
 * XREFs of CmpCreateChild @ 0x1403FCF48
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14000AA6C (CmpRebuildKcbCacheFromNode.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B2988 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpRecordParseFailure @ 0x1401B3C98 (CmpRecordParseFailure.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     SeAssignSecurity @ 0x1403FBB28 (SeAssignSecurity.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     CmpGetSecurityDescriptorNode @ 0x1403FC310 (CmpGetSecurityDescriptorNode.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x1403FC434 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x1403FC47C (CmUnlockHiveSecurity.c)
 *     CmpUnlockHiveFlusher @ 0x1403FC4C8 (CmpUnlockHiveFlusher.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
 *     CmpMarkKeyDirty @ 0x1403FF10C (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140400BB4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1404010E0 (CmpNameSize.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpTryAcquireIXLockIntent @ 0x140401F44 (CmpTryAcquireIXLockIntent.c)
 *     CmpTryAcquireIXLockExclusive @ 0x140401F50 (CmpTryAcquireIXLockExclusive.c)
 *     CmpIsKcbImmutable @ 0x140402628 (CmpIsKcbImmutable.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpAddSubKeyEx @ 0x14049AE00 (CmpAddSubKeyEx.c)
 *     SeDeassignSecurity @ 0x1404BBEA8 (SeDeassignSecurity.c)
 *     CmpFreeSecurityDescriptor @ 0x1404BCD30 (CmpFreeSecurityDescriptor.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     CmpGetEffectiveCellType @ 0x14060DDC0 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const UNICODE_STRING *a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9)
{
  char v10; // si
  char *v11; // r13
  unsigned int v12; // r10d
  int v13; // r10d
  __int64 KcbAtLayerHeight; // r12
  __int64 v15; // r8
  __int64 v16; // r14
  ULONG_PTR v17; // r15
  int SecurityDescriptorNode; // ebx
  _DWORD *v19; // rsi
  int v20; // edx
  char v21; // dl
  __int64 v22; // r8
  __int16 v23; // cx
  void *v24; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  unsigned __int16 v29; // ax
  __int64 v30; // rbx
  _QWORD *UnitOfWork; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // r13d
  unsigned __int16 v36; // ax
  _BYTE *v37; // rbx
  __int16 v38; // ax
  int v39; // eax
  unsigned __int16 v40; // ax
  __int64 v41; // rax
  _DWORD *v42; // rax
  _DWORD *v43; // rcx
  __int64 v44; // r13
  unsigned int Length; // edx
  unsigned int v46; // eax
  PVOID v47; // r14
  PVOID v48; // r14
  __int64 v49; // rsi
  void *v50; // rcx
  char v52; // [rsp+40h] [rbp-D8h]
  char v53; // [rsp+41h] [rbp-D7h]
  char v54; // [rsp+42h] [rbp-D6h]
  char v55; // [rsp+44h] [rbp-D4h]
  char v56; // [rsp+45h] [rbp-D3h]
  __int16 v57; // [rsp+46h] [rbp-D2h]
  unsigned int BugCheckParameter3; // [rsp+4Ch] [rbp-CCh]
  unsigned int BugCheckParameter3_4; // [rsp+50h] [rbp-C8h]
  void *v60; // [rsp+58h] [rbp-C0h] BYREF
  PVOID P; // [rsp+60h] [rbp-B8h]
  PVOID v62; // [rsp+68h] [rbp-B0h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+70h] [rbp-A8h] BYREF
  int v64; // [rsp+78h] [rbp-A0h]
  int v65; // [rsp+7Ch] [rbp-9Ch]
  void *v66; // [rsp+80h] [rbp-98h] BYREF
  __int64 v67; // [rsp+88h] [rbp-90h] BYREF
  __int64 v68; // [rsp+90h] [rbp-88h]
  _BYTE v69[8]; // [rsp+98h] [rbp-80h] BYREF
  _QWORD *v70; // [rsp+A0h] [rbp-78h]
  _QWORD *v71; // [rsp+A8h] [rbp-70h]
  _BYTE v72[8]; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v73[16]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-50h]
  __int64 v75; // [rsp+D0h] [rbp-48h]
  ULONG_PTR v76; // [rsp+D8h] [rbp-40h]
  unsigned int v78; // [rsp+120h] [rbp+8h]

  v55 = 0;
  v52 = 0;
  v10 = 0;
  v56 = 0;
  v11 = 0LL;
  v60 = 0LL;
  BugCheckParameter3_4 = -1;
  v64 = -1;
  HvpGetCellContextReinitialize((__int64)v73);
  v66 = 0LL;
  BugCheckParameter3 = v12;
  HvpGetCellContextReinitialize((__int64)v69);
  v68 = 0LL;
  HvpGetCellContextReinitialize((__int64)v72);
  v53 = 0;
  NewDescriptor = 0LL;
  LODWORD(v67) = v13;
  v62 = 0LL;
  v70 = 0LL;
  P = 0LL;
  v71 = 0LL;
  v54 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 2));
  v74 = KcbAtLayerHeight;
  v16 = CmpGetKcbAtLayerHeight(v15, *(unsigned __int16 *)(v15 + 2));
  v75 = v16;
  v17 = *(_QWORD *)(v16 + 24);
  v76 = v17;
  if ( a9 && (*(_DWORD *)(v17 + 144) & 2) != 0 )
  {
    SecurityDescriptorNode = -1072103423;
LABEL_4:
    v19 = (_DWORD *)a5;
    goto LABEL_127;
  }
  if ( (a7 & 0xFFFFFFFC) != 0 )
  {
    SecurityDescriptorNode = -1073741811;
    v20 = 262528;
    v19 = (_DWORD *)a5;
LABEL_7:
    CmpRecordParseFailure((__int64)v19, v20, SecurityDescriptorNode);
    goto LABEL_127;
  }
  if ( (a7 & 1) != 0 || (*(_DWORD *)(v17 + 5360) & 0x20) != 0 )
  {
    v10 = 1;
    v56 = 1;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 4) & 0x80u) != 0
    || (unsigned __int8)CmpIsKcbImmutable(KcbAtLayerHeight)
    || *(_BYTE *)(KcbAtLayerHeight + 57) == v21 )
  {
    goto LABEL_12;
  }
  if ( CmpVEEnabled && (*(_WORD *)(KcbAtLayerHeight + 178) & 0x100) != 0 )
    v23 = a6 | 0x100;
  else
    v23 = a6;
  v57 = v23;
  if ( (*(_WORD *)(KcbAtLayerHeight + 178) & 0x200) != 0 )
    v57 = v23 | 0x200;
  if ( v10 && *(_QWORD *)(a3 + 64) )
  {
LABEL_12:
    SecurityDescriptorNode = -1073741790;
    goto LABEL_4;
  }
  v19 = (_DWORD *)a5;
  v65 = (unsigned __int8)(v21 & *(_BYTE *)(a5 + 24));
  if ( (unsigned int)CmpGetEffectiveCellType(KcbAtLayerHeight, v22) == 1 && v65 != 1 )
  {
    SecurityDescriptorNode = -1073741439;
    goto LABEL_127;
  }
  if ( (v57 & 2) == 0 )
  {
    if ( v56 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, a9, 0LL) + 32);
    }
    else
    {
      if ( (*(_WORD *)(v16 + 178) & 0x200) == 0 || (unsigned __int8)CmpIsSystemEntity(a5 + 16) )
        v24 = *(void **)(a3 + 64);
      else
        v24 = 0LL;
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a9, 0LL);
      SecurityDescriptorNode = SeAssignSecurity(
                                 (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
                                 v24,
                                 &NewDescriptor,
                                 1u,
                                 (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                                 *((POOL_TYPE *)CmKeyObjectType + 25));
      if ( SecurityDescriptorNode < 0 )
        goto LABEL_127;
    }
  }
  if ( !a9 || (unsigned __int8)CmpIsKeyStackDeleted(a2, 0LL) )
  {
    v26 = v65;
    if ( a9 )
      v26 = 1;
    v78 = v26;
    v27 = *(_DWORD *)(v16 + 32);
    if ( v27 != -1 )
    {
      if ( v26 != v27 >> 31 )
        CmpLogUnsupportedOperation(2LL);
      v28 = *(_DWORD *)(v16 + 32) >> 31;
      if ( !a8 )
      {
        CmpLockHiveFlusherShared(v17);
        v52 = 1;
      }
      v11 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v17 + 8))(
                      v17,
                      *(unsigned int *)(v16 + 32),
                      v73);
      v60 = v11;
      if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v11 + 36) )
      {
        CmpLogUnsupportedOperation(1LL);
        SecurityDescriptorNode = -1073741822;
        goto LABEL_127;
      }
      if ( (unsigned __int8)CmpMarkKeyDirty(v17, *(unsigned int *)(v16 + 32))
        && (unsigned __int8)HvpMarkCellDirty(v17, *(unsigned int *)(KcbAtLayerHeight + 32)) )
      {
        v29 = *(_WORD *)(a5 + 4);
        if ( v29 )
        {
          BugCheckParameter3 = HvAllocateCell(v17, v29, v28, &v66, v69);
          if ( BugCheckParameter3 == -1 )
            goto LABEL_52;
          memmove(v66, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
          (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v17 + 16))(v17, v69);
          v66 = 0LL;
        }
        CmLockHiveSecurityExclusive(v17);
        v53 = 1;
        SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v17, NewDescriptor, 1, (__int64)&v67);
        if ( SecurityDescriptorNode < 0 )
          goto LABEL_127;
        CmpFreeSecurityDescriptor(v17);
        *((_DWORD *)v11 + 11) = v67;
        CmUnlockHiveSecurity(v17);
        v53 = 0;
        *((_DWORD *)v11 + 12) = BugCheckParameter3;
        *((_WORD *)v11 + 37) = *(_WORD *)(a5 + 4);
        BugCheckParameter3 = -1;
        CmpCopyName(v11 + 76, a4);
        v11[13] |= 3u;
        *((_WORD *)v11 + 1) = v57;
        if ( *((_WORD *)v11 + 36) < a4->Length )
          *((_WORD *)v11 + 1) = v57 | 0x20;
        v30 = MEMORY[0xFFFFF78000000014];
        v11 = (char *)v60;
        *(_QWORD *)((char *)v60 + 4) = MEMORY[0xFFFFF78000000014];
        CmpRebuildKcbCacheFromNode(v16, (__int64)v11);
        v68 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v17 + 8))(
                v17,
                *(unsigned int *)(KcbAtLayerHeight + 32),
                v72);
        *(_QWORD *)(v68 + 4) = v30;
        if ( v52 )
        {
          CmpUnlockHiveFlusher(v17);
          v52 = 0;
        }
        CmpReportNotify(v16, *(_QWORD *)(v16 + 24), *(_DWORD *)(v16 + 32), 0, 1, 0LL);
LABEL_126:
        SecurityDescriptorNode = 0;
        goto LABEL_127;
      }
      goto LABEL_48;
    }
    if ( !a8 )
    {
      CmpLockHiveFlusherShared(v17);
      v52 = 1;
    }
    if ( a9 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      v62 = UnitOfWork;
      v70 = UnitOfWork;
      if ( !UnitOfWork )
        goto LABEL_52;
      CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
      SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(v62, a9);
      if ( SecurityDescriptorNode < 0 )
        goto LABEL_127;
      v32 = (_QWORD *)CmpAllocateUnitOfWork();
      P = v32;
      v71 = v32;
      if ( !v32 )
      {
LABEL_52:
        SecurityDescriptorNode = -1073741670;
        goto LABEL_127;
      }
      CmpTransEnlistUowInKcb(v32, v16);
      SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(P, a9);
      if ( SecurityDescriptorNode < 0 )
        goto LABEL_127;
      if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 240), (__int64)v62)
        || !CmpLockIXLockExclusive(v16 + 240, P, 0)
        || !CmpLockIXLockExclusive(v16 + 256, P, 1) )
      {
        SecurityDescriptorNode = -1072103423;
        goto LABEL_127;
      }
LABEL_87:
      v35 = (unsigned __int16)CmpNameSize(a4) + 76;
      BugCheckParameter3_4 = HvAllocateCell(v17, v35, v78, &v60, v73);
      v64 = BugCheckParameter3_4;
      if ( BugCheckParameter3_4 == -1 )
      {
LABEL_88:
        SecurityDescriptorNode = -1073741670;
        v11 = (char *)v60;
        goto LABEL_127;
      }
      v36 = *(_WORD *)(a5 + 4);
      if ( v36 )
      {
        BugCheckParameter3 = HvAllocateCell(v17, v36, v78, &v66, v69);
        if ( BugCheckParameter3 == -1 )
          goto LABEL_88;
        memmove(v66, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
        (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v17 + 16))(v17, v69);
        v66 = 0LL;
      }
      v37 = v60;
      memset(v60, 0, v35);
      v38 = 27500;
      if ( (v57 & 2) == 0 )
        v38 = 27502;
      *(_WORD *)v37 = v38;
      v37[12] = CmpAccessBitForPhase;
      if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 3 )
        v37[13] |= 3u;
      else
        v37[13] &= 0xFCu;
      *((_WORD *)v37 + 1) = v57;
      v11 = (char *)v60;
      *(_QWORD *)((char *)v60 + 4) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)v11 + 4) = *(_DWORD *)(KcbAtLayerHeight + 32);
      *(_QWORD *)(v11 + 28) = -1LL;
      *((_QWORD *)v11 + 5) = -1LL;
      *((_DWORD *)v11 + 12) = BugCheckParameter3;
      *((_WORD *)v11 + 37) = *(_WORD *)(a5 + 4);
      BugCheckParameter3 = -1;
      v39 = *(_DWORD *)(KcbAtLayerHeight + 176);
      if ( (v39 & 0x80u) != 0 )
        *((_DWORD *)v11 + 13) ^= (*((_DWORD *)v11 + 13) ^ (v39 << 16)) & 0xF00000;
      v40 = CmpCopyName(v11 + 76, a4);
      *((_WORD *)v11 + 36) = v40;
      if ( v40 < a4->Length )
        *((_WORD *)v37 + 1) |= 0x20u;
      if ( (v57 & 2) != 0 )
      {
        *(_QWORD *)(v11 + 36) = *(_QWORD *)(a5 + 48);
        *((_DWORD *)v11 + 7) = *(_DWORD *)(a5 + 40);
      }
      v55 = 1;
      if ( (v57 & 2) == 0 )
      {
        CmLockHiveSecurityExclusive(v17);
        v53 = 1;
        SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                                   v17,
                                   BugCheckParameter3_4,
                                   (__int64)v11,
                                   NewDescriptor,
                                   0,
                                   (__int64)(v11 + 44));
        if ( SecurityDescriptorNode < 0 )
          goto LABEL_127;
        CmUnlockHiveSecurity(v17);
        v53 = 0;
      }
      if ( (unsigned __int8)HvpMarkCellDirty(v17, *(unsigned int *)(KcbAtLayerHeight + 32)) )
      {
        v41 = a9;
        if ( !a9 )
        {
          if ( !(unsigned __int8)CmpAddSubKeyEx(v17) )
            goto LABEL_52;
          v41 = 0LL;
        }
        v54 = 1;
        *(_DWORD *)(v16 + 32) = BugCheckParameter3_4;
        BugCheckParameter3_4 = -1;
        *(_QWORD *)(v16 + 232) = v41;
        if ( (v57 & 0x42) == 0 )
        {
          *(_DWORD *)(v16 + 88) = *((_DWORD *)v11 + 9);
          *(_QWORD *)(v16 + 96) = *((unsigned int *)v11 + 10);
        }
        CmpRebuildKcbCacheFromNode(v16, (__int64)v11);
        if ( (v57 & 2) == 0 )
          CmpAssignSecurityToKcb(v16, *((unsigned int *)v11 + 11), 0LL, 0, 0);
        if ( a9 )
        {
          v42 = P;
          *((_DWORD *)P + 17) = 0;
          v42[18] = v65;
          v43 = v62;
          *((_QWORD *)v42 + 10) = v62;
          v43[17] = 1;
          *((_QWORD *)v43 + 11) = v16;
          SecurityDescriptorNode = CmAddLogForAction(v42);
          if ( SecurityDescriptorNode < 0 )
            goto LABEL_127;
          P = 0LL;
          v62 = 0LL;
        }
        v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                *(_QWORD *)(KcbAtLayerHeight + 24),
                *(unsigned int *)(KcbAtLayerHeight + 32),
                v72);
        v68 = v44;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(KcbAtLayerHeight + 24), v44, *(unsigned int *)(KcbAtLayerHeight + 32));
        *(_QWORD *)(v44 + 4) = MEMORY[0xFFFFF78000000014];
        Length = a4->Length;
        if ( (unsigned __int16)*(_DWORD *)(v44 + 52) < Length )
          *(_WORD *)(v44 + 52) = Length;
        v46 = *(unsigned __int16 *)(a5 + 4);
        if ( *(_DWORD *)(v44 + 56) < v46 )
          *(_DWORD *)(v44 + 56) = v46;
        *(_WORD *)(KcbAtLayerHeight + 168) = *(_WORD *)(v44 + 52);
        *(_QWORD *)(KcbAtLayerHeight + 160) = *(_QWORD *)(v44 + 4);
        CmpCleanUpSubKeyInfo(KcbAtLayerHeight);
        if ( v52 )
        {
          CmpUnlockHiveFlusher(v17);
          v52 = 0;
        }
        if ( (*(_DWORD *)a5 & 2) == 0 )
          CmpReportNotify(v16, *(_QWORD *)(v16 + 24), *(_DWORD *)(v16 + 32), a9, 1, 0LL);
        v54 = 0;
        v11 = (char *)v60;
        goto LABEL_126;
      }
LABEL_48:
      SecurityDescriptorNode = -1073741443;
      goto LABEL_127;
    }
    if ( *(_QWORD *)(KcbAtLayerHeight + 232) )
    {
      if ( (a7 & 2) != 0 )
      {
        SecurityDescriptorNode = -1072103423;
        v20 = 267648;
        goto LABEL_7;
      }
      v33 = KcbAtLayerHeight + 240;
    }
    else if ( (unsigned __int8)CmpTryAcquireIXLockIntent(KcbAtLayerHeight + 240) )
    {
      if ( (unsigned __int8)CmpTryAcquireIXLockExclusive(v16 + 240) )
      {
        if ( (unsigned __int8)CmpTryAcquireIXLockExclusive(v16 + 256) )
          goto LABEL_87;
        if ( (a7 & 2) != 0 )
        {
          SecurityDescriptorNode = -1072103423;
          v20 = 269184;
          goto LABEL_7;
        }
      }
      else if ( (a7 & 2) != 0 )
      {
        SecurityDescriptorNode = -1072103423;
        v20 = 268672;
        goto LABEL_7;
      }
    }
    else if ( (a7 & 2) != 0 )
    {
      SecurityDescriptorNode = -1072103423;
      v20 = 268160;
      goto LABEL_7;
    }
    SecurityDescriptorNode = CmpSnapshotTxOwnerArray(v33, a5 + 128, a5 + 136);
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v34, *(_DWORD *)(a5 + 128));
      *(_DWORD *)(a5 + 104) |= 4u;
      SecurityDescriptorNode = -1073741267;
    }
    goto LABEL_127;
  }
  SecurityDescriptorNode = CmpUndoDeleteKeyForTransEx(v16);
  if ( SecurityDescriptorNode < 0 )
  {
    SecurityDescriptorNode = -1073741772;
    v20 = 263936;
    goto LABEL_7;
  }
LABEL_127:
  if ( v53 )
    CmUnlockHiveSecurity(v17);
  if ( v54 )
  {
    BugCheckParameter3_4 = *(_DWORD *)(v16 + 32);
    *(_DWORD *)(v16 + 32) = -1;
    CmpCleanUpKcbValueCache(v16);
    *(_DWORD *)(v16 + 88) = 0;
    *(_QWORD *)(v16 + 96) = 0xFFFFFFFFLL;
    *(_WORD *)(v16 + 178) = 0;
    *(_DWORD *)(v16 + 104) = 0;
    *(_QWORD *)(v16 + 160) = 0LL;
    *(_QWORD *)(v16 + 168) = 0LL;
    *(_DWORD *)(v16 + 176) &= 0xFFFFFF00;
    *(_BYTE *)(v16 + 177) = 0;
    *(_QWORD *)(v16 + 232) = 0LL;
    *(_QWORD *)(v16 + 80) = 0LL;
  }
  v47 = P;
  if ( P )
  {
    CmpRundownUnitOfWork(P);
    ExFreePoolWithTag(v47, 0x77554D43u);
  }
  v48 = v62;
  if ( v62 )
  {
    CmpRundownUnitOfWork(v62);
    ExFreePoolWithTag(v48, 0x77554D43u);
  }
  if ( NewDescriptor && !v56 )
  {
    if ( (*v19 & 1) != 0 && (v19[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v49 = *(_QWORD *)(a3 + 72);
      v50 = *(void **)(v49 + 48);
      if ( v50 )
        ExFreePoolWithTag(v50, 0);
      *(_QWORD *)(v49 + 48) = NewDescriptor;
    }
  }
  if ( v68 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v72);
  if ( v66 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v17 + 16))(v17, v69);
  if ( BugCheckParameter3 != -1 )
    HvFreeCell(v17, BugCheckParameter3);
  if ( v11 )
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v17 + 16))(v17, v73);
  if ( BugCheckParameter3_4 != -1 )
  {
    if ( v55 )
      CmpFreeKeyByCell(v17, BugCheckParameter3_4);
    else
      HvFreeCell(v17, BugCheckParameter3_4);
  }
  if ( v52 )
    CmpUnlockHiveFlusher(v17);
  return (unsigned int)SecurityDescriptorNode;
}
