/*
 * XREFs of LocalGetStringForSid @ 0x14070A0FC
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 *     GetPrintableOperandValue @ 0x14070AA38 (GetPrintableOperandValue.c)
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     RtlNtStatusToDosError @ 0x140529030 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x140709DE4 (LocalConvertSidToStringSidW.c)
 *     LookupSidInTable @ 0x14070A2A8 (LookupSidInTable.c)
 *     SddlpAlloc @ 0x14070A49C (SddlpAlloc.c)
 */

__int64 __fastcall LocalGetStringForSid(PSID Sid, wchar_t **a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // eax
  size_t v9; // rdi
  wchar_t *v10; // rax
  const wchar_t *v11; // r8

  v3 = 0;
  if ( !Sid || !a2 )
    return 87LL;
  v6 = LookupSidInTable(Sid, Sid, a3);
  v7 = v6;
  if ( v6 )
  {
    v9 = 2LL * *(unsigned int *)(v6 + 12) + 2;
    v10 = (wchar_t *)SddlpAlloc(v9);
    *a2 = v10;
    if ( v10 )
    {
      v11 = (const wchar_t *)(v7 + 2);
      if ( !v7 )
        v11 = L"SA";
      wcscpy_s(v10, v9 >> 1, v11);
    }
    else
    {
      return 8;
    }
  }
  else
  {
    v8 = LocalConvertSidToStringSidW(Sid, a2);
    if ( v8 < 0 )
      return RtlNtStatusToDosError(v8);
  }
  return v3;
}
