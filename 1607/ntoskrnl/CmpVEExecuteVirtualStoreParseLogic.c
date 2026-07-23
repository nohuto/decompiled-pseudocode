/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x140601B14
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14000BA40 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x1400A6660 (RtlUnicodeStringCat.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpUnblockHiveWrites @ 0x1403E13D8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpVirtualBranchIsReplicated @ 0x1403E14A8 (CmpVirtualBranchIsReplicated.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 *     CmpFindPathByNameEx @ 0x1406010C8 (CmpFindPathByNameEx.c)
 *     CmpUnicodeStringAppendCharacter @ 0x140606B28 (CmpUnicodeStringAppendCharacter.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(__int64 a1, UNICODE_STRING *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 v6; // rsi
  int v9; // ebx
  unsigned int v10; // edx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  wchar_t *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING v17; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+A0h] [rbp+40h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v17, 0LL);
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(a1, a2, (char *)&v19) )
    goto LABEL_2;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 >= 0 )
  {
    v10 = a2->Length + DestinationString.Length + 2;
    if ( v10 <= 0xFFFF )
    {
      v17.MaximumLength = a2->Length + DestinationString.Length + 2;
      v17.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v10, 0x624E4D43u);
      if ( !v17.Buffer )
      {
        v9 = -1073741670;
        goto LABEL_24;
      }
      RtlUnicodeStringCopy(&v17, &DestinationString);
      CmpUnicodeStringAppendCharacter(&v17);
      RtlUnicodeStringCat(&v17, a2);
      if ( (*a3 & 1) != 0 && (_BYTE)v19 )
      {
        v9 = CmpBlockHiveWrites(0LL, 16, &v15);
        if ( v9 >= 0 )
        {
          PathByName = CmpFindPathByNameEx(0LL, (__m128i *)&v17, 0LL, 16, &v19, &v16);
          CmpUnblockHiveWrites(0LL, 16, v15);
          if ( PathByName )
          {
            Buffer = a4->Buffer;
            if ( Buffer )
              ExFreePoolWithTag(Buffer, 0);
            *a4 = v17;
            RtlInitUnicodeString(&v17, 0LL);
            v9 = 260;
            goto LABEL_22;
          }
          goto LABEL_2;
        }
        v6 = v15;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 4) & 0x7FE00000u) <= 0x800000 )
        {
LABEL_2:
          v9 = -1073741199;
          goto LABEL_22;
        }
        v13 = a4->Buffer;
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        *a4 = v17;
        RtlInitUnicodeString(&v17, 0LL);
        v9 = 260;
      }
      if ( v6 )
        CmpUnblockHiveWrites(0LL, 16, v6);
      goto LABEL_22;
    }
    v9 = -1073741811;
  }
LABEL_22:
  if ( v17.Buffer )
    ExFreePoolWithTag(v17.Buffer, 0);
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
