/*
 * XREFs of CmpVEExecuteParseLogic @ 0x1403BC378
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpVirtualBranchIsReplicated @ 0x1403BC1C8 (CmpVirtualBranchIsReplicated.c)
 *     CmpUnblockHiveWrites @ 0x1403BC51C (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1403BC560 (CmpFindPathByName.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     CmpBlockHiveWrites @ 0x1403DC244 (CmpBlockHiveWrites.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpVEExecuteParseLogic(
        __int64 a1,
        UNICODE_STRING *p_DestinationString,
        _DWORD *a3,
        UNICODE_STRING *a4)
{
  const UNICODE_STRING *v6; // r14
  __int64 v8; // r12
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING v14; // xmm0
  char PathByName; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  char v19; // bl
  wchar_t *v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  v22 = -1;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  DestinationString.Length = 0;
  v6 = p_DestinationString;
  v8 = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( (*(_WORD *)(a1 + 186) & 0x200) != 0 )
  {
    v8 = a1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
    {
      result = CmpBlockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
      v10 = result;
      if ( (int)result < 0 )
        return result;
      if ( (unsigned __int8)CmpFindPathByName(a1, (_DWORD)v6, 0, (unsigned int)&v21, (__int64)&v23) )
      {
        v11 = v23;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v23 + 8))(v23, v21, &v22);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 52) & 0x200000) != 0 )
            v10 = -1073741199;
        }
        else
        {
          v10 = -1073741670;
        }
        (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v22);
      }
      CmpUnblockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
      if ( v10 )
        return (unsigned int)v10;
    }
    result = CmRealKCBToVirtualPath(a1, v6, &DestinationString);
    if ( (int)result < 0 )
      return result;
    p_DestinationString = &DestinationString;
  }
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(v8, p_DestinationString, (char *)&v27) )
  {
LABEL_23:
    if ( v8 )
      goto LABEL_15;
LABEL_24:
    Buffer = a4->Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    v14 = DestinationString;
    DestinationString.Buffer = 0LL;
LABEL_28:
    *a4 = v14;
    v10 = 260;
    goto LABEL_16;
  }
  if ( (*a3 & 1) == 0 || !(_BYTE)v27 )
  {
    if ( (*(_WORD *)(a1 + 186) & 0x200) == 0 || (*(_DWORD *)(a1 + 4) & 0x7FE00000u) <= 0xA00000 )
      goto LABEL_15;
    v10 = CmVirtualKCBToRealPath(a1, &UnicodeString);
    if ( v10 < 0 )
      goto LABEL_16;
    RtlFreeAnsiString(&DestinationString);
    DestinationString.MaximumLength = UnicodeString.Length + v6->Length + 2;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x624E4D43u);
    if ( DestinationString.Buffer )
    {
      RtlCopyUnicodeString(&DestinationString, &UnicodeString);
      RtlAppendUnicodeToString(&DestinationString, L"\\");
      RtlAppendUnicodeStringToString(&DestinationString, v6);
      goto LABEL_24;
    }
    goto LABEL_42;
  }
  if ( (*(_WORD *)(a1 + 186) & 0x200) != 0 )
  {
    v10 = CmVirtualKCBToRealPath(a1, &UnicodeString);
    if ( v10 < 0 )
      goto LABEL_16;
    Destination.MaximumLength = UnicodeString.Length + v6->Length + 2;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x624E4D43u);
    if ( Destination.Buffer )
    {
      RtlCopyUnicodeString(&Destination, &UnicodeString);
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, v6);
      v10 = CmpBlockHiveWrites(0LL, 16LL, &v27);
      if ( v10 < 0 )
        goto LABEL_16;
      PathByName = CmpFindPathByName(0, (unsigned int)&Destination, 0, (unsigned int)&v21, (__int64)&v23);
      v17 = v27;
      v18 = 16LL;
      v16 = 0LL;
      goto LABEL_34;
    }
LABEL_42:
    v10 = -1073741670;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    goto LABEL_23;
  if ( !v6->Length )
    goto LABEL_35;
  v10 = CmpBlockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
  if ( v10 < 0 )
    goto LABEL_16;
  PathByName = CmpFindPathByName(a1, (_DWORD)v6, 0, (unsigned int)&v21, (__int64)&v23);
  v16 = *(_QWORD *)(a1 + 32);
  v17 = 0LL;
  v18 = 0LL;
LABEL_34:
  v19 = PathByName;
  CmpUnblockHiveWrites(v16, v18, v17);
  if ( !v19 )
    goto LABEL_23;
LABEL_35:
  if ( (*(_WORD *)(a1 + 186) & 0x200) != 0 )
  {
    v20 = a4->Buffer;
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    v14 = Destination;
    Destination.Buffer = 0LL;
    goto LABEL_28;
  }
LABEL_15:
  v10 = -1073741199;
LABEL_16:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&Destination);
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v10;
}
