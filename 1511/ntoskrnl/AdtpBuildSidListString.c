/*
 * XREFs of AdtpBuildSidListString @ 0x14068C724
 * Callers:
 *     AdtpPackageParameters @ 0x14013B28C (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1403BD9A0 (RtlLengthSidAsUnicodeString.c)
 */

__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, wchar_t **a3, __int64 a4, __int64 a5, char *a6)
{
  NTSTATUS appended; // ebx
  wchar_t *PoolWithTag; // r14
  char v10; // r15
  unsigned int v11; // r12d
  unsigned int v12; // esi
  void **v13; // r14
  void *v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  unsigned __int16 Length; // ax
  unsigned int v19; // r12d
  __int64 v20; // rsi
  PSID *v21; // rsi
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  ULONG StringLength; // [rsp+24h] [rbp-DCh] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  char *v27; // [rsp+48h] [rbp-B8h]
  char v28; // [rsp+50h] [rbp-B0h] BYREF

  *(_QWORD *)&Destination.Length = a4;
  *(_QWORD *)&UnicodeString.Length = a5;
  appended = 0;
  v27 = a6;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( !a1 || (v11 = *a1) == 0 )
  {
    if ( a3 )
    {
      a3[1] = (wchar_t *)4;
      *a3 = (wchar_t *)&unk_140244D08;
    }
LABEL_23:
    if ( appended >= 0 )
      goto LABEL_26;
    goto LABEL_24;
  }
  v12 = 1;
  v13 = (void **)(*((_QWORD *)a1 + 1) + 8LL);
  v23 = 0;
  do
  {
    v14 = *v13;
    StringLength = 0;
    RtlLengthSidAsUnicodeString(v14, &StringLength);
    v15 = v12 + (StringLength >> 1) + 7;
    if ( v15 < v12 )
    {
      appended = -1073741675;
      goto LABEL_26;
    }
    v13 += 2;
    ++v23;
    v12 += (StringLength >> 1) + 7;
    appended = 0;
  }
  while ( v23 < v11 );
  if ( v15 > 0x7FFF )
  {
    appended = -1073741811;
    goto LABEL_26;
  }
  v16 = **(unsigned int **)&UnicodeString.Length;
  v17 = v16 + v15;
  if ( (unsigned int)v16 + v12 >= 0x400 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x6B416553u);
    if ( !PoolWithTag )
    {
      appended = -1073741801;
      goto LABEL_26;
    }
    v10 = 1;
  }
  else
  {
    PoolWithTag = (wchar_t *)(*(_QWORD *)&Destination.Length + 2 * v16);
    **(_DWORD **)&UnicodeString.Length = v17;
  }
  Destination.Buffer = PoolWithTag;
  Length = 0;
  v19 = 0;
  Destination.MaximumLength = 2 * v12;
  v20 = *((_QWORD *)a1 + 1);
  Destination.Length = 0;
  *(_DWORD *)&UnicodeString.Length = 0x2000000;
  UnicodeString.Buffer = (wchar_t *)&v28;
  if ( !*a1 )
  {
LABEL_19:
    if ( a3 )
    {
      *a3 = PoolWithTag;
      a3[1] = (wchar_t *)((unsigned int)Length + 2);
    }
    goto LABEL_23;
  }
  v21 = (PSID *)(v20 + 8);
  while ( 1 )
  {
    appended = RtlConvertSidToUnicodeString(&UnicodeString, *v21, 0);
    if ( appended < 0 )
      break;
    RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    ++v19;
    v21 += 2;
    appended = RtlAppendUnicodeToString(&Destination, L"}");
    if ( v19 >= *a1 )
    {
      Length = Destination.Length;
      goto LABEL_19;
    }
  }
LABEL_24:
  if ( v10 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    v10 = 0;
  }
LABEL_26:
  *v27 = v10;
  return (unsigned int)appended;
}
