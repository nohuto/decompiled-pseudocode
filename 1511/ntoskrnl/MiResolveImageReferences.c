/*
 * XREFs of MiResolveImageReferences @ 0x1403CCAA8
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ApiSetResolveToHost @ 0x14001A02C (ApiSetResolveToHost.c)
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     MiSessionReferenceImage @ 0x14011FF1C (MiSessionReferenceImage.c)
 *     _strnicmp @ 0x140143FEC (_strnicmp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiDereferenceImports @ 0x1403CBF88 (MiDereferenceImports.c)
 *     MiCompressImportList @ 0x1403CC38C (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x1403CC768 (MiAllocateImportList.c)
 *     MiSnapThunk @ 0x1403CCF50 (MiSnapThunk.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1404470E8 (RtlDuplicateUnicodeString.c)
 *     MiLoadImportDll @ 0x14050A29C (MiLoadImportDll.c)
 *     MiFormFullImageName @ 0x14050B410 (MiFormFullImageName.c)
 *     MiLogFailedDriverLoad @ 0x1406216B4 (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x140621AA8 (MiSnapUnresolvedImport.c)
 */

__int64 __fastcall MiResolveImageReferences(
        char *a1,
        __int64 a2,
        void *a3,
        const UNICODE_STRING *a4,
        unsigned __int64 **a5)
{
  unsigned __int64 **v5; // r15
  char *v6; // r12
  unsigned int *v7; // rax
  unsigned int *v8; // r13
  int v9; // ebx
  unsigned int v10; // esi
  int ImportList; // eax
  unsigned __int64 *v12; // r14
  int ImportDll; // edi
  __int64 v14; // rax
  unsigned int v15; // eax
  const CHAR *v16; // rsi
  ULONG v17; // esi
  PVOID *v18; // rdi
  BOOLEAN v19; // al
  __int64 v20; // r8
  __int64 v21; // r12
  int v22; // eax
  char *v23; // rsi
  unsigned int i; // r15d
  int v25; // eax
  unsigned int v27; // [rsp+38h] [rbp-91h]
  char v28; // [rsp+3Ch] [rbp-8Dh] BYREF
  __int64 v29; // [rsp+40h] [rbp-89h]
  ULONG Size[4]; // [rsp+48h] [rbp-81h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-71h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-51h] BYREF
  UNICODE_STRING StringIn; // [rsp+88h] [rbp-41h] BYREF
  UNICODE_STRING *p_String1; // [rsp+98h] [rbp-31h]
  char v36[8]; // [rsp+A0h] [rbp-29h] BYREF
  int v37; // [rsp+A8h] [rbp-21h] BYREF
  const wchar_t *v38; // [rsp+B0h] [rbp-19h]
  char v39; // [rsp+B8h] [rbp-11h] BYREF
  _STRING DestinationString; // [rsp+C0h] [rbp-9h] BYREF

  v5 = a5;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  v6 = a1;
  HIWORD(UnicodeString.Buffer) = 0;
  v38 = L"\\SystemRoot\\System32\\drivers\\";
  UnicodeString.Length = 0;
  v37 = 3932218;
  if ( a5 )
    *a5 = (unsigned __int64 *)-2LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 1u, Size);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  P[0] = 0LL;
  p_String1 = 0LL;
  v9 = 0;
  v29 = 0LL;
  v10 = 0;
  v27 = 0;
  String1.Buffer = 0LL;
  ImportList = MiAllocateImportList(v7, P);
  v12 = (unsigned __int64 *)P[0];
  ImportDll = ImportList;
  v14 = 0LL;
  if ( ImportDll < 0 )
    goto LABEL_69;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = v8[3];
      if ( !v15 || !*v8 )
      {
        if ( v5 )
          *v5 = MiCompressImportList(v12);
        else
          ExFreePoolWithTag(v12, 0);
        return 0LL;
      }
      v16 = &v6[v15];
      p_String1 = 0LL;
      RtlInitAnsiString(&DestinationString, v16);
      ImportDll = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      v14 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_68;
      if ( !UnicodeString.Buffer )
      {
        ImportDll = -1073741670;
LABEL_68:
        v10 = v27;
        goto LABEL_69;
      }
      ImportDll = ApiSetResolveToHost(qword_1402FE4A0, &UnicodeString.Length, a2, &v28, (__int64)&StringIn);
      v14 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_68;
      if ( !v28 )
        break;
      RtlFreeAnsiString(&UnicodeString);
      if ( StringIn.Length )
      {
        P[0] = &v37;
        Size[0] = 0x80000000;
        ImportDll = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
        v14 = 0LL;
        if ( ImportDll < 0 )
          goto LABEL_68;
        goto LABEL_17;
      }
      v8 += 5;
    }
    P[0] = a3;
    Size[0] = 0;
LABEL_17:
    if ( !a4 || !strnicmp(v16, "ntoskrnl", 8uLL) || !strnicmp(v16, "hal", 3uLL) )
    {
      String1 = UnicodeString;
    }
    else
    {
      String1.MaximumLength = UnicodeString.Length + a4->Length;
      String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, String1.MaximumLength, 0x54446D4Du);
      if ( !String1.Buffer )
      {
        v10 = v27;
        ImportDll = -1073741670;
        v14 = v29;
        goto LABEL_69;
      }
      String1.Length = 0;
      RtlAppendUnicodeStringToString(&String1, a4);
      RtlAppendUnicodeStringToString(&String1, &UnicodeString);
      v9 |= 2u;
    }
    v17 = Size[0];
    p_String1 = &String1;
    for ( v9 &= ~1u; ; v9 |= 1u )
    {
      v18 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList == &PsLoadedModuleList )
        goto LABEL_23;
      while ( 1 )
      {
        v19 = RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v18 + 11), 1u);
        v20 = 0LL;
        if ( v19 )
          break;
        v18 = (PVOID *)*v18;
        if ( v18 == &PsLoadedModuleList )
          goto LABEL_23;
      }
      v21 = (__int64)v18[6];
      if ( (v9 & 1) == 0 && ((_DWORD)v18[13] & 0x1000) == 0 )
      {
        if ( (unsigned __int64)(v21 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
        {
          if ( !(unsigned int)MiSessionReferenceImage((__int64)v18[6]) )
            v21 = v20;
        }
        else if ( v5 || (unsigned __int64)(a1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
        {
          ++*((_WORD *)v18 + 54);
        }
      }
      if ( v21 )
        break;
      v6 = a1;
LABEL_23:
      if ( !(unsigned int)MiFormFullImageName(P[0], &UnicodeString, &StringIn) )
        goto LABEL_66;
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17, (unsigned int)&v39, (__int64)v36);
      if ( ImportDll == -1073741800 )
      {
        if ( (unsigned __int64)(v6 + 0x70000000000LL) > 0x7FFFFFFFFFLL )
          goto LABEL_26;
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v17 | 1, (unsigned int)&v39, (__int64)v36);
      }
      if ( ImportDll == -1073741772 && !a4 && P[0] != &v37 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( !(unsigned int)MiFormFullImageName(&v37, &UnicodeString, &StringIn) )
        {
LABEL_66:
          v10 = v27;
          ImportDll = -1073741670;
          v14 = 0LL;
          goto LABEL_69;
        }
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, 0, v17, (unsigned int)&v39, (__int64)v36);
      }
LABEL_26:
      ExFreePoolWithTag(StringIn.Buffer, 0);
      v14 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_68;
    }
    if ( ((_DWORD)v18[13] & 0x1000) == 0 )
      v12[++v27] = (unsigned __int64)v18;
    if ( *v8 )
      break;
LABEL_7:
    RtlFreeAnsiString(&UnicodeString);
    if ( (v9 & 2) != 0 )
    {
      ExFreePoolWithTag(String1.Buffer, 0);
      v9 &= ~2u;
    }
    v6 = a1;
    v8 += 5;
  }
  v22 = (int)a1;
  v23 = &a1[*v8];
  for ( i = (_DWORD)a1 + v8[4]; ; i += 8 )
  {
    if ( *(_QWORD *)v23 == v20 )
    {
      v5 = a5;
      goto LABEL_7;
    }
    v25 = MiSnapThunk(v21, v22, (_DWORD)v23, i, v20);
    v20 = 0LL;
    ImportDll = v25;
    if ( v25 < 0 )
      break;
    v22 = (int)a1;
    v23 += 8;
  }
  v14 = MiSnapUnresolvedImport(a1, v23, v21);
  v10 = v27;
LABEL_69:
  MiLogFailedDriverLoad(a2, p_String1, v14, (unsigned int)ImportDll);
  if ( (v9 & 2) != 0 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( v12 )
  {
    if ( v10 != *v12 )
      *v12 = v10;
    MiDereferenceImports((unsigned __int64)v12);
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)ImportDll;
}
