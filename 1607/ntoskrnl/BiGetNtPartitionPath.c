/*
 * XREFs of BiGetNtPartitionPath @ 0x14053CFD0
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiTranslateSymbolicLink @ 0x14053D230 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14053D398 (BiGetDriveLayoutBlock.c)
 *     BiGetPartitionVhdFilePath @ 0x14053F0D4 (BiGetPartitionVhdFilePath.c)
 *     BiVerifyBootPartition @ 0x14053F474 (BiVerifyBootPartition.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // rsi
  int v3; // eax
  wchar_t *v4; // r12
  NTSTATUS v5; // ebx
  PVOID PoolWithTag; // rdi
  bool v7; // bl
  unsigned int v8; // r15d
  char v9; // r14
  unsigned __int64 v10; // rcx
  _DWORD *v11; // r12
  int v12; // r13d
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
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v30; // [rsp+60h] [rbp-A0h] BYREF
  void *v31; // [rsp+68h] [rbp-98h]
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v33; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD SystemInformation[6]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v38[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v39; // [rsp+ECh] [rbp-14h]
  __int64 v40; // [rsp+F4h] [rbp-Ch]
  unsigned int v41; // [rsp+FCh] [rbp-4h]

  v2 = 0LL;
  v33 = a2;
  v31 = 0LL;
  Str1 = 0LL;
  v3 = BiVerifyBootPartition(a1, (unsigned int)&v27, (unsigned int)&v30, (unsigned int)&v28, (__int64)&Str1, 0LL);
  v4 = Str1;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_28;
  v5 = ZwQuerySystemInformation(SystemDeviceInformation, SystemInformation, 0x18u, 0LL);
  if ( v5 < 0 )
    goto LABEL_28;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x4B444342u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = 0;
  v23 = 0;
  if ( v4 && !v27 )
  {
    v7 = v30 == 0LL;
    v23 = v30 == 0LL;
  }
  v8 = 0;
  v9 = 0;
  v24 = 0;
  if ( !SystemInformation[0] )
  {
LABEL_67:
    v5 = -1073741811;
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    goto LABEL_28;
  }
  do
  {
    if ( (int)BiGetDriveLayoutBlock(v8, &P, v38) < 0 )
      goto LABEL_65;
    if ( !v4 )
    {
      v10 = *(_QWORD *)(v28 + 4) - v39;
      if ( !v10 )
      {
        v10 = *(_QWORD *)(v28 + 12) - v40;
        if ( !v10 )
          v10 = *(unsigned int *)(v28 + 20) - (unsigned __int64)v41;
      }
      if ( v10 )
      {
        ExFreePoolWithTag(P, 0x4B444342u);
        goto LABEL_65;
      }
    }
    v11 = P;
    v12 = *(_DWORD *)(v28 + 4);
    if ( v30 )
    {
      if ( v12 == 1 )
      {
        ShareAccess[0] = *v30;
        swprintf_s((wchar_t *)PoolWithTag, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", v8, *(_QWORD *)ShareAccess);
        RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0) >= 0 )
        {
          ZwClose(FileHandle);
          v9 = 1;
        }
        goto LABEL_23;
      }
    }
    else if ( v12 == 1 )
    {
      goto LABEL_14;
    }
    if ( !v12 )
    {
LABEL_14:
      v13 = 0LL;
      if ( !v12 )
      {
        if ( v30 )
        {
          v13 = v30;
        }
        else if ( v27 )
        {
          v13 = v27;
        }
      }
      v14 = 0LL;
      v25 = 0;
      if ( *((_DWORD *)P + 1) )
      {
        while ( 1 )
        {
          v15 = 36 * v14;
          v16 = v11[36 * v14 + 18];
          if ( v16 )
          {
            ShareAccess[0] = v16;
            swprintf_s(
              (wchar_t *)PoolWithTag,
              0x35uLL,
              L"\\Device\\Harddisk%lu\\Partition%lu",
              v24,
              *(_QWORD *)ShareAccess);
            if ( v23 )
            {
              PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
              v2 = (wchar_t *)PartitionVhdFilePath;
              if ( PartitionVhdFilePath )
              {
                if ( !wcsicmp(Str1, PartitionVhdFilePath) )
                {
                  v7 = v23;
                  v8 = v24;
                  v9 = 1;
                  goto LABEL_23;
                }
                ExFreePoolWithTag(v2, 0x4B444342u);
                v2 = 0LL;
              }
            }
            if ( v12 == 1 )
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
                v7 = v23;
                v9 = 1;
                v8 = v24;
                goto LABEL_23;
              }
            }
          }
          v14 = (unsigned int)(v25 + 1);
          v25 = v14;
          if ( (unsigned int)v14 >= v11[1] )
          {
            v8 = v24;
            break;
          }
        }
      }
      v7 = v23;
    }
LABEL_23:
    ExFreePoolWithTag(v11, 0x4B444342u);
    v4 = Str1;
    if ( !Str1 )
      break;
    if ( v9 )
    {
      if ( v7 )
        break;
      v21 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
      v2 = (wchar_t *)v21;
      if ( v21 )
      {
        if ( !wcsicmp(v4, v21) )
          break;
        ExFreePoolWithTag(v2, 0x4B444342u);
        v2 = 0LL;
      }
      v9 = 0;
    }
LABEL_65:
    v24 = ++v8;
  }
  while ( v8 < SystemInformation[0] );
  if ( !v9 )
    goto LABEL_67;
  if ( (int)BiTranslateSymbolicLink((PCWSTR)PoolWithTag) >= 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    PoolWithTag = v31;
  }
  v5 = 0;
  *v33 = PoolWithTag;
LABEL_28:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v5;
}
