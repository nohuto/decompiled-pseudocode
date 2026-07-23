/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1403FBC58
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     CmpRemoveSecurityCellList @ 0x1400A9B6C (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401B647C (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401B64B8 (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401B6504 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x140210CB0 (RtlLengthSecurityDescriptorStrict.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpAddSecurityCellToCache @ 0x1403FA268 (CmpAddSecurityCellToCache.c)
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403FC348 (CmpFindMatchingDescriptorCell.c)
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmGetKCBCacheSecurity @ 0x14043F100 (CmGetKCBCacheSecurity.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 *     SeSetSecurityDescriptorInfo @ 0x14051DA64 (SeSetSecurityDescriptorInfo.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x140694880 (SeAdjustObjectAppContainerSecurity.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x140694D8C (SepCheckForAllAppPackagesAceRemoval.c)
 */

__int64 __fastcall CmpSetSecurityDescriptorInfo(
        ULONG_PTR BugCheckParameter3,
        DWORD *a2,
        PVOID a3,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping,
        unsigned int *a7,
        __int64 a8)
{
  unsigned int v10; // edi
  __int64 v11; // r15
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  __int64 v15; // rdi
  unsigned int *KCBCacheSecurity; // rax
  unsigned int v17; // r13d
  unsigned int *v18; // r12
  int v19; // esi
  __int64 v20; // rdx
  UNICODE_STRING *p_DestinationString; // rax
  PSECURITY_DESCRIPTOR v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // r15
  ULONG_PTR v26; // r12
  __int64 v27; // rax
  bool v28; // di
  ULONG_PTR v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // eax
  unsigned int *v33; // rsi
  unsigned int *v34; // rsi
  __int64 v35; // rax
  PSECURITY_DESCRIPTOR v36; // rdx
  unsigned int v37; // eax
  bool v38; // zf
  unsigned int *v39; // rcx
  bool v40; // di
  __int64 v41; // rcx
  bool v42; // bl
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-91h] BYREF
  unsigned int *v44; // [rsp+40h] [rbp-89h]
  __int64 v45; // [rsp+48h] [rbp-81h]
  __int64 v46; // [rsp+50h] [rbp-79h] BYREF
  unsigned int BugCheckParameter4; // [rsp+58h] [rbp-71h] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+5Ch] [rbp-6Dh]
  ULONG_PTR v49; // [rsp+60h] [rbp-69h]
  _DWORD v50[2]; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v51[2]; // [rsp+70h] [rbp-59h] BYREF
  PVOID P; // [rsp+78h] [rbp-51h] BYREF
  __int64 v53; // [rsp+80h] [rbp-49h]
  _DWORD v54[2]; // [rsp+88h] [rbp-41h] BYREF
  _DWORD v55[2]; // [rsp+90h] [rbp-39h] BYREF
  size_t Size; // [rsp+98h] [rbp-31h]
  PVOID v57; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD *v58; // [rsp+A8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-19h] BYREF
  char v62; // [rsp+128h] [rbp+5Fh] BYREF
  __int64 v63; // [rsp+130h] [rbp+67h]

  v63 = a4;
  LODWORD(v49) = 0;
  v51[0] = -1;
  v50[0] = -1;
  v10 = *(_DWORD *)(BugCheckParameter3 + 32);
  v11 = 0LL;
  v12 = *(_QWORD *)(BugCheckParameter3 + 24);
  v54[0] = -1;
  v55[0] = -1;
  v51[1] = 0;
  v50[1] = 0;
  v54[1] = 0;
  v55[1] = 0;
  ObjectsSecurityDescriptor = 0LL;
  v57 = 0LL;
  v62 = 0;
  v45 = 0LL;
  v46 = 0LL;
  BugCheckParameter4 = v10;
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v12 + 8))(v12, v10, v55);
  v53 = v13;
  if ( !v13 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v12, v13, v10);
  v15 = (__int64)a7;
  KCBCacheSecurity = (unsigned int *)CmGetKCBCacheSecurity(BugCheckParameter3);
  v17 = *KCBCacheSecurity;
  v44 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v12 + 8))(v12, *KCBCacheSecurity, v51);
  v18 = v44;
  if ( v44 )
  {
    if ( *(_QWORD *)(BugCheckParameter3 + 24) == qword_1402F2E78 && (*a2 & 4) != 0 )
    {
      SepCheckForAllAppPackagesAceRemoval(v44 + 5, a3);
      if ( (_BYTE)v63 )
      {
        p_DestinationString = (UNICODE_STRING *)CmpConstructName(BugCheckParameter3, v20);
        P = p_DestinationString;
        if ( p_DestinationString )
        {
          LOBYTE(v63) = 1;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
          p_DestinationString = &DestinationString;
          LOBYTE(v63) = 0;
          P = &DestinationString;
        }
        v19 = SeAdjustObjectAppContainerSecurity(p_DestinationString, v44 + 5, a3, &v57, &v62);
        if ( (_BYTE)v63 )
          CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
        if ( v19 < 0 )
        {
          v23 = 0LL;
          goto LABEL_77;
        }
        if ( v62 )
          a3 = v57;
      }
    }
    ObjectsSecurityDescriptor = v44 + 5;
    v19 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, PoolType, GenericMapping);
    if ( v19 < 0 )
    {
      v22 = 0LL;
      v23 = 0LL;
LABEL_78:
      if ( v57 )
        ExFreePoolWithTag(v57, 0);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      if ( (_DWORD)v49 )
        HvFreeCell(v12, (unsigned int)v49);
      if ( v23 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v54);
      if ( v11 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v50);
      if ( v18 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v51);
      goto LABEL_90;
    }
    LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
    if ( v15 )
      BugCheckParameter4_4 = 1;
    else
      BugCheckParameter4_4 = BugCheckParameter4 >> 31;
    v24 = MEMORY[0xFFFFF78000000014];
    if ( v15 )
    {
      if ( !(unsigned __int8)HvMarkCellDirty(v12, v17, 0LL) )
      {
LABEL_24:
        v19 = -1073741443;
LABEL_25:
        v11 = v46;
LABEL_26:
        v23 = v45;
LABEL_77:
        v22 = ObjectsSecurityDescriptor;
        goto LABEL_78;
      }
      v25 = a8;
      *(_DWORD *)(a8 + 88) = -1;
      *(_DWORD *)(v25 + 68) = 9;
      *(_BYTE *)(v25 + 92) = 0;
    }
    else
    {
      if ( !(unsigned __int8)HvMarkCellDirty(v12, BugCheckParameter4, 0LL)
        || !(unsigned __int8)HvMarkCellDirty(v12, v17, 0LL) )
      {
        goto LABEL_24;
      }
      v25 = a8;
    }
    if ( (unsigned __int8)CmpFindMatchingDescriptorCell(
                            v12,
                            ObjectsSecurityDescriptor,
                            BugCheckParameter4_4,
                            &BugCheckParameter4,
                            &v58) )
    {
      v26 = BugCheckParameter4;
      if ( BugCheckParameter4 == v17 )
      {
        if ( v15 )
        {
          v19 = CmpKeySecurityIncrementReferenceCount((__int64)v44, v12, BugCheckParameter4, 0);
          if ( v19 >= 0 )
            *(_DWORD *)(v25 + 88) = v26;
        }
        else
        {
          *(_QWORD *)(v53 + 4) = v24;
          *(_QWORD *)(BugCheckParameter3 + 160) = v24;
        }
        goto LABEL_34;
      }
      if ( !(unsigned __int8)HvMarkCellDirty(v12, BugCheckParameter4, 0LL) )
        goto LABEL_39;
      if ( v15 )
      {
        *(_DWORD *)(v25 + 88) = *v58;
      }
      else
      {
        v19 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v44, v12, v17);
        if ( v19 < 0 )
          goto LABEL_34;
      }
      v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v12 + 8))(v12, (unsigned int)v26, v50);
      v11 = v27;
      if ( !v27 )
      {
        if ( !v15 )
          KeBugCheckEx(0x51u, 4uLL, 5uLL, v12, v26);
        v19 = -1073741670;
        goto LABEL_35;
      }
      v19 = CmpKeySecurityIncrementReferenceCount(v27, v12, v26, 0);
      if ( v19 < 0 )
      {
LABEL_35:
        v18 = v44;
        goto LABEL_26;
      }
      if ( !v15 )
      {
        v28 = CmpKeySecurityDecrementReferenceCount((__int64)v44, v12, v17);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v51);
        v44 = 0LL;
        if ( v28 )
        {
          CmpRemoveSecurityCellList(v12, v17);
          HvFreeCell(v12, v17);
        }
        *(_DWORD *)(v53 + 44) = v26;
      }
      v18 = a7;
      LODWORD(v29) = v17;
      v30 = a8;
    }
    else
    {
      v31 = RtlLengthSecurityDescriptorStrict();
      v32 = HvAllocateCell(v12, (unsigned int)(v31 + 20), BugCheckParameter4_4, &v46, v50);
      v29 = v32;
      if ( v32 == -1 )
      {
        v19 = -1073741670;
        goto LABEL_25;
      }
      v18 = a7;
      LODWORD(v49) = v32;
      if ( a7 )
      {
        v11 = v46;
        *(_DWORD *)(v46 + 8) = v32;
        *(_DWORD *)(v11 + 4) = v32;
      }
      else
      {
        v33 = v44;
        if ( !(unsigned __int8)HvMarkCellDirty(v12, v44[1], 0LL) )
        {
LABEL_39:
          v19 = -1073741443;
LABEL_34:
          v11 = v46;
          goto LABEL_35;
        }
        v19 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v33, v12, v17);
        if ( v19 < 0 )
          goto LABEL_34;
        v34 = v44;
        v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v12 + 8))(v12, v44[1], v54);
        v11 = v46;
        v45 = v35;
        if ( !v35 )
        {
          v18 = v44;
          v19 = -1073741670;
          v23 = 0LL;
          goto LABEL_77;
        }
        *(_DWORD *)(v46 + 4) = v34[1];
        *(_DWORD *)(v11 + 8) = v17;
        v34[1] = v29;
        *(_DWORD *)(v35 + 8) = v29;
      }
      v36 = ObjectsSecurityDescriptor;
      *(_WORD *)v11 = 27507;
      v37 = Size;
      *(_DWORD *)(v11 + 12) = 1;
      *(_DWORD *)(v11 + 16) = v37;
      memmove((void *)(v11 + 20), v36, v37);
      v19 = CmpAddSecurityCellToCache(v12, (unsigned int)v29, 0);
      if ( v19 < 0 )
      {
        v23 = v45;
        v38 = v18 == 0LL;
        v18 = v44;
        v22 = ObjectsSecurityDescriptor;
        if ( v38 )
        {
          v44[1] = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v23 + 8) = *(_DWORD *)(v11 + 8);
        }
        goto LABEL_78;
      }
      LODWORD(v49) = 0;
      if ( !v18 )
      {
        v39 = v44;
        *(_DWORD *)(v53 + 44) = v29;
        v40 = CmpKeySecurityDecrementReferenceCount((__int64)v39, v12, v17);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v51);
        if ( v40 )
        {
          CmpRemoveSecurityCellList(v12, v17);
          HvFreeCell(v12, v17);
        }
        goto LABEL_72;
      }
      if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(v12, (unsigned int)v29, &P) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v29);
      v30 = a8;
      *(_DWORD *)(a8 + 88) = **(_DWORD **)(*(_QWORD *)(v12 + 3056) + 16LL * (unsigned int)P + 8);
    }
    if ( v18 )
    {
      v19 = CmAddLogForAction(v30);
      if ( v19 < 0 )
      {
        v42 = CmpKeySecurityDecrementReferenceCount(v11, v12, v29);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v50);
        v11 = 0LL;
        if ( v42 )
        {
          CmpRemoveSecurityCellList(v12, (unsigned int)v29);
          HvFreeCell(v12, (unsigned int)v29);
        }
      }
      goto LABEL_35;
    }
    v18 = v44;
LABEL_72:
    v41 = v53;
    *(_QWORD *)(v53 + 4) = v24;
    *(_QWORD *)(BugCheckParameter3 + 160) = v24;
    CmpAssignSecurityToKcb(BugCheckParameter3, *(unsigned int *)(v41 + 44), 0);
    goto LABEL_26;
  }
  v19 = -1073741670;
LABEL_90:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v12 + 16))(v12, v55);
  return (unsigned int)v19;
}
