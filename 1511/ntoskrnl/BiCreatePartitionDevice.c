/*
 * XREFs of BiCreatePartitionDevice @ 0x1404FDDA4
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x1404FDCF4 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1404FDCF4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionInformation @ 0x1404FE044 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePath @ 0x1404FE1A0 (BiGetPartitionVhdFilePath.c)
 *     BiGetDriveLayoutInformation @ 0x1404FE324 (BiGetDriveLayoutInformation.c)
 *     BiCreateFileDeviceElement @ 0x14068E664 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x14068E814 (BiGetPhysicalDriveName.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  WCHAR *v5; // r12
  WCHAR *v6; // rsi
  int PhysicalDriveName; // ebx
  __int128 v8; // xmm6
  unsigned int v9; // r14d
  SIZE_T v10; // rdx
  _OWORD *PoolWithTag; // r15
  size_t v12; // rax
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm0
  _DWORD *v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  wchar_t *v20; // rax
  wchar_t *v21; // rbx
  void *PartitionVhdFilePath; // rax
  unsigned int Size; // [rsp+38h] [rbp-D0h]
  PVOID Src; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR *v26; // [rsp+60h] [rbp-A8h]
  PCWSTR SourceStringa; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  _DWORD *v29; // [rsp+78h] [rbp-90h]
  _QWORD *v30; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  int v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int128 v36; // [rsp+108h] [rbp+0h]
  _OWORD v37[5]; // [rsp+168h] [rbp+60h] BYREF

  v30 = a3;
  LODWORD(v28) = a2;
  v29 = a4;
  FileHandle = 0LL;
  Src = 0LL;
  v26 = 0LL;
  v5 = 0LL;
  Size = 0;
  v6 = 0LL;
  SourceStringa = 0LL;
  memset(v37, 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
    PhysicalDriveName = BiGetDriveLayoutInformation(SourceStringa);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
  }
  if ( (v28 & 0x40) == 0 && (v6 = (WCHAR *)BiGetPartitionVhdFilePath(SourceString)) != 0LL )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( aDeviceHarddisk_8[v18] );
    v19 = (unsigned int)v18;
    if ( !wcsnicmp(v6, L"\\Device\\HarddiskVolume", (unsigned int)v18) )
    {
      v20 = wcschr(&v6[v19], 0x5Cu);
      v21 = v20;
      if ( v20 )
      {
        *v20 = 0;
        PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath(v6);
        *v21 = 92;
        if ( PartitionVhdFilePath )
        {
          ExFreePoolWithTag(PartitionVhdFilePath, 0);
          PhysicalDriveName = -1073741637;
          goto LABEL_23;
        }
      }
    }
    v5 = v26;
    PhysicalDriveName = BiCreateFileDeviceElement(v6);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(v26, 0, 0, &Src);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    LODWORD(v37[2]) = 6;
    Size = *((_DWORD *)Src + 2);
  }
  else
  {
    LODWORD(v37[2]) = 0;
  }
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_49:
      PhysicalDriveName = -1073741811;
      goto LABEL_21;
    }
    DWORD1(v37[2]) = 0;
    *(_OWORD *)((char *)&v37[2] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v37[2]) = MEMORY[8];
    DWORD1(v37[2]) = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PhysicalDriveName = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !v34 )
      {
        *(_QWORD *)&v37[1] = v35;
        v8 = v37[1];
LABEL_11:
        v9 = Size + 56;
        v10 = Size + 56;
        if ( Size + 56 <= 0x48 )
          v10 = 72LL;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
        if ( PoolWithTag )
        {
          v12 = 72LL;
          if ( v9 > 0x48 )
            v12 = v9;
          memset(PoolWithTag, 0, v12);
          v13 = v37[3];
          v14 = 72;
          LODWORD(v37[0]) = 6;
          if ( v9 > 0x48 )
            v14 = Size + 56;
          DWORD2(v37[0]) = v14;
          *PoolWithTag = v37[0];
          v15 = v37[2];
          PoolWithTag[1] = v8;
          PoolWithTag[2] = v15;
          *(_QWORD *)&v15 = *(_QWORD *)&v37[4];
          PoolWithTag[3] = v13;
          *((_QWORD *)PoolWithTag + 8) = v15;
          if ( v6 )
            memmove((char *)PoolWithTag + 56, Src, Size);
          v16 = v29;
          *v30 = PoolWithTag;
          *v16 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_21;
      }
      if ( v34 == 1 )
      {
        v8 = v36;
        goto LABEL_11;
      }
      goto LABEL_49;
    }
  }
LABEL_21:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_23:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}
