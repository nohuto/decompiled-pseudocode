/*
 * XREFs of AdtpBuildObjectTypeStrings @ 0x1406D1C48
 * Callers:
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AdtpBuildGuidString @ 0x1406D03E0 (AdtpBuildGuidString.c)
 *     AdtpAppendString @ 0x1406D15D4 (AdtpAppendString.c)
 *     AdtpAppendZString @ 0x1406D1770 (AdtpAppendZString.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildObjectTypeStrings(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int *a3,
        unsigned int a4,
        PUNICODE_STRING DestinationString,
        _BYTE *a6)
{
  const UNICODE_STRING *v6; // rbx
  size_t v7; // r15
  int *v8; // rdi
  __int64 v9; // r13
  int *v11; // rsi
  __int64 v12; // r14
  int v13; // eax
  int v14; // r8d
  char v15; // di
  int appended; // ebx
  unsigned __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+20h] [rbp-50h]
  char v21[4]; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  int v23; // [rsp+58h] [rbp-18h]
  UNICODE_STRING v24; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a2;
  v22 = 0;
  v7 = a4;
  v8 = a3;
  RtlInitUnicodeString(DestinationString, &word_1405841A0);
  v9 = (__int64)a6;
  *a6 = 0;
  if ( !(_DWORD)v7 )
    return 0LL;
  qsort(v8, v7, 0x18uLL, (int (__cdecl *)(const void *, const void *))CompareObjectTypes);
  v11 = v8 + 5;
  v12 = 0LL;
  v13 = v8[5] - 1;
  v23 = v13;
  do
  {
    v14 = *v11;
    if ( *v11 != v13 )
    {
      v23 = *v11;
      if ( v14 )
      {
        appended = AdtpBuildAccessesString(a1, v6, v14, 1, &v24, 0LL, 0LL, 0LL, &v28);
        if ( appended < 0 )
          return (unsigned int)appended;
        v15 = v28;
      }
      else
      {
        RtlInitUnicodeString(&v24, L"---\r\n");
        v15 = 0;
        LOBYTE(v28) = 0;
      }
      appended = AdtpAppendString((__int64)DestinationString, v9, &v24, &v22);
      if ( v15 )
        ExFreePoolWithTag(v24.Buffer, 0);
      if ( appended < 0 )
        return (unsigned int)appended;
      v8 = a3;
    }
    v17 = *((_WORD *)v11 - 1);
    if ( v17 >= 4u )
      v17 = 3;
    appended = AdtpAppendZString((__int64)DestinationString, v9, (&off_14025D6C0)[v17], &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v21[0] = 0;
    appended = AdtpBuildGuidString((unsigned int *)&v8[6 * v12], (__int64)&v24, v18, v19, v20, v21);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendString((__int64)DestinationString, v9, &v24, &v22);
    ExFreePoolWithTag(v24.Buffer, 0);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendZString((__int64)DestinationString, v9, L"\r\n", &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v13 = v23;
    v12 = (unsigned int)(v12 + 1);
    v6 = a2;
    v11 += 6;
  }
  while ( (unsigned int)v12 < (unsigned int)v7 );
  return 0;
}
