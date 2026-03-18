/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x14044B704
 * Callers:
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     CmpRemoveSecurityCellList @ 0x14012AF2C (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401E0EB0 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401E0EEC (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401E0F38 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x140245898 (RtlLengthSecurityDescriptorStrict.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 *     CmpAddSecurityCellToCache @ 0x140447E14 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x140449B80 (CmpFindMatchingDescriptorCell.c)
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404CF374 (SeSetSecurityDescriptorInfo.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14058D76C (SepCheckForAllAppPackagesAceRemoval.c)
 *     HvMarkCellDirty @ 0x140660960 (HvMarkCellDirty.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406D7010 (SeAdjustObjectAppContainerSecurity.c)
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
  unsigned int v8; // edi
  ULONG_PTR v9; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v15; // rdi
  unsigned int *KCBCacheSecurity; // rax
  unsigned int v17; // r13d
  unsigned int *v18; // r12
  int v19; // esi
  UNICODE_STRING *p_DestinationString; // rax
  PSECURITY_DESCRIPTOR v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // r15
  ULONG_PTR v25; // r12
  __int64 v26; // rax
  __int64 v27; // r9
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
  __int64 v38; // r9
  bool v39; // zf
  unsigned int *v40; // rcx
  bool v41; // di
  __int64 v42; // rax
  bool v43; // bl
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-81h] BYREF
  unsigned int *v45; // [rsp+40h] [rbp-79h]
  __int64 v46; // [rsp+48h] [rbp-71h]
  __int64 v47; // [rsp+50h] [rbp-69h] BYREF
  unsigned int BugCheckParameter4; // [rsp+58h] [rbp-61h] BYREF
  int BugCheckParameter4_4; // [rsp+5Ch] [rbp-5Dh] BYREF
  int v50; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v51; // [rsp+64h] [rbp-55h]
  unsigned int v52; // [rsp+68h] [rbp-51h]
  int v53; // [rsp+6Ch] [rbp-4Dh] BYREF
  int v54; // [rsp+70h] [rbp-49h] BYREF
  PVOID P; // [rsp+78h] [rbp-41h] BYREF
  __int64 v56; // [rsp+80h] [rbp-39h]
  PVOID v57; // [rsp+88h] [rbp-31h] BYREF
  size_t Size; // [rsp+90h] [rbp-29h]
  _DWORD *v59; // [rsp+98h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-19h] BYREF
  char v63; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v64; // [rsp+120h] [rbp+67h]

  v64 = a4;
  v8 = *(_DWORD *)(BugCheckParameter3 + 40);
  v9 = *(_QWORD *)(BugCheckParameter3 + 32);
  v51 = 0;
  v50 = -1;
  BugCheckParameter4_4 = -1;
  v53 = -1;
  v54 = -1;
  ObjectsSecurityDescriptor = 0LL;
  v12 = 0LL;
  v57 = 0LL;
  v63 = 0;
  v46 = 0LL;
  v47 = 0LL;
  BugCheckParameter4 = v8;
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v8, &v54);
  v56 = v13;
  if ( !v13 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v9, v13, v8);
  v15 = (__int64)a7;
  KCBCacheSecurity = (unsigned int *)CmGetKCBCacheSecurity(BugCheckParameter3, (__int64)a7);
  v17 = *KCBCacheSecurity;
  v45 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, *KCBCacheSecurity, &v50);
  v18 = v45;
  if ( v45 )
  {
    if ( *(_QWORD *)(BugCheckParameter3 + 32) == qword_1403168D8 && (*a2 & 4) != 0 )
    {
      SepCheckForAllAppPackagesAceRemoval(v45 + 5, a3);
      if ( (_BYTE)v64 )
      {
        p_DestinationString = (UNICODE_STRING *)CmpConstructName(BugCheckParameter3);
        P = p_DestinationString;
        if ( p_DestinationString )
        {
          LOBYTE(v64) = 1;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
          p_DestinationString = &DestinationString;
          LOBYTE(v64) = 0;
          P = &DestinationString;
        }
        v19 = SeAdjustObjectAppContainerSecurity(p_DestinationString, v45 + 5, a3, &v57, &v63);
        if ( (_BYTE)v64 )
          ExFreePoolWithTag(P, 0);
        if ( v19 < 0 )
        {
          v22 = 0LL;
          goto LABEL_77;
        }
        if ( v63 )
          a3 = v57;
      }
    }
    ObjectsSecurityDescriptor = v45 + 5;
    v19 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, PoolType, GenericMapping);
    if ( v19 < 0 )
    {
      v21 = 0LL;
      v22 = 0LL;
LABEL_78:
      if ( v57 )
        ExFreePoolWithTag(v57, 0);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      if ( v51 )
        HvFreeCell(v9, v51);
      if ( v22 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v53);
      if ( v12 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &BugCheckParameter4_4);
      if ( v18 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v50);
      goto LABEL_90;
    }
    LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
    if ( v15 )
      v52 = 1;
    else
      v52 = BugCheckParameter4 >> 31;
    v23 = MEMORY[0xFFFFF78000000014];
    if ( v15 )
    {
      if ( !(unsigned __int8)HvMarkCellDirty(v9, v17, 0LL) )
      {
LABEL_24:
        v19 = -1073741443;
LABEL_25:
        v12 = v47;
LABEL_26:
        v22 = v46;
LABEL_77:
        v21 = ObjectsSecurityDescriptor;
        goto LABEL_78;
      }
      v24 = a8;
      *(_DWORD *)(a8 + 80) = -1;
      *(_DWORD *)(v24 + 68) = 9;
      *(_BYTE *)(v24 + 84) = 0;
    }
    else
    {
      if ( !(unsigned __int8)HvMarkCellDirty(v9, BugCheckParameter4, 0LL)
        || !(unsigned __int8)HvMarkCellDirty(v9, v17, 0LL) )
      {
        goto LABEL_24;
      }
      v24 = a8;
    }
    if ( CmpFindMatchingDescriptorCell(v9, ObjectsSecurityDescriptor, v52, &BugCheckParameter4, &v59) )
    {
      v25 = BugCheckParameter4;
      if ( BugCheckParameter4 == v17 )
      {
        if ( v15 )
        {
          v19 = CmpKeySecurityIncrementReferenceCount((__int64)v45, v9, BugCheckParameter4, 0);
          if ( v19 >= 0 )
            *(_DWORD *)(v24 + 80) = v25;
        }
        else
        {
          *(_QWORD *)(v56 + 4) = v23;
          *(_QWORD *)(BugCheckParameter3 + 168) = v23;
        }
        goto LABEL_34;
      }
      if ( !(unsigned __int8)HvMarkCellDirty(v9, BugCheckParameter4, 0LL) )
        goto LABEL_39;
      if ( v15 )
      {
        *(_DWORD *)(v24 + 80) = *v59;
      }
      else
      {
        v19 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v45, v9, v17, 0);
        if ( v19 < 0 )
          goto LABEL_34;
      }
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, (unsigned int)v25, &BugCheckParameter4_4);
      v12 = v26;
      if ( !v26 )
      {
        if ( !v15 )
          KeBugCheckEx(0x51u, 4uLL, 5uLL, v9, v25);
        v19 = -1073741670;
        goto LABEL_35;
      }
      v19 = CmpKeySecurityIncrementReferenceCount(v26, v9, v25, 0);
      if ( v19 < 0 )
      {
LABEL_35:
        v18 = v45;
        goto LABEL_26;
      }
      if ( !v15 )
      {
        v28 = CmpKeySecurityDecrementReferenceCount((__int64)v45, v9, v17);
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v50);
        v45 = 0LL;
        if ( v28 )
        {
          CmpRemoveSecurityCellList(v9, v17);
          HvFreeCell(v9, v17);
        }
        *(_DWORD *)(v56 + 44) = v25;
      }
      v18 = a7;
      LODWORD(v29) = v17;
      v30 = a8;
    }
    else
    {
      v31 = RtlLengthSecurityDescriptorStrict();
      v32 = HvAllocateCell(v9, (unsigned int)(v31 + 20), v52, &v47, &BugCheckParameter4_4);
      v29 = v32;
      if ( v32 == -1 )
      {
        v19 = -1073741670;
        goto LABEL_25;
      }
      v18 = a7;
      v51 = v32;
      if ( a7 )
      {
        v12 = v47;
        *(_DWORD *)(v47 + 8) = v32;
        *(_DWORD *)(v12 + 4) = v32;
      }
      else
      {
        v33 = v45;
        if ( !(unsigned __int8)HvMarkCellDirty(v9, v45[1], 0LL) )
        {
LABEL_39:
          v19 = -1073741443;
LABEL_34:
          v12 = v47;
          goto LABEL_35;
        }
        v19 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v33, v9, v17, 0);
        if ( v19 < 0 )
          goto LABEL_34;
        v34 = v45;
        v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v45[1], &v53);
        v12 = v47;
        v46 = v35;
        if ( !v35 )
        {
          v18 = v45;
          v19 = -1073741670;
          v22 = 0LL;
          goto LABEL_77;
        }
        *(_DWORD *)(v47 + 4) = v34[1];
        *(_DWORD *)(v12 + 8) = v17;
        v34[1] = v29;
        *(_DWORD *)(v35 + 8) = v29;
      }
      v36 = ObjectsSecurityDescriptor;
      *(_WORD *)v12 = 27507;
      v37 = Size;
      *(_DWORD *)(v12 + 12) = 1;
      *(_DWORD *)(v12 + 16) = v37;
      memmove((void *)(v12 + 20), v36, v37);
      v19 = CmpAddSecurityCellToCache(v9, (unsigned int)v29, 0, v38);
      if ( v19 < 0 )
      {
        v22 = v46;
        v39 = v18 == 0LL;
        v18 = v45;
        v21 = ObjectsSecurityDescriptor;
        if ( v39 )
        {
          v45[1] = *(_DWORD *)(v12 + 4);
          *(_DWORD *)(v22 + 8) = *(_DWORD *)(v12 + 8);
        }
        goto LABEL_78;
      }
      v51 = 0;
      if ( !v18 )
      {
        v40 = v45;
        *(_DWORD *)(v56 + 44) = v29;
        v41 = CmpKeySecurityDecrementReferenceCount((__int64)v40, v9, v17);
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v50);
        if ( v41 )
        {
          CmpRemoveSecurityCellList(v9, v17);
          HvFreeCell(v9, v17);
        }
        goto LABEL_72;
      }
      if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(v9, (unsigned int)v29, &P) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v29);
      v30 = a8;
      *(_DWORD *)(a8 + 80) = **(_DWORD **)(*(_QWORD *)(v9 + 3056) + 16LL * (unsigned int)P + 8);
    }
    if ( v18 )
    {
      v19 = CmAddLogForAction(v30);
      if ( v19 < 0 )
      {
        v43 = CmpKeySecurityDecrementReferenceCount(v12, v9, v29);
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &BugCheckParameter4_4);
        v12 = 0LL;
        if ( v43 )
        {
          CmpRemoveSecurityCellList(v9, (unsigned int)v29);
          HvFreeCell(v9, (unsigned int)v29);
        }
      }
      goto LABEL_35;
    }
    v18 = v45;
LABEL_72:
    v42 = v56;
    LOBYTE(v27) = 1;
    *(_QWORD *)(v56 + 4) = v23;
    *(_QWORD *)(BugCheckParameter3 + 168) = v23;
    CmpAssignSecurityToKcb(BugCheckParameter3, *(unsigned int *)(v42 + 44), 0LL, v27, 0);
    goto LABEL_26;
  }
  v19 = -1073741670;
LABEL_90:
  (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v54);
  return (unsigned int)v19;
}
