/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1403E09B8
 * Callers:
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     CmpRemoveSecurityCellList @ 0x1400EE0DC (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpAddSecurityCellToCache @ 0x1403DDE74 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x1403DFE54 (CmpAssignSecurityToKcb.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403E00FC (CmpFindMatchingDescriptorCell.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmGetKCBCacheSecurity @ 0x1404209D8 (CmGetKCBCacheSecurity.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x14046B884 (SeSetSecurityDescriptorInfo.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14051AE6C (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x140655164 (SeAdjustObjectAppContainerSecurity.c)
 */

__int64 __fastcall CmpSetSecurityDescriptorInfo(
        ULONG_PTR BugCheckParameter3,
        DWORD *a2,
        PVOID a3,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r15d
  ULONG_PTR v9; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned int v15; // r12d
  unsigned int *v16; // r15
  int v17; // edi
  unsigned int v18; // r14d
  __int64 v19; // rbx
  PSECURITY_DESCRIPTOR v20; // r12
  ULONG_PTR v21; // r12
  bool v22; // zf
  __int64 v23; // r13
  PSECURITY_DESCRIPTOR v24; // rbx
  ULONG v26; // edx
  unsigned int v27; // eax
  ULONG_PTR v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r13
  ULONG v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rax
  PSECURITY_DESCRIPTOR v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  UNICODE_STRING *p_DestinationString; // r12
  __int64 v40; // rax
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-71h] BYREF
  __int64 v42; // [rsp+40h] [rbp-69h]
  ULONG_PTR v43; // [rsp+48h] [rbp-61h]
  __int64 v44; // [rsp+50h] [rbp-59h] BYREF
  int v45; // [rsp+58h] [rbp-51h] BYREF
  unsigned int BugCheckParameter4; // [rsp+5Ch] [rbp-4Dh] BYREF
  int BugCheckParameter4_4; // [rsp+60h] [rbp-49h] BYREF
  ULONG_PTR v48; // [rsp+64h] [rbp-45h] BYREF
  int v49; // [rsp+6Ch] [rbp-3Dh] BYREF
  __int64 v50; // [rsp+70h] [rbp-39h]
  size_t Size; // [rsp+78h] [rbp-31h]
  PVOID P; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v53; // [rsp+88h] [rbp-21h] BYREF
  _DWORD *v54; // [rsp+90h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-11h] BYREF
  char v58; // [rsp+108h] [rbp+5Fh] BYREF
  __int64 v59; // [rsp+110h] [rbp+67h]

  v59 = a4;
  v8 = *(_DWORD *)(BugCheckParameter3 + 40);
  v9 = *(_QWORD *)(BugCheckParameter3 + 32);
  v48 = 0xFFFFFFFF00000000uLL;
  v45 = -1;
  BugCheckParameter4_4 = -1;
  v49 = -1;
  ObjectsSecurityDescriptor = 0LL;
  v12 = 0LL;
  P = 0LL;
  v58 = 0;
  v42 = 0LL;
  v44 = 0LL;
  BugCheckParameter4 = v8;
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v8, &v49);
  v50 = v13;
  if ( v13 )
  {
    CmpUpdateKeyNodeAccessBits(v9, v13, v8);
    v14 = a7;
    LODWORD(v43) = *(_DWORD *)CmGetKCBCacheSecurity(BugCheckParameter3);
    v15 = v43;
    v16 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, (unsigned int)v43, &v45);
    if ( !v16 )
    {
      v17 = -1073741670;
LABEL_27:
      (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v49);
      return (unsigned int)v17;
    }
    if ( *(_QWORD *)(BugCheckParameter3 + 32) == qword_1402C7808 && (*a2 & 4) != 0 )
    {
      SepCheckForAllAppPackagesAceRemoval(v16 + 5, a3);
      if ( (_BYTE)v59 )
      {
        v38 = CmpConstructName(BugCheckParameter3);
        p_DestinationString = (UNICODE_STRING *)v38;
        if ( v38 )
        {
          LOBYTE(v59) = 1;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
          p_DestinationString = &DestinationString;
          LOBYTE(v59) = 0;
        }
        v17 = SeAdjustObjectAppContainerSecurity(p_DestinationString, v16 + 5, a3, &P, &v58);
        if ( (_BYTE)v59 )
          ExFreePoolWithTag(p_DestinationString, 0);
        if ( v17 < 0 )
        {
          v23 = 0LL;
          goto LABEL_14;
        }
        v15 = v43;
        if ( v58 )
          a3 = P;
      }
    }
    ObjectsSecurityDescriptor = v16 + 5;
    v17 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, PoolType, GenericMapping);
    if ( v17 < 0 )
    {
      v24 = 0LL;
      v23 = 0LL;
      goto LABEL_15;
    }
    LODWORD(Size) = RtlLengthSecurityDescriptor(ObjectsSecurityDescriptor);
    if ( v14 )
      v18 = 1;
    else
      v18 = BugCheckParameter4 >> 31;
    v19 = MEMORY[0xFFFFF78000000014];
    if ( v14 )
    {
      if ( !(unsigned __int8)HvpMarkCellDirty(v9, v15) )
      {
LABEL_79:
        v17 = -1073741443;
LABEL_81:
        v12 = v44;
        goto LABEL_40;
      }
      v37 = a8;
      *(_DWORD *)(a8 + 80) = -1;
      *(_DWORD *)(v37 + 68) = 9;
    }
    else if ( !(unsigned __int8)HvpMarkCellDirty(v9, BugCheckParameter4) || !(unsigned __int8)HvpMarkCellDirty(v9, v15) )
    {
      goto LABEL_79;
    }
    v20 = ObjectsSecurityDescriptor;
    if ( CmpFindMatchingDescriptorCell(v9, ObjectsSecurityDescriptor, v18, &BugCheckParameter4, &v54) )
    {
      v21 = BugCheckParameter4;
      if ( BugCheckParameter4 == (_DWORD)v43 )
      {
        v12 = v44;
        v22 = v14 == 0;
        v23 = v42;
        if ( v22 )
        {
          *(_QWORD *)(v50 + 4) = v19;
          *(_QWORD *)(BugCheckParameter3 + 168) = v19;
        }
        else
        {
          v40 = a8;
          ++v16[3];
          *(_DWORD *)(v40 + 80) = v21;
        }
        goto LABEL_14;
      }
      if ( !(unsigned __int8)HvpMarkCellDirty(v9, BugCheckParameter4) )
        goto LABEL_79;
      if ( v14 )
      {
        *(_DWORD *)(a8 + 80) = *v54;
      }
      else if ( v16[3] == 1
             && (!(unsigned __int8)HvpMarkCellDirty(v9, v16[1]) || !(unsigned __int8)HvpMarkCellDirty(v9, v16[2])) )
      {
        goto LABEL_79;
      }
      v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, (unsigned int)v21, &BugCheckParameter4_4);
      if ( !v12 )
      {
        if ( !v14 )
          KeBugCheckEx(0x51u, 4uLL, 5uLL, v9, v21);
        v17 = -1073741670;
        goto LABEL_40;
      }
      if ( !v14 )
      {
        v27 = v16[3];
        if ( v27 == 1 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v45);
          v16 = 0LL;
          CmpRemoveSecurityCellList(v9, (unsigned int)v43);
          HvFreeCell(v9, (unsigned int)v43);
        }
        else
        {
          v16[3] = v27 - 1;
        }
        *(_DWORD *)(v50 + 44) = v21;
      }
      ++*(_DWORD *)(v12 + 12);
      LODWORD(v28) = v43;
      v29 = a8;
    }
    else
    {
      v31 = RtlLengthSecurityDescriptor(v20);
      v32 = HvAllocateCell(v9, v31 + 20, v18, &v44, &BugCheckParameter4_4);
      v28 = v32;
      if ( v32 == -1 )
      {
        v17 = -1073741670;
        goto LABEL_81;
      }
      LODWORD(v48) = v32;
      if ( v14 )
      {
        v12 = v44;
        *(_DWORD *)(v44 + 8) = v32;
        *(_DWORD *)(v12 + 4) = v32;
      }
      else
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(v9, v16[1])
          || v16[3] == 1 && !(unsigned __int8)HvpMarkCellDirty(v9, v16[2]) )
        {
          goto LABEL_79;
        }
        v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v9 + 8))(v9, v16[1], (char *)&v48 + 4);
        v12 = v44;
        v42 = v33;
        if ( !v33 )
        {
          v17 = -1073741670;
          v23 = 0LL;
          goto LABEL_14;
        }
        *(_DWORD *)(v44 + 4) = v16[1];
        *(_DWORD *)(v12 + 8) = v43;
        v16[1] = v28;
        *(_DWORD *)(v33 + 8) = v28;
        --v16[3];
      }
      v34 = ObjectsSecurityDescriptor;
      *(_WORD *)v12 = 27507;
      v35 = Size;
      *(_DWORD *)(v12 + 12) = 1;
      *(_DWORD *)(v12 + 16) = v35;
      memmove((void *)(v12 + 20), v34, v35);
      if ( (int)CmpAddSecurityCellToCache(v9, (unsigned int)v28, 0, v36) < 0 )
      {
        v22 = v14 == 0;
        v23 = v42;
        if ( v22 )
        {
          ++v16[3];
          v16[1] = *(_DWORD *)(v12 + 4);
          *(_DWORD *)(v23 + 8) = *(_DWORD *)(v12 + 8);
        }
        v17 = -1073741670;
        goto LABEL_14;
      }
      LODWORD(v48) = 0;
      if ( !v14 )
      {
        v30 = v50;
        *(_DWORD *)(v50 + 44) = v28;
        if ( !v16[3] )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v45);
          v16 = 0LL;
          CmpRemoveSecurityCellList(v9, (unsigned int)v43);
          HvFreeCell(v9, (unsigned int)v43);
        }
LABEL_39:
        *(_QWORD *)(v30 + 4) = v19;
        *(_QWORD *)(BugCheckParameter3 + 168) = v19;
        CmpAssignSecurityToKcb(BugCheckParameter3, *(unsigned int *)(v30 + 44), 0LL, 1, 0);
LABEL_40:
        v23 = v42;
LABEL_14:
        v24 = ObjectsSecurityDescriptor;
LABEL_15:
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v24 )
          ExFreePoolWithTag(v24, 0);
        if ( (_DWORD)v48 )
          HvFreeCell(v9, (unsigned int)v48);
        if ( v23 )
          (*(void (__fastcall **)(ULONG_PTR, char *))(v9 + 16))(v9, (char *)&v48 + 4);
        if ( v12 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &BugCheckParameter4_4);
        if ( v16 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v45);
        goto LABEL_27;
      }
      if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(v9, (unsigned int)v28, &v53) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v28);
      v29 = a8;
      *(_DWORD *)(a8 + 80) = **(_DWORD **)(*(_QWORD *)(v9 + 3056) + 16LL * v53 + 8);
    }
    if ( v14 )
    {
      v17 = CmAddLogForAction(v29, v26);
      if ( v17 < 0 )
      {
        v22 = (*(_DWORD *)(v12 + 12))-- == 1;
        if ( v22 )
        {
          CmpRemoveSecurityCellList(v9, (unsigned int)v28);
          HvFreeCell(v9, (unsigned int)v28);
        }
      }
      goto LABEL_40;
    }
    v30 = v50;
    goto LABEL_39;
  }
  return 3221225626LL;
}
