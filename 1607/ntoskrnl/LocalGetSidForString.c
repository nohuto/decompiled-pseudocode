/*
 * XREFs of LocalGetSidForString @ 0x1404BA830
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404B9DFC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     LookupSidInTable @ 0x1404BA8E4 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x1406CBA30 (LocalpConvertStringSidToSid.c)
 */

__int64 __fastcall LocalGetSidForString(
        wchar_t *a1,
        _QWORD *a2,
        _QWORD *a3,
        _BYTE *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  ULONG v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rax
  NTSTATUS v16; // eax
  int v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v12 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a4 = 0;
  if ( *a1 && a1[1] )
  {
    *a3 = a1 + 2;
    v13 = LookupSidInTable(a1, 0LL, v17, a8, (__int64)&v18);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
    }
    else
    {
      v14 = v18;
      if ( !v18 )
      {
        *a3 -= 4LL;
        v16 = LocalpConvertStringSidToSid(a1, a2, a3);
        if ( v16 >= 0 || (v12 = RtlNtStatusToDosError(v16)) == 0 )
        {
          if ( *a2 )
            *a4 = 1;
        }
        return v12;
      }
      *a4 = 1;
    }
    *a2 = v14;
    return v12;
  }
  return 1332LL;
}
