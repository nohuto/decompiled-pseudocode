/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1403DFF74
 * Callers:
 *     CmpAssignSecurityDescriptorWrapper @ 0x1403DFD88 (CmpAssignSecurityDescriptorWrapper.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x14051A854 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateEmptyKey @ 0x1405E1F44 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403E00FC (CmpFindMatchingDescriptorCell.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     CmpInsertSecurityCellList @ 0x1404BE234 (CmpInsertSecurityCellList.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, void *a4)
{
  unsigned int v6; // esi
  unsigned int v8; // edi
  __int64 v9; // rax
  ULONG v11; // eax
  ULONG v12; // eax
  _DWORD *v13; // rcx
  int v14; // [rsp+30h] [rbp-18h] BYREF
  _DWORD BugCheckParameter3[5]; // [rsp+34h] [rbp-14h] BYREF

  v14 = -1;
  v6 = a2;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, a2) )
    return 3221225853LL;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, v6);
  if ( !(unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, a4, v6 >> 31, BugCheckParameter3, 0LL) )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (*(_DWORD *)(BugCheckParameter2 + 5360) & 0x20) != 0
      && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
    {
      return 3221225506LL;
    }
    v11 = RtlLengthSecurityDescriptor(a4);
    v8 = HvAllocateCell(BugCheckParameter2, v11 + 20, v6 >> 31, &BugCheckParameter3[1], &v14);
    if ( v8 == -1 )
      return 3221225626LL;
    v12 = RtlLengthSecurityDescriptor(a4);
    v13 = *(_DWORD **)&BugCheckParameter3[1];
    **(_WORD **)&BugCheckParameter3[1] = 27507;
    v13[3] = 1;
    v13[4] = v12;
    memmove(v13 + 5, a4, v12);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
    if ( (unsigned __int8)CmpInsertSecurityCellList(BugCheckParameter2) )
      goto LABEL_6;
    HvFreeCell(BugCheckParameter2, v8);
    return 3221225853LL;
  }
  v8 = BugCheckParameter3[0];
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3[0]) )
    return 3221225853LL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v8, &v14);
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 12);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
LABEL_6:
    *(_DWORD *)(a3 + 44) = v8;
    return 0LL;
  }
  return 3221225626LL;
}
