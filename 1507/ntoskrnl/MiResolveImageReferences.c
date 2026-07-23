/*
 * XREFs of MiResolveImageReferences @ 0x1405753E4
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     ApiSetResolveToHost @ 0x140153A68 (ApiSetResolveToHost.c)
 *     MiSessionReferenceImage @ 0x14015A40C (MiSessionReferenceImage.c)
 *     _strnicmp @ 0x14017206C (_strnicmp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     MiDereferenceImports @ 0x140453090 (MiDereferenceImports.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1404FEFE8 (RtlDuplicateUnicodeString.c)
 *     MiLoadImportDll @ 0x140571A68 (MiLoadImportDll.c)
 *     MiSnapThunk @ 0x1405758EC (MiSnapThunk.c)
 *     MiAllocateImportList @ 0x140575E70 (MiAllocateImportList.c)
 *     MiCompressImportList @ 0x140576CA0 (MiCompressImportList.c)
 *     MiFormFullImageName @ 0x14058298C (MiFormFullImageName.c)
 *     MiLogFailedDriverLoad @ 0x1406A0D4C (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x1406A1138 (MiSnapUnresolvedImport.c)
 */

__int64 __fastcall MiResolveImageReferences(char *a1, __int64 a2, void *a3, const UNICODE_STRING *a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  char *v6; // r12
  unsigned int *v7; // rax
  unsigned int *v8; // r13
  int v9; // ebx
  unsigned int v10; // esi
  int ImportList; // eax
  _QWORD *v12; // r14
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // eax
  const CHAR *v16; // rsi
  ULONG v17; // esi
  PVOID *v18; // rdi
  PVOID v19; // r12
  int v20; // eax
  char *v21; // rsi
  unsigned int i; // r15d
  unsigned int v24; // [rsp+38h] [rbp-91h]
  char v25; // [rsp+3Ch] [rbp-8Dh] BYREF
  __int64 v26; // [rsp+40h] [rbp-89h]
  ULONG Size[4]; // [rsp+48h] [rbp-81h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-71h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-51h] BYREF
  UNICODE_STRING StringIn; // [rsp+88h] [rbp-41h] BYREF
  UNICODE_STRING *p_String1; // [rsp+98h] [rbp-31h]
  __int64 v33; // [rsp+A0h] [rbp-29h] BYREF
  int v34; // [rsp+A8h] [rbp-21h] BYREF
  const wchar_t *v35; // [rsp+B0h] [rbp-19h]
  ULONG_PTR v36; // [rsp+B8h] [rbp-11h] BYREF
  _STRING DestinationString; // [rsp+C0h] [rbp-9h] BYREF

  v5 = a5;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  v6 = a1;
  HIWORD(UnicodeString.Buffer) = 0;
  v35 = L"\\SystemRoot\\System32\\drivers\\";
  UnicodeString.Length = 0;
  v34 = 3932218;
  if ( a5 )
    *a5 = -2LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 1u, Size);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  P[0] = 0LL;
  p_String1 = 0LL;
  v9 = 0;
  v26 = 0LL;
  v10 = 0;
  v24 = 0;
  String1.Buffer = 0LL;
  ImportList = MiAllocateImportList(v7, P);
  v12 = P[0];
  v13 = ImportList;
  v14 = 0LL;
  if ( v13 < 0 )
    goto LABEL_69;
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
    v13 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v14 = 0LL;
    if ( v13 < 0 )
      goto LABEL_68;
    if ( !UnicodeString.Buffer )
    {
      v13 = -1073741670;
LABEL_68:
      v10 = v24;
      goto LABEL_69;
    }
    v13 = ApiSetResolveToHost(qword_14034E968, &UnicodeString.Length, a2, &v25, (__int64)&StringIn);
    v14 = 0LL;
    if ( v13 < 0 )
      goto LABEL_68;
    if ( v25 )
    {
      RtlFreeAnsiString(&UnicodeString);
      if ( !StringIn.Length )
        goto LABEL_10;
      P[0] = &v34;
      Size[0] = 0x80000000;
      v13 = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
      v14 = 0LL;
      if ( v13 < 0 )
        goto LABEL_68;
    }
    else
    {
      P[0] = a3;
      Size[0] = 0;
    }
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
        v10 = v24;
        v13 = -1073741670;
        v14 = v26;
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
        goto LABEL_24;
      while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v18 + 11), 1u) )
      {
        v18 = (PVOID *)*v18;
        if ( v18 == &PsLoadedModuleList )
          goto LABEL_24;
      }
      v19 = v18[6];
      if ( (v9 & 1) == 0 && ((_DWORD)v18[13] & 0x1000) == 0 )
      {
        if ( (unsigned __int64)v19 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        {
          if ( !(unsigned int)MiSessionReferenceImage((unsigned __int64)v18[6]) )
            v19 = 0LL;
        }
        else if ( v5 || (unsigned __int64)(a1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
        {
          ++*((_WORD *)v18 + 54);
        }
      }
      if ( v19 )
        break;
      v6 = a1;
LABEL_24:
      if ( !(unsigned int)MiFormFullImageName(P[0], &UnicodeString, &StringIn) )
        goto LABEL_66;
      v13 = MiLoadImportDll((int)&StringIn, (int)a4, v17, &v36, &v33);
      if ( v13 == -1073741800 )
      {
        if ( (unsigned __int64)(v6 + 0x70000000000LL) > 0x7FFFFFFFFFLL )
          goto LABEL_27;
        v13 = MiLoadImportDll((int)&StringIn, (int)a4, v17 | 1, &v36, &v33);
      }
      if ( v13 == -1073741772 && !a4 && P[0] != &v34 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( !(unsigned int)MiFormFullImageName(&v34, &UnicodeString, &StringIn) )
        {
LABEL_66:
          v10 = v24;
          v13 = -1073741670;
          v14 = 0LL;
          goto LABEL_69;
        }
        v13 = MiLoadImportDll((int)&StringIn, 0, v17, &v36, &v33);
      }
LABEL_27:
      ExFreePoolWithTag(StringIn.Buffer, 0);
      v14 = 0LL;
      if ( v13 < 0 )
        goto LABEL_68;
    }
    if ( ((_DWORD)v18[13] & 0x1000) == 0 )
      v12[++v24] = v18;
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
LABEL_10:
    v8 += 5;
  }
  v20 = (int)a1;
  v21 = &a1[*v8];
  for ( i = (_DWORD)a1 + v8[4]; ; i += 8 )
  {
    if ( !*(_QWORD *)v21 )
    {
      v5 = a5;
      goto LABEL_7;
    }
    v13 = MiSnapThunk((_DWORD)v19, v20, (_DWORD)v21, i, 0LL);
    if ( v13 < 0 )
      break;
    v20 = (int)a1;
    v21 += 8;
  }
  v14 = MiSnapUnresolvedImport(a1, v21, v19);
  v10 = v24;
LABEL_69:
  MiLogFailedDriverLoad(a2, p_String1, v14, (unsigned int)v13);
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
  return (unsigned int)v13;
}
