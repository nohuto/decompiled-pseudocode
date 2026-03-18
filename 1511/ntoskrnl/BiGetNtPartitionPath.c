/*
 * XREFs of BiGetNtPartitionPath @ 0x1404FC190
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1404FC02C (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiTranslateSymbolicLink @ 0x1404FC3EC (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x1404FC554 (BiGetDriveLayoutBlock.c)
 *     BiGetPartitionVhdFilePath @ 0x1404FE1A0 (BiGetPartitionVhdFilePath.c)
 *     BiVerifyBootPartition @ 0x1404FE654 (BiVerifyBootPartition.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, wchar_t **a2)
{
  wchar_t *v2; // rsi
  int v3; // eax
  wchar_t *v4; // r12
  NTSTATUS v5; // ebx
  wchar_t *PoolWithTag; // rdi
  bool v7; // bl
  char v8; // r14
  unsigned int v9; // r15d
  unsigned __int64 v10; // rcx
  _DWORD *v11; // r13
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  ULONG v16; // eax
  bool v17; // zf
  const wchar_t *PartitionVhdFilePath; // rax
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  bool v23; // [rsp+30h] [rbp-D0h]
  unsigned int v24; // [rsp+34h] [rbp-CCh]
  int v25; // [rsp+38h] [rbp-C8h]
  wchar_t *Str1; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v27; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v31; // [rsp+68h] [rbp-98h]
  wchar_t **v32; // [rsp+70h] [rbp-90h]
  HANDLE FileHandle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int SystemInformation[6]; // [rsp+D0h] [rbp-30h] BYREF
  char v38[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v39; // [rsp+ECh] [rbp-14h]
  __int64 v40; // [rsp+F4h] [rbp-Ch]
  unsigned int v41; // [rsp+FCh] [rbp-4h]

  v32 = a2;
  v31 = 0LL;
  Str1 = 0LL;
  v2 = 0LL;
  v3 = BiVerifyBootPartition(a1, (unsigned int)&v27, (unsigned int)&v28, (unsigned int)&v29, (__int64)&Str1, 0LL);
  v4 = Str1;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_30;
  v5 = ZwQuerySystemInformation(SystemDeviceInformation, SystemInformation, 0x18u, 0LL);
  if ( v5 < 0 )
    goto LABEL_30;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x4B444342u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = 0;
  v23 = 0;
  if ( v4 && !v27 )
  {
    v7 = v28 == 0LL;
    v23 = v28 == 0LL;
  }
  v8 = 0;
  v9 = 0;
  v24 = 0;
  if ( !SystemInformation[0] )
    goto LABEL_67;
  while ( (int)BiGetDriveLayoutBlock(v9, &P, v38) < 0 )
  {
LABEL_65:
    v24 = ++v9;
    if ( v9 >= SystemInformation[0] )
      goto LABEL_26;
  }
  if ( !v4 )
  {
    v10 = *(_QWORD *)(v29 + 4) - v39;
    if ( !v10 )
    {
      v10 = *(_QWORD *)(v29 + 12) - v40;
      if ( !v10 )
        v10 = *(unsigned int *)(v29 + 20) - (unsigned __int64)v41;
    }
    if ( v10 )
    {
      ExFreePoolWithTag(P, 0);
      goto LABEL_65;
    }
  }
  v11 = P;
  v12 = *(_DWORD *)(v29 + 4);
  LODWORD(Str1) = v12;
  if ( v28 )
  {
    if ( v12 == 1 )
    {
      ShareAccess[0] = *v28;
      swprintf_s(PoolWithTag, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", v9, *(_QWORD *)ShareAccess);
      RtlInitUnicodeString(&DestinationString, PoolWithTag);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0) >= 0 )
      {
        ZwClose(FileHandle);
        v8 = 1;
      }
      goto LABEL_25;
    }
  }
  else if ( v12 == 1 )
  {
    goto LABEL_14;
  }
  if ( v12 )
    goto LABEL_25;
LABEL_14:
  v13 = 0LL;
  if ( !v12 )
  {
    if ( v28 )
    {
      v13 = v28;
    }
    else if ( v27 )
    {
      v13 = v27;
    }
  }
  v14 = 0LL;
  v25 = 0;
  if ( !*((_DWORD *)P + 1) )
    goto LABEL_24;
  while ( 2 )
  {
    v15 = 36 * v14;
    v16 = v11[36 * v14 + 18];
    if ( !v16 )
      goto LABEL_56;
    ShareAccess[0] = v16;
    swprintf_s(PoolWithTag, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", v24, *(_QWORD *)ShareAccess);
    if ( !v23
      || (PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath(PoolWithTag),
          (v2 = (wchar_t *)PartitionVhdFilePath) == 0LL) )
    {
LABEL_18:
      if ( (_DWORD)Str1 == 1 )
      {
        if ( v27 )
        {
          v17 = *v27 == *(_QWORD *)&v11[v15 + 14];
          goto LABEL_21;
        }
      }
      else if ( v13 )
      {
        v20 = *v13 - *(_QWORD *)&v11[v15 + 24];
        if ( *v13 == *(_QWORD *)&v11[v15 + 24] )
          v20 = v13[1] - *(_QWORD *)&v11[v15 + 26];
        v17 = v20 == 0;
LABEL_21:
        if ( v17 )
        {
          v8 = 1;
          goto LABEL_23;
        }
      }
LABEL_56:
      v14 = (unsigned int)(v25 + 1);
      v25 = v14;
      if ( (unsigned int)v14 >= v11[1] )
        goto LABEL_23;
      continue;
    }
    break;
  }
  if ( wcsicmp(v4, PartitionVhdFilePath) )
  {
    ExFreePoolWithTag(v2, 0);
    v2 = 0LL;
    goto LABEL_18;
  }
  v8 = 1;
LABEL_23:
  v9 = v24;
LABEL_24:
  v7 = v23;
LABEL_25:
  ExFreePoolWithTag(v11, 0);
  if ( v4 )
  {
    if ( v8 && !v7 )
    {
      v21 = (const wchar_t *)BiGetPartitionVhdFilePath(PoolWithTag);
      v2 = (wchar_t *)v21;
      if ( v21 )
      {
        if ( !wcsicmp(v4, v21) )
          goto LABEL_26;
        ExFreePoolWithTag(v2, 0);
        v2 = 0LL;
      }
      v8 = 0;
    }
    goto LABEL_65;
  }
LABEL_26:
  if ( !v8 )
  {
LABEL_67:
    v5 = -1073741811;
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_30;
  }
  if ( (int)BiTranslateSymbolicLink(PoolWithTag) >= 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = v31;
  }
  v5 = 0;
  *v32 = PoolWithTag;
LABEL_30:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v5;
}
