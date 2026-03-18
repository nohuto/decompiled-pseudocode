/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x140658CB4
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x14040799C (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140656D08 (CmpFindKcbInHashEntryByCellIndex.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 *a1, int *a2, ULONG_PTR *a3)
{
  unsigned int v6; // ebp
  int VirtualizationID; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax
  WCHAR *v10; // rdi
  int v11; // r15d
  __int64 v12; // r14
  WCHAR v13; // ax
  int v14; // ecx
  ULONG_PTR KcbInHashEntryByCellIndex; // rdi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF

  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v6 = 0;
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString(&UnicodeString, a1);
    RtlFreeAnsiString(&UnicodeString);
    if ( VirtualizationID >= 0 )
    {
      v8 = *a1;
      v9 = *(_QWORD *)(*a1 + 64);
      v10 = *(WCHAR **)(*a1 + 3032);
      v11 = *(_DWORD *)(v9 + 36);
      if ( *(_WORD *)(v8 + 3024) )
      {
        v12 = (((unsigned int)*(unsigned __int16 *)(v8 + 3024) - 1) >> 1) + 1;
        while ( 1 )
        {
          v13 = *v10;
          if ( *v10 != 92 )
            break;
LABEL_12:
          ++v10;
          if ( !--v12 )
            goto LABEL_13;
        }
        if ( v13 >= 0x61u )
        {
          if ( v13 <= 0x7Au )
          {
            v14 = v13 - 32;
            goto LABEL_11;
          }
          v13 = RtlUpcaseUnicodeChar(v13);
        }
        v14 = v13;
LABEL_11:
        v6 = v14 + 37 * v6;
        goto LABEL_12;
      }
LABEL_13:
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v8, v6, v11);
      if ( CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex) )
      {
        *a2 = v11;
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
