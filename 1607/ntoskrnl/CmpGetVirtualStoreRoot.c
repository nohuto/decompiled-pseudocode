/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x14060175C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x1403E1798 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1405FF870 (CmpFindKcbInHashEntryByCellIndex.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 *a1, int *a2, __int64 *a3)
{
  int VirtualizationID; // edi
  __int64 v7; // rcx
  int v8; // esi
  __int64 KcbInHashEntryByCellIndex; // rbp
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF

  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString(&UnicodeString, a1);
    RtlFreeAnsiString(&UnicodeString);
    if ( VirtualizationID >= 0 )
    {
      v7 = *a1;
      v8 = *(_DWORD *)(*(_QWORD *)(*a1 + 64) + 36LL);
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v7, 0, v8);
      if ( CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex) )
      {
        *a2 = v8;
        *a3 = KcbInHashEntryByCellIndex;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)VirtualizationID;
}
