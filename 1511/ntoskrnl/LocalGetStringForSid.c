/*
 * XREFs of LocalGetStringForSid @ 0x140686B20
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 *     GetPrintableOperandValue @ 0x140689058 (GetPrintableOperandValue.c)
 *     LocalGetStringForRelativeAttribute @ 0x14068ABD4 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x140685258 (LocalConvertSidToStringSidW.c)
 *     LookupSidInTable @ 0x1406872B8 (LookupSidInTable.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 */

__int64 __fastcall LocalGetStringForSid(PSID Sid1, wchar_t **a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  size_t v12; // rdi
  wchar_t *v13; // rax
  const wchar_t *v14; // r8
  int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v17 = 0LL;
  if ( Sid1 && a2 )
  {
    v9 = LookupSidInTable(0LL, Sid1, v16, a6, (__int64)&v17);
    v10 = v9;
    if ( v9 )
    {
      LODWORD(v9) = *(_DWORD *)(v9 + 12);
    }
    else
    {
      if ( !v17 )
      {
        v11 = LocalConvertSidToStringSidW(Sid1, a2);
        if ( v11 < 0 )
          return RtlNtStatusToDosError(v11);
        return v6;
      }
      v9 = -1LL;
      do
        ++v9;
      while ( aSa[v9] );
    }
    v12 = 2LL * (unsigned int)v9 + 2;
    v13 = (wchar_t *)SddlpAlloc(v12);
    *a2 = v13;
    if ( v13 )
    {
      v14 = (const wchar_t *)(v10 + 2);
      if ( !v10 )
        v14 = L"SA";
      wcscpy_s(v13, v12 >> 1, v14);
    }
    else
    {
      return 8;
    }
    return v6;
  }
  return 87LL;
}
