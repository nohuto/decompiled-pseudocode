/*
 * XREFs of SdbResolveDatabase @ 0x1406C44AC
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1406C421C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbGetAppPatchDirEx @ 0x1406C440C (SdbGetAppPatchDirEx.c)
 *     SdbpGetStandardDatabasePath @ 0x1406C4894 (SdbpGetStandardDatabasePath.c)
 *     AslGuidToString_UStr @ 0x1406C50FC (AslGuidToString_UStr.c)
 *     AslRegistryGetUInt32_UStr @ 0x1406C5728 (AslRegistryGetUInt32_UStr.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
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
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  wchar_t *v19; // rax
  NTSTATUS v20; // eax
  int UInt32_UStr; // eax
  __int64 v22; // rax
  NTSTATUS appended; // eax
  int v24; // r8d
  const char *v25; // r9
  __int16 v26; // ax
  HANDLE v27; // rcx
  wchar_t *Buffer; // rbx
  __int64 v29; // rcx
  UNICODE_STRING v30; // [rsp+38h] [rbp-31h] BYREF
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
  v30.Length = 0;
  *(_QWORD *)&v30.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v30.Buffer + 2) = 0;
  HIWORD(v30.Buffer) = 0;
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
  v16 = AslGuidToString_UStr(&Source, a2, v13);
  if ( v16 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbResolveDatabase",
      1091,
      (unsigned int)"Failed to convert guid to string [%x]",
      v16);
    goto LABEL_42;
  }
  v18 = Source.Length + 184;
  v19 = (wchar_t *)AslAlloc(v17, v18);
  v12 = v19;
  if ( v19 )
  {
    Destination.Buffer = v19;
    Destination.MaximumLength = v18;
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
    v20 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
    if ( v20 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbResolveDatabase",
        1128,
        (unsigned int)"Failed to open Key \"%ws\" [%x]",
        Destination.Buffer,
        v20,
        *(_QWORD *)&v30.Length,
        v30.Buffer);
      goto LABEL_42;
    }
    if ( a3 )
    {
      UInt32_UStr = AslRegistryGetUInt32_UStr(&a5, KeyHandle, &g_ustrDatabaseType);
      if ( UInt32_UStr < 0 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbResolveDatabase",
          1140,
          (unsigned int)"Failed to get database type [%x]",
          UInt32_UStr);
        *a3 = 0;
        goto LABEL_42;
      }
      *a3 = a5 & 0x7FFFFFFF;
    }
    SdbGetAppPatchDirEx(a1, a4, 0x104u, 0);
    v22 = -1LL;
    v30.Buffer = a4;
    do
      ++v22;
    while ( a4[v22] );
    v30.Length = 2 * v22;
    v30.MaximumLength = 520;
    appended = RtlAppendUnicodeToString(&v30, L"\\CUSTOM\\");
    if ( appended >= 0 )
    {
      v26 = *(_WORD *)(a1 + 568);
      if ( (v26 == -31132 || v26 == 512 || v26 == -21916)
        && (appended = RtlAppendUnicodeToString(&v30, L"CUSTOM64\\"), appended < 0) )
      {
        v24 = 1165;
      }
      else
      {
        appended = RtlAppendUnicodeStringToString(&v30, &Source);
        if ( appended < 0 )
        {
          v25 = "RtlAppendUnicodeStringToString failed while creating CustomSdb path [%x]";
          v24 = 1174;
          goto LABEL_28;
        }
        appended = RtlAppendUnicodeToString(&v30, L".sdb");
        if ( appended >= 0 )
        {
          if ( v30.Length < (unsigned __int64)v30.MaximumLength - 2 )
          {
            v10 = v30.Length >> 1;
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
        v24 = 1182;
      }
    }
    else
    {
      v24 = 1156;
    }
    v25 = "RtlAppendUnicodeToString failed while creating CustomSdb path [%x]";
LABEL_28:
    AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabase", v24, (_DWORD)v25, appended);
LABEL_29:
    *a4 = 0;
    goto LABEL_42;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbResolveDatabase",
    1112,
    (unsigned int)"Failed to allocate %ld bytes for key path",
    v18);
LABEL_42:
  v27 = KeyHandle;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v12 )
    AslFree((__int64)v27, v12);
  Buffer = Source.Buffer;
  if ( Source.Buffer )
  {
    memset(Source.Buffer, 66, Source.MaximumLength);
    AslFree(v29, Buffer);
  }
  return (unsigned int)v10;
}
