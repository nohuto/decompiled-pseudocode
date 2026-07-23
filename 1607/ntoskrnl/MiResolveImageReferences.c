/*
 * XREFs of MiResolveImageReferences @ 0x14046B54C
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     ApiSetResolveToHost @ 0x1400AFF58 (ApiSetResolveToHost.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     MiSessionReferenceImage @ 0x140131DE8 (MiSessionReferenceImage.c)
 *     _strnicmp @ 0x14014D97C (_strnicmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1403F6E40 (RtlDuplicateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     MiSnapThunk @ 0x14046BA04 (MiSnapThunk.c)
 *     MiAllocateImportList @ 0x1404CD8D0 (MiAllocateImportList.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404CD96C (PsQueryCurrentApiSetSchema.c)
 *     MiCompressImportList @ 0x1404CDDAC (MiCompressImportList.c)
 *     MiLoadImportDll @ 0x140544744 (MiLoadImportDll.c)
 *     MiDereferenceImports @ 0x1405449F8 (MiDereferenceImports.c)
 *     MiFormFullImageName @ 0x140544B88 (MiFormFullImageName.c)
 *     MiLogFailedDriverLoad @ 0x140659484 (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x140659878 (MiSnapUnresolvedImport.c)
 */

__int64 __fastcall MiResolveImageReferences(void *a1, __int64 a2, int *a3, const UNICODE_STRING *a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  unsigned __int64 v6; // r14
  unsigned int *v7; // rax
  unsigned int *v8; // r13
  int v9; // ebx
  unsigned int v10; // esi
  int ImportList; // eax
  _QWORD *v12; // r15
  int ImportDll; // edi
  unsigned int v14; // eax
  const CHAR *v15; // rsi
  __int64 CurrentApiSetSchema; // rax
  int *v17; // rsi
  PVOID *v18; // rdi
  ULONG v19; // r12d
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rsi
  int v23; // eax
  unsigned int i; // r14d
  __int64 v26; // rax
  unsigned int v27; // [rsp+38h] [rbp-81h]
  char v28[4]; // [rsp+3Ch] [rbp-7Dh] BYREF
  __int64 v29; // [rsp+40h] [rbp-79h]
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-71h] BYREF
  ULONG Size[4]; // [rsp+58h] [rbp-61h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-51h] BYREF
  UNICODE_STRING StringIn; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING *p_String1; // [rsp+88h] [rbp-31h]
  int *v35; // [rsp+90h] [rbp-29h]
  _BYTE v36[8]; // [rsp+98h] [rbp-21h] BYREF
  char v37; // [rsp+A0h] [rbp-19h] BYREF
  int v38; // [rsp+A8h] [rbp-11h] BYREF
  const wchar_t *v39; // [rsp+B0h] [rbp-9h]
  _STRING DestinationString; // [rsp+B8h] [rbp-1h] BYREF

  v5 = a5;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  v6 = (unsigned __int64)a1;
  HIWORD(UnicodeString.Buffer) = 0;
  v39 = L"\\SystemRoot\\System32\\drivers\\";
  UnicodeString.Length = 0;
  v38 = 3932218;
  if ( a5 )
    *a5 = -2LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 1u, Size);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  *(_QWORD *)Size = 0LL;
  p_String1 = 0LL;
  v9 = 0;
  v29 = 0LL;
  v10 = 0;
  v27 = 0;
  String1.Buffer = 0LL;
  ImportList = MiAllocateImportList(v7, Size);
  v12 = *(_QWORD **)Size;
  ImportDll = ImportList;
  if ( ImportList < 0 )
  {
    v26 = 0LL;
    goto LABEL_74;
  }
  v14 = v8[3];
  if ( !v14 )
  {
LABEL_43:
    if ( v5 )
      *v5 = MiCompressImportList(v12);
    else
      ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  while ( 1 )
  {
    if ( !*v8 )
    {
LABEL_42:
      v5 = a5;
      goto LABEL_43;
    }
    v15 = (const CHAR *)(v6 + v14);
    p_String1 = 0LL;
    RtlInitAnsiString(&DestinationString, v15);
    ImportDll = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    if ( ImportDll < 0 )
      goto LABEL_68;
    if ( !UnicodeString.Buffer )
    {
      v26 = v29;
      ImportDll = -1073741670;
      goto LABEL_71;
    }
    CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
    ImportDll = ApiSetResolveToHost(CurrentApiSetSchema, &UnicodeString.Length, a2, v28, (__int64)&StringIn);
    if ( ImportDll < 0 )
      goto LABEL_68;
    if ( !v28[0] )
    {
      Size[0] = 0;
      v35 = a3;
      goto LABEL_12;
    }
    RtlFreeAnsiString(&UnicodeString);
    if ( StringIn.Length )
      break;
    v8 += 5;
LABEL_41:
    v14 = v8[3];
    if ( !v14 )
      goto LABEL_42;
  }
  Size[0] = 0x80000000;
  v35 = &v38;
  ImportDll = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
  if ( ImportDll < 0 )
    goto LABEL_68;
LABEL_12:
  if ( !a4 || !strnicmp(v15, "ntoskrnl", 8uLL) || !strnicmp(v15, "hal", 3uLL) )
  {
    String1 = UnicodeString;
  }
  else
  {
    String1.MaximumLength = UnicodeString.Length + a4->Length;
    String1.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, String1.MaximumLength, 0x54446D4Du);
    if ( !String1.Buffer )
    {
LABEL_67:
      ImportDll = -1073741670;
LABEL_68:
      v10 = v27;
      v26 = v29;
      goto LABEL_74;
    }
    String1.Length = 0;
    RtlAppendUnicodeStringToString(&String1, a4);
    RtlAppendUnicodeStringToString(&String1, &UnicodeString);
    v9 |= 2u;
  }
  v17 = v35;
  p_String1 = &String1;
  v9 &= ~1u;
  while ( 2 )
  {
    v18 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_18;
    while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v18 + 11), 1u) )
    {
      v18 = (PVOID *)*v18;
      if ( v18 == &PsLoadedModuleList )
        goto LABEL_18;
    }
    v20 = (unsigned __int64)v18[6];
    if ( (v9 & 1) == 0 && ((_DWORD)v18[13] & 0x1000) == 0 )
    {
      if ( v20 >= qword_140326950 && v20 < qword_140326950 + 0x8000000000LL )
      {
        if ( !(unsigned int)MiSessionReferenceImage((unsigned __int64)v18[6]) )
          v20 = 0LL;
      }
      else if ( a5 || v6 >= qword_140326950 && v6 < qword_140326950 + 0x8000000000LL )
      {
        ++*((_WORD *)v18 + 54);
      }
    }
    if ( !v20 )
    {
LABEL_18:
      if ( !(unsigned int)MiFormFullImageName(v17, &UnicodeString, &StringIn) )
        goto LABEL_67;
      v19 = Size[0];
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, Size[0], (unsigned int)&v37, (__int64)v36);
      if ( ImportDll == -1073741800 )
      {
        if ( v6 < qword_140326950 || v6 >= qword_140326950 + 0x8000000000LL )
        {
LABEL_21:
          ExFreePoolWithTag(StringIn.Buffer, 0);
          if ( ImportDll < 0 )
          {
            v10 = v27;
            v26 = 0LL;
            goto LABEL_74;
          }
          v9 |= 1u;
          continue;
        }
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v19 | 1, (unsigned int)&v37, (__int64)v36);
      }
      if ( ImportDll == -1073741772 && !a4 && v17 != &v38 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( !(unsigned int)MiFormFullImageName(&v38, &UnicodeString, &StringIn) )
          goto LABEL_67;
        ImportDll = MiLoadImportDll((unsigned int)&StringIn, 0, v19, (unsigned int)&v37, (__int64)v36);
      }
      goto LABEL_21;
    }
    break;
  }
  if ( ((_DWORD)v18[13] & 0x1000) == 0 )
    v12[++v27] = v18;
  v21 = *v8;
  if ( !(_DWORD)v21 )
  {
LABEL_38:
    RtlFreeAnsiString(&UnicodeString);
    if ( (v9 & 2) != 0 )
    {
      ExFreePoolWithTag(String1.Buffer, 0);
      v9 &= ~2u;
    }
    v8 += 5;
    goto LABEL_41;
  }
  v22 = (_QWORD *)(v6 + v21);
  v23 = (int)a1;
  for ( i = (_DWORD)a1 + v8[4]; ; i += 8 )
  {
    if ( !*v22 )
    {
      v6 = (unsigned __int64)a1;
      goto LABEL_38;
    }
    ImportDll = MiSnapThunk(v20, v23, (_DWORD)v22, i, 0LL);
    if ( ImportDll < 0 )
      break;
    v23 = (int)a1;
    ++v22;
  }
  v26 = MiSnapUnresolvedImport(a1, v22, v20);
LABEL_71:
  v10 = v27;
LABEL_74:
  MiLogFailedDriverLoad(a2, p_String1, v26, (unsigned int)ImportDll);
  if ( (v9 & 2) != 0 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( v12 )
  {
    if ( v10 != *v12 )
      *v12 = v10;
    MiDereferenceImports(v12);
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)ImportDll;
}
