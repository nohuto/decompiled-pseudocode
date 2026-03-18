/*
 * XREFs of SdbResolveDatabase @ 0x140704364
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1407040D4 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetAppPatchDirEx @ 0x1407042C4 (SdbGetAppPatchDirEx.c)
 *     SdbpGetStandardDatabasePath @ 0x140704768 (SdbpGetStandardDatabasePath.c)
 *     AslGuidToString_UStr @ 0x140704E64 (AslGuidToString_UStr.c)
 *     AslRegistryGetUInt32_UStr @ 0x140705490 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall SdbResolveDatabase(__int64 a1, _QWORD *a2, int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v10; // r14
  unsigned int v11; // edi
  wchar_t *v12; // r12
  GUID **v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned __int16 v18; // r15
  wchar_t *v19; // rax
  __int16 v20; // ax
  HANDLE v21; // rcx
  wchar_t *Buffer; // rbx
  __int64 v23; // rcx
  UNICODE_STRING v24; // [rsp+38h] [rbp-31h] BYREF
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
  v24.Length = 0;
  *(_QWORD *)&v24.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v24.Buffer + 2) = 0;
  HIWORD(v24.Buffer) = 0;
  if ( !a4 )
    return result;
  *a4 = 0;
  v13 = &off_140323258;
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
  v11 = *((_DWORD *)&(&off_140323258)[2 * v14] + 2);
  a5 = v11;
LABEL_9:
  if ( (unsigned __int64)v14 < 3 )
  {
    result = SdbpGetStandardDatabasePath(a1, v11, v13, a4, 260);
    if ( a3 )
      *a3 = v11;
    return result;
  }
  if ( (int)AslGuidToString_UStr(&Source, a2, v13) < 0 )
    goto LABEL_13;
  v16 = -1LL;
  v17 = -1LL;
  do
    ++v17;
  while ( aRegistryMachin_42[v17] );
  v18 = Source.Length + 4 + 2 * v17;
  v19 = (wchar_t *)AslAlloc(v17, (unsigned int)Source.Length + 4 + 2 * (_DWORD)v17);
  v12 = v19;
  if ( v19 )
  {
    Destination.MaximumLength = v18;
    Destination.Buffer = v19;
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
    if ( ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes) >= 0 )
    {
      if ( a3 )
      {
        if ( (int)AslRegistryGetUInt32_UStr(&a5, KeyHandle, &g_ustrDatabaseType) < 0 )
        {
          AslLogCallPrintf(1LL);
          *a3 = 0;
          goto LABEL_35;
        }
        *a3 = a5 & 0x7FFFFFFF;
      }
      SdbGetAppPatchDirEx(a1, a4, 0x104u, 0);
      v24.Buffer = a4;
      do
        ++v16;
      while ( a4[v16] );
      v24.MaximumLength = 520;
      v24.Length = 2 * v16;
      if ( RtlAppendUnicodeToString(&v24, L"\\CUSTOM\\") < 0
        || ((v20 = *(_WORD *)(a1 + 568), v20 == -31132) || v20 == 512 || v20 == -21916)
        && RtlAppendUnicodeToString(&v24, L"CUSTOM64\\") < 0
        || RtlAppendUnicodeStringToString(&v24, &Source) < 0
        || RtlAppendUnicodeToString(&v24, L".sdb") < 0
        || v24.Length >= (unsigned __int64)v24.MaximumLength - 2 )
      {
        AslLogCallPrintf(1LL);
        *a4 = 0;
      }
      else
      {
        v10 = v24.Length >> 1;
        a4[v10] = 0;
      }
      goto LABEL_35;
    }
    AslLogCallPrintf(1LL);
  }
  else
  {
LABEL_13:
    AslLogCallPrintf(1LL);
  }
LABEL_35:
  v21 = KeyHandle;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v12 )
    AslFree((__int64)v21, v12);
  Buffer = Source.Buffer;
  if ( Source.Buffer )
  {
    memset(Source.Buffer, 66, Source.MaximumLength);
    AslFree(v23, Buffer);
  }
  return (unsigned int)v10;
}
