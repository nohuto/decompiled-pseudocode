/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005EF4C
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005EEAC (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1C00011A8 (RtlUnicodeStringCopy.c)
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C00013A8 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00675B8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C006766C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C009DCB0 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C009DCD4 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 */

__int64 __fastcall SortMonitorSetIdAndAppendHash(struct _UNICODE_STRING *a1)
{
  CCD_SET_STRING_ID *v2; // rax
  CCD_SET_STRING_ID *v3; // rdi
  const struct _STRING *ConnectedSetStr; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v2 = (CCD_SET_STRING_ID *)operator new[](0x38uLL, 0x63644356u, PagedPool);
  if ( v2 )
    v3 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v2, a1);
  else
    v3 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v3);
  v5 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&SourceString, ConnectedSetStr);
  v7 = v5;
  if ( v5 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    memset(a1->Buffer, 0, a1->MaximumLength);
    a1->Length = 0;
    RtlUnicodeStringCopy(a1, &SourceString);
    CCD_SET_STRING_ID::_CcdFreeUnicodeString(&SourceString);
    if ( v3 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v3);
  }
  return (unsigned int)v7;
}
