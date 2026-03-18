/*
 * XREFs of SiGetEfiSystemDevice @ 0x140691D48
 * Callers:
 *     SiGetSystemPartition @ 0x1405066F4 (SiGetSystemPartition.c)
 *     SiGetSystemDisk @ 0x140518884 (SiGetSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140151120 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x140152BE0 (ZwQueryDirectoryObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SiGetDriveLayoutInformation @ 0x140691968 (SiGetDriveLayoutInformation.c)
 *     SiDisambiguateSystemDevice @ 0x140691CA4 (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140692030 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140692264 (SiIsValidDiskDevice.c)
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
  int DriveLayoutInformation; // eax
  unsigned int v18; // r8d
  unsigned int v19; // edx
  char *v20; // rcx
  __int64 v21; // rax
  NTSTATUS v22; // eax
  BOOLEAN RestartScan[8]; // [rsp+28h] [rbp-69h]
  ULONG Context; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+50h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-21h] BYREF
  int v31; // [rsp+100h] [rbp+6Fh] BYREF
  wchar_t **v32; // [rsp+108h] [rbp+77h]
  unsigned int v33; // [rsp+110h] [rbp+7Fh] BYREF

  v32 = a3;
  v3 = a3;
  v4 = a1;
  DirectoryHandle = 0LL;
  P = 0LL;
  v5 = 0LL;
  v33 = 0;
  v31 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x4B505953u);
  if ( !PoolWithTag )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_45;
  }
  if ( (int)SiDisambiguateSystemDevice(&v33, &v31, v10, v11) >= 0 )
    goto LABEL_31;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EspFromFirmware = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( EspFromFirmware < 0 )
    goto LABEL_39;
  v13 = 4096;
  for ( i = 4096LL; ; i = v13 )
  {
    v5 = ExAllocatePoolWithTag(PagedPool, i, 0x4B505953u);
    if ( !v5 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_39;
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
LABEL_29:
    if ( EspFromFirmware < 0 )
      goto LABEL_39;
    v3 = v32;
    v4 = a1;
LABEL_31:
    *(_DWORD *)RestartScan = v4 != 0 ? v31 : 0;
    if ( v8 )
      v22 = RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v8, *(_QWORD *)RestartScan);
    else
      v22 = RtlStringCbPrintfW(
              PoolWithTag,
              0x6AuLL,
              L"\\Device\\Harddisk%lu\\Partition%lu",
              v33,
              *(_QWORD *)RestartScan);
    EspFromFirmware = v22;
    if ( v22 >= 0 )
    {
      *v3 = PoolWithTag;
      goto LABEL_41;
    }
    goto LABEL_39;
  }
  v16 = v5;
  if ( !*v5 )
    goto LABEL_36;
  while ( 1 )
  {
    if ( (unsigned __int8)SiIsValidDiskDevice(*((wchar_t **)v16 + 1), *((wchar_t **)v16 + 3)) )
    {
      RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *((_QWORD *)v16 + 1), 0LL);
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        P = 0LL;
      }
      DriveLayoutInformation = SiGetDriveLayoutInformation(PoolWithTag, &P);
      v7 = P;
      if ( DriveLayoutInformation >= 0 && *(_DWORD *)P == 1 )
      {
        v18 = *((_DWORD *)P + 1);
        v19 = 0;
        if ( v18 )
          break;
      }
    }
LABEL_26:
    v16 += 16;
    if ( !*v16 )
    {
      if ( v6 )
      {
        EspFromFirmware = 0;
        goto LABEL_29;
      }
LABEL_36:
      EspFromFirmware = -1073740718;
LABEL_39:
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_41;
    }
  }
  v20 = (char *)P + 72;
  while ( 1 )
  {
    v21 = *((_QWORD *)v20 + 1) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
    if ( !v21 )
      v21 = *((_QWORD *)v20 + 2) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
    if ( v21 )
      goto LABEL_25;
    if ( v6 )
      break;
    v6 = 1;
    v8 = *((_QWORD *)v16 + 1);
    v31 = *(_DWORD *)v20;
LABEL_25:
    ++v19;
    v20 += 144;
    if ( v19 >= v18 )
      goto LABEL_26;
  }
  EspFromFirmware = SiGetEspFromFirmware(PoolWithTag);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_39;
  }
  *v32 = PoolWithTag;
LABEL_41:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_45:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)EspFromFirmware;
}
