/*
 * XREFs of SiGetEfiSystemDevice @ 0x1406D65A4
 * Callers:
 *     SiGetSystemPartition @ 0x140542570 (SiGetSystemPartition.c)
 *     SiGetSystemDisk @ 0x1406D60EC (SiGetSystemDisk.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14015ACF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14015C810 (ZwQueryDirectoryObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SiGetDriveLayoutInformation @ 0x1406D62C0 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1406D6420 (SiIssueSynchronousIoctl.c)
 *     SiDisambiguateSystemDevice @ 0x1406D6500 (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1406D6900 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x1406D6B34 (SiIsValidDiskDevice.c)
 */

__int64 __fastcall SiGetEfiSystemDevice(int a1, __int64 a2, wchar_t **a3)
{
  wchar_t **v3; // r15
  int v4; // ebx
  _WORD *v5; // r14
  char v6; // r12
  PVOID v7; // rdi
  __int64 v8; // r13
  wchar_t *PoolWithTag; // rsi
  __int64 v10; // r8
  ULONG v11; // r9d
  NTSTATUS EspFromFirmware; // ebx
  ULONG v13; // r15d
  SIZE_T i; // rdx
  NTSTATUS v15; // eax
  _WORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r9
  int DriveLayoutInformation; // eax
  unsigned int v20; // r8d
  unsigned int v21; // edx
  char *v22; // rcx
  __int64 v23; // rax
  NTSTATUS v24; // eax
  BOOLEAN RestartScan[8]; // [rsp+28h] [rbp-89h]
  int v27; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-65h] BYREF
  PVOID P; // [rsp+50h] [rbp-61h] BYREF
  ULONG Context; // [rsp+58h] [rbp-59h] BYREF
  int v31; // [rsp+5Ch] [rbp-55h]
  HANDLE DirectoryHandle; // [rsp+60h] [rbp-51h] BYREF
  wchar_t **v33; // [rsp+68h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-31h] BYREF
  _DWORD v36[4]; // [rsp+B0h] [rbp-1h] BYREF
  _BYTE v37[32]; // [rsp+C0h] [rbp+Fh] BYREF

  v33 = a3;
  v3 = a3;
  v31 = a1;
  v4 = a1;
  DirectoryHandle = 0LL;
  P = 0LL;
  v28 = 0;
  v27 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x4B505953u);
  if ( !PoolWithTag )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_47;
  }
  if ( (int)SiDisambiguateSystemDevice(&v28, &v27, v10, v11) >= 0 )
    goto LABEL_33;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EspFromFirmware = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( EspFromFirmware < 0 )
    goto LABEL_41;
  v13 = 4096;
  for ( i = 4096LL; ; i = v13 )
  {
    v5 = ExAllocatePoolWithTag(PagedPool, i, 0x4B505953u);
    if ( !v5 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_41;
    }
    Context = 0;
    v15 = ZwQueryDirectoryObject(DirectoryHandle, v5, v13, 0, 1u, &Context, 0LL);
    EspFromFirmware = v15;
    if ( v15 != 261 )
      break;
    ExFreePoolWithTag(v5, 0);
    v13 += 4096;
  }
  if ( (int)(v15 + 0x80000000) >= 0 && v15 != -2147483622 )
  {
LABEL_31:
    if ( EspFromFirmware < 0 )
      goto LABEL_41;
    v3 = v33;
    v4 = v31;
LABEL_33:
    *(_DWORD *)RestartScan = v4 != 0 ? v27 : 0;
    if ( v8 )
      v24 = RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v8, *(_QWORD *)RestartScan);
    else
      v24 = RtlStringCbPrintfW(
              PoolWithTag,
              0x6AuLL,
              L"\\Device\\Harddisk%lu\\Partition%lu",
              v28,
              *(_QWORD *)RestartScan);
    EspFromFirmware = v24;
    if ( v24 >= 0 )
    {
      *v3 = PoolWithTag;
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  v16 = v5;
  if ( !*v5 )
    goto LABEL_38;
  while ( 1 )
  {
    if ( (unsigned __int8)SiIsValidDiskDevice(*((wchar_t **)v16 + 1), *((wchar_t **)v16 + 3)) )
    {
      RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *((_QWORD *)v16 + 1), 0LL);
      *(_QWORD *)&v36[1] = 0LL;
      memset(v37, 0, sizeof(v37));
      v36[0] = 1;
      if ( (int)SiIssueSynchronousIoctl(PoolWithTag, v17, v36, v18, v37, 0x20u) < 0 || v37[24] != 15 )
      {
        if ( v7 )
        {
          ExFreePoolWithTag(v7, 0);
          P = 0LL;
        }
        DriveLayoutInformation = SiGetDriveLayoutInformation(PoolWithTag, &P);
        v7 = P;
        if ( DriveLayoutInformation >= 0 && *(_DWORD *)P == 1 )
        {
          v20 = *((_DWORD *)P + 1);
          v21 = 0;
          if ( v20 )
            break;
        }
      }
    }
LABEL_28:
    v16 += 16;
    if ( !*v16 )
    {
      if ( v6 )
      {
        EspFromFirmware = 0;
        goto LABEL_31;
      }
LABEL_38:
      EspFromFirmware = -1073740718;
LABEL_41:
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_43;
    }
  }
  v22 = (char *)P + 72;
  while ( 1 )
  {
    v23 = *((_QWORD *)v22 + 1) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
    if ( !v23 )
      v23 = *((_QWORD *)v22 + 2) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
    if ( v23 )
      goto LABEL_27;
    if ( v6 )
      break;
    v6 = 1;
    v8 = *((_QWORD *)v16 + 1);
    v27 = *(_DWORD *)v22;
LABEL_27:
    ++v21;
    v22 += 144;
    if ( v21 >= v20 )
      goto LABEL_28;
  }
  EspFromFirmware = SiGetEspFromFirmware(PoolWithTag);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_41;
  }
  *v33 = PoolWithTag;
LABEL_43:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_47:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)EspFromFirmware;
}
