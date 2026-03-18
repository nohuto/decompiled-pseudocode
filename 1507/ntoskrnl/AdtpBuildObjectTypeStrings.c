/*
 * XREFs of AdtpBuildObjectTypeStrings @ 0x140585F2C
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AdtpAppendZString @ 0x140586114 (AdtpAppendZString.c)
 *     AdtpAppendString @ 0x14058615C (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     AdtpBuildGuidString @ 0x140587638 (AdtpBuildGuidString.c)
 */

__int64 __fastcall AdtpBuildObjectTypeStrings(
        int a1,
        int a2,
        int *a3,
        unsigned int a4,
        PUNICODE_STRING DestinationString,
        _BYTE *a6)
{
  int v6; // ebx
  int *v8; // rdi
  _BYTE *v9; // r13
  int *v10; // rsi
  unsigned int v11; // r14d
  int v12; // eax
  int v13; // r8d
  char v14; // di
  int appended; // ebx
  unsigned __int16 v16; // ax
  int v17; // r8d
  int v18; // r9d
  int v20; // [rsp+20h] [rbp-50h]
  char v21[4]; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  int v23; // [rsp+58h] [rbp-18h]
  UNICODE_STRING v24; // [rsp+60h] [rbp-10h] BYREF
  int v27; // [rsp+C0h] [rbp+50h]
  __int64 v28; // [rsp+C8h] [rbp+58h] BYREF

  v27 = (int)a3;
  v6 = a2;
  v22 = 0;
  v8 = a3;
  RtlInitUnicodeString(DestinationString, &word_1405C95F0);
  v9 = a6;
  *a6 = 0;
  if ( !a4 )
    return 0LL;
  qsort(v8, a4, 0x18uLL, (int (__cdecl *)(const void *, const void *))CompareObjectTypes);
  v10 = v8 + 5;
  v11 = 0;
  v12 = v8[5] - 1;
  v23 = v12;
  do
  {
    v13 = *v10;
    if ( *v10 != v12 )
    {
      v23 = *v10;
      if ( v13 )
      {
        appended = AdtpBuildAccessesString(a1, v6, v13, 1, &v24, 0LL, 0LL, 0LL, (__int64)&v28);
        if ( appended < 0 )
          return (unsigned int)appended;
        v14 = v28;
      }
      else
      {
        RtlInitUnicodeString(&v24, L"---\r\n");
        v14 = 0;
        LOBYTE(v28) = 0;
      }
      appended = AdtpAppendString(DestinationString, v9, &v24, &v22);
      if ( v14 )
        ExFreePoolWithTag(v24.Buffer, 0);
      if ( appended < 0 )
        return (unsigned int)appended;
      LODWORD(v8) = v27;
    }
    v16 = *((_WORD *)v10 - 1);
    if ( v16 >= 4u )
      v16 = 3;
    appended = AdtpAppendZString(DestinationString, v9, off_1402A03C0[v16], &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v21[0] = 0;
    appended = AdtpBuildGuidString((unsigned int)v8 + 24 * v11, (unsigned int)&v24, v17, v18, v20, (__int64)v21);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendString(DestinationString, v9, &v24, &v22);
    ExFreePoolWithTag(v24.Buffer, 0);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendZString(DestinationString, v9, L"\r\n", &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v12 = v23;
    ++v11;
    v6 = a2;
    v10 += 6;
  }
  while ( v11 < a4 );
  return 0;
}
