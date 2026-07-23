/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x1403E1228
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpUnblockHiveWrites @ 0x1403E13D8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpVirtualBranchIsReplicated @ 0x1403E14A8 (CmpVirtualBranchIsReplicated.c)
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmpIsKeyDeleted @ 0x140403EF0 (CmpIsKeyDeleted.c)
 *     CmpFindPathByNameEx @ 0x1406010C8 (CmpFindPathByNameEx.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __int64 a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // r15
  int v10; // ebx
  char PathByName; // al
  char v12; // r13
  __int64 v13; // rax
  wchar_t *Buffer; // rcx
  _BYTE v16[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-2Ch] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v5 = 0LL;
  v19 = 0LL;
  v7 = a2;
  v8 = 0LL;
  v9 = 0LL;
  HvpGetCellContextReinitialize((__int64)v18);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (unsigned __int8)CmpIsKeyDeleted(a1, 0LL) )
  {
    v12 = 0;
  }
  else
  {
    v10 = CmpBlockHiveWrites(*(_QWORD *)(a1 + 24), 0LL, 0LL);
    if ( v10 < 0 )
      goto LABEL_19;
    v8 = *(_QWORD *)(a1 + 24);
    PathByName = CmpFindPathByNameEx(a1, v7, 0, 0, (__int64)&v17, (__int64)&v19);
    v5 = v19;
    v12 = PathByName;
    if ( PathByName )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v19 + 8))(v19, v17, v18);
      v9 = v13;
      if ( !v13 )
      {
        v10 = -1073741670;
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(v13 + 52) & 0x200000) != 0 )
      {
LABEL_18:
        v10 = -1073741199;
        goto LABEL_19;
      }
      (*(void (__fastcall **)(__int64, _BYTE *))(v5 + 16))(v5, v18);
      v9 = 0LL;
    }
    CmpUnblockHiveWrites(*(_QWORD *)(a1 + 24), 0LL, 0LL);
    v8 = 0LL;
  }
  v10 = CmRealKCBToVirtualPath(a1, a2, &DestinationString);
  if ( v10 < 0 )
    goto LABEL_19;
  *a3 |= 8u;
  if ( !(unsigned __int8)CmpVirtualBranchIsReplicated(0LL, &DestinationString, v16)
    && ((*a3 & 1) == 0 || v12 || !v16[0]) )
  {
    goto LABEL_18;
  }
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v10 = 260;
LABEL_19:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _BYTE *))(v5 + 16))(v5, v18);
  if ( v8 )
    CmpUnblockHiveWrites(v8, 0LL, 0LL);
  return (unsigned int)v10;
}
