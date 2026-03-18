/*
 * XREFs of CmpVEExecuteParseLogic @ 0x1404071F8
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     CmpFindPathByNameEx @ 0x1401DFBAC (CmpFindPathByNameEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpUnblockHiveWrites @ 0x1404075C8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14040760C (CmpBlockHiveWrites.c)
 *     CmpVirtualBranchIsReplicated @ 0x140407698 (CmpVirtualBranchIsReplicated.c)
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpFindPathByName @ 0x14055628C (CmpFindPathByName.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 *     CmpUnicodeStringAppendCharacter @ 0x14065E938 (CmpUnicodeStringAppendCharacter.c)
 */

__int64 __fastcall CmpVEExecuteParseLogic(__int64 a1, UNICODE_STRING *p_UnicodeString, _DWORD *a3, UNICODE_STRING *a4)
{
  const UNICODE_STRING *v6; // r14
  __int64 v8; // r12
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // rax
  wchar_t *v13; // rcx
  UNICODE_STRING v14; // xmm0
  char PathByName; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // edx
  char v20; // bl
  wchar_t *Buffer; // rcx
  unsigned int v22; // edx
  unsigned int v23; // [rsp+30h] [rbp-40h] BYREF
  int v24; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF

  v24 = -1;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  UnicodeString.Length = 0;
  v6 = p_UnicodeString;
  v8 = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  SourceString.Length = 0;
  *(_QWORD *)&SourceString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&SourceString.Buffer + 2) = 0;
  HIWORD(SourceString.Buffer) = 0;
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
      if ( (unsigned __int8)CmpFindPathByName(a1, (_DWORD)v6, 0, (unsigned int)&v23, (__int64)&v25) )
      {
        v11 = v25;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v25 + 8))(v25, v23, &v24);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 52) & 0x200000) != 0 )
            v10 = -1073741199;
        }
        else
        {
          v10 = -1073741670;
        }
        (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v24);
      }
      CmpUnblockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
      if ( v10 )
        return (unsigned int)v10;
    }
    result = CmRealKCBToVirtualPath(a1, v6, &UnicodeString);
    if ( (int)result < 0 )
      return result;
    p_UnicodeString = &UnicodeString;
  }
  *a3 |= 8u;
  if ( !(unsigned __int8)CmpVirtualBranchIsReplicated(v8, p_UnicodeString, &v29) )
  {
    if ( (*a3 & 1) != 0 && (_BYTE)v29 )
    {
      if ( (*(_WORD *)(a1 + 186) & 0x200) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
          goto LABEL_15;
        if ( !v6->Length )
          goto LABEL_35;
        v10 = CmpBlockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
        if ( v10 < 0 )
          goto LABEL_46;
        PathByName = CmpFindPathByName(a1, (_DWORD)v6, 0, (unsigned int)&v23, (__int64)&v25);
        v16 = *(_QWORD *)(a1 + 32);
        v17 = 0LL;
        v18 = 0LL;
LABEL_34:
        v20 = PathByName;
        CmpUnblockHiveWrites(v16, v18, v17);
        if ( !v20 )
          goto LABEL_15;
LABEL_35:
        if ( (*(_WORD *)(a1 + 186) & 0x200) != 0 )
        {
          Buffer = a4->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          v14 = DestinationString;
          DestinationString.Buffer = 0LL;
          goto LABEL_19;
        }
LABEL_45:
        v10 = -1073741199;
        goto LABEL_46;
      }
      v10 = CmVirtualKCBToRealPath(a1, &SourceString);
      if ( v10 < 0 )
        goto LABEL_46;
      v19 = v6->Length + SourceString.Length + 2;
      if ( v19 > 0xFFFF )
      {
LABEL_29:
        v10 = -1073741811;
        goto LABEL_46;
      }
      DestinationString.MaximumLength = v6->Length + SourceString.Length + 2;
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v19, 0x624E4D43u);
      if ( DestinationString.Buffer )
      {
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        CmpUnicodeStringAppendCharacter(&DestinationString);
        RtlAppendUnicodeStringToString(&DestinationString, v6);
        v10 = CmpBlockHiveWrites(0LL, 16LL, &v29);
        if ( v10 < 0 )
          goto LABEL_46;
        PathByName = CmpFindPathByNameEx(0LL, (__m128i *)&DestinationString, 0LL, 16, &v23, &v25);
        v17 = v29;
        v18 = 16LL;
        v16 = 0LL;
        goto LABEL_34;
      }
    }
    else
    {
      if ( (*(_WORD *)(a1 + 186) & 0x200) == 0 || (*(_DWORD *)(a1 + 4) & 0x7FE00000u) <= 0xA00000 )
        goto LABEL_45;
      v10 = CmVirtualKCBToRealPath(a1, &SourceString);
      if ( v10 < 0 )
        goto LABEL_46;
      RtlFreeAnsiString(&UnicodeString);
      v22 = v6->Length + SourceString.Length + 2;
      if ( v22 > 0xFFFF )
        goto LABEL_29;
      UnicodeString.MaximumLength = v6->Length + SourceString.Length + 2;
      UnicodeString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v22, 0x624E4D43u);
      if ( UnicodeString.Buffer )
      {
        RtlCopyUnicodeString(&UnicodeString, &SourceString);
        CmpUnicodeStringAppendCharacter(&UnicodeString);
        RtlAppendUnicodeStringToString(&UnicodeString, v6);
        goto LABEL_16;
      }
    }
    v10 = -1073741670;
    goto LABEL_46;
  }
LABEL_15:
  if ( v8 )
    goto LABEL_45;
LABEL_16:
  v13 = a4->Buffer;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = UnicodeString;
  UnicodeString.Buffer = 0LL;
LABEL_19:
  *a4 = v14;
  v10 = 260;
LABEL_46:
  RtlFreeAnsiString(&SourceString);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v10;
}
