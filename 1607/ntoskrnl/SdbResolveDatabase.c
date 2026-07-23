/*
 * XREFs of SdbResolveDatabase @ 0x1406C45E4
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1406C4354 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     SdbGetAppPatchDirEx @ 0x1406C4544 (SdbGetAppPatchDirEx.c)
 *     SdbpGetStandardDatabasePath @ 0x1406C49CC (SdbpGetStandardDatabasePath.c)
 *     AslGuidToString_UStr @ 0x1406C5234 (AslGuidToString_UStr.c)
 *     AslRegistryGetUInt32_UStr @ 0x1406C5860 (AslRegistryGetUInt32_UStr.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbResolveDatabase(__int64 a1, _QWORD *a2, int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // r14
  unsigned int v11; // edi
  wchar_t *v12; // r15
  GUID **v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  const char *v17; // r9
  int v18; // r8d
  unsigned __int16 v19; // di
  wchar_t *v20; // rax
  __int64 v21; // rax
  int v22; // r8d
  const char *v23; // r9
  __int16 v24; // ax
  HANDLE v25; // rcx
  wchar_t *Buffer; // rbx
  __int64 v27; // rcx
  UNICODE_STRING v28; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+5Fh] BYREF

  result = 0LL;
  a5 = 0;
  KeyHandle = 0LL;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  LODWORD(v10) = 0;
  HIWORD(Destination.Buffer) = 0;
  v11 = 0;
  Source.Length = 0;
  v12 = 0LL;
  *(_QWORD *)&Source.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  HIWORD(Source.Buffer) = 0;
  v28.Length = 0;
  *(_QWORD *)&v28.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v28.Buffer + 2) = 0;
  HIWORD(v28.Buffer) = 0;
  if ( !a4 )
    return result;
  *a4 = 0;
  v13 = &off_1402F4BF8;
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)&(*v13)->Data1 - *a2;
    if ( !v15 )
      v15 = *(_QWORD *)(*v13)->Data4 - a2[1];
    if ( !v15 )
      break;
    ++v14;
    v13 += 2;
    if ( (unsigned __int64)v14 >= 3 )
      goto LABEL_9;
  }
  v11 = *((_DWORD *)&(&off_1402F4BF8)[2 * v14] + 2);
  a5 = v11;
LABEL_9:
  if ( (unsigned __int64)v14 < 3 )
  {
    result = SdbpGetStandardDatabasePath(a1, v11, v13, a4, 260);
    if ( a3 )
      *a3 = v11;
    return result;
  }
  if ( (int)AslGuidToString_UStr(&Source, a2, v13) >= 0 )
  {
    v19 = Source.Length + 184;
    v20 = (wchar_t *)AslAlloc(v16, (unsigned int)Source.Length + 184);
    v12 = v20;
    if ( !v20 )
    {
      v17 = "Failed to allocate %ld bytes for key path";
      v18 = 1112;
      goto LABEL_14;
    }
    Destination.Buffer = v20;
    Destination.MaximumLength = v19;
    Destination.Length = 0;
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes) < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabase", 1128, (unsigned int)"Failed to open Key \"%ws\" [%x]");
      goto LABEL_42;
    }
    if ( a3 )
    {
      if ( (int)AslRegistryGetUInt32_UStr(&a5, KeyHandle, &g_ustrDatabaseType) < 0 )
      {
        AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabase", 1140, (unsigned int)"Failed to get database type [%x]");
        *a3 = 0;
        goto LABEL_42;
      }
      *a3 = a5 & 0x7FFFFFFF;
    }
    SdbGetAppPatchDirEx(a1, a4, 0x104u, 0);
    v21 = -1LL;
    v28.Buffer = a4;
    do
      ++v21;
    while ( a4[v21] );
    v28.Length = 2 * v21;
    v28.MaximumLength = 520;
    if ( RtlAppendUnicodeToString(&v28, L"\\CUSTOM\\") >= 0 )
    {
      v24 = *(_WORD *)(a1 + 568);
      if ( (v24 == -31132 || v24 == 512 || v24 == -21916) && RtlAppendUnicodeToString(&v28, L"CUSTOM64\\") < 0 )
      {
        v22 = 1165;
      }
      else
      {
        if ( RtlAppendUnicodeStringToString(&v28, &Source) < 0 )
        {
          v23 = "RtlAppendUnicodeStringToString failed while creating CustomSdb path [%x]";
          v22 = 1174;
          goto LABEL_28;
        }
        if ( RtlAppendUnicodeToString(&v28, L".sdb") >= 0 )
        {
          if ( v28.Length < (unsigned __int64)v28.MaximumLength - 2 )
          {
            v10 = v28.Length >> 1;
            a4[v10] = 0;
            goto LABEL_42;
          }
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbResolveDatabase",
            1189,
            (unsigned int)"Insufficient buffer for the database path");
          goto LABEL_29;
        }
        v22 = 1182;
      }
    }
    else
    {
      v22 = 1156;
    }
    v23 = "RtlAppendUnicodeToString failed while creating CustomSdb path [%x]";
LABEL_28:
    AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabase", v22, (_DWORD)v23);
LABEL_29:
    *a4 = 0;
    goto LABEL_42;
  }
  v17 = "Failed to convert guid to string [%x]";
  v18 = 1091;
LABEL_14:
  AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabase", v18, (_DWORD)v17);
LABEL_42:
  v25 = KeyHandle;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v12 )
    AslFree((__int64)v25, v12);
  Buffer = Source.Buffer;
  if ( Source.Buffer )
  {
    memset(Source.Buffer, 66, Source.MaximumLength);
    AslFree(v27, Buffer);
  }
  return (unsigned int)v10;
}
