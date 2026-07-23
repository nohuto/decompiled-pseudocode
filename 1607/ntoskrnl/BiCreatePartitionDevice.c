/*
 * XREFs of BiCreatePartitionDevice @ 0x14053ED4C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionInformation @ 0x14053EFF0 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePath @ 0x14053F0D4 (BiGetPartitionVhdFilePath.c)
 *     BiGetDriveLayoutInformation @ 0x14053F210 (BiGetDriveLayoutInformation.c)
 *     BiCreateFileDeviceElement @ 0x1406D2F88 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1406D3130 (BiGetPhysicalDriveName.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  SIZE_T v5; // r15
  WCHAR *v6; // r12
  WCHAR *v7; // rsi
  const wchar_t *v8; // rax
  int PhysicalDriveName; // ebx
  __int128 v10; // xmm6
  unsigned int v11; // r14d
  _OWORD *PoolWithTag; // r15
  size_t v13; // rax
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  _DWORD *v17; // rcx
  wchar_t *v19; // rax
  wchar_t *v20; // rbx
  void *PartitionVhdFilePath; // rax
  unsigned int Size; // [rsp+38h] [rbp-D0h]
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceStringa; // [rsp+60h] [rbp-A8h]
  WCHAR *v26; // [rsp+68h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp-90h]
  _DWORD *v29; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  int v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int128 v35; // [rsp+108h] [rbp+0h]
  _OWORD v36[5]; // [rsp+168h] [rbp+60h] BYREF

  v28 = a3;
  LODWORD(v24) = a2;
  v29 = a4;
  v5 = 72LL;
  FileHandle = 0LL;
  Src = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  Size = 0;
  v7 = 0LL;
  SourceStringa = 0LL;
  memset(v36, 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
    PhysicalDriveName = BiGetDriveLayoutInformation(SourceStringa);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
  }
  if ( (v24 & 0x40) == 0 && (v8 = (const wchar_t *)BiGetPartitionVhdFilePath(SourceString), (v7 = (WCHAR *)v8) != 0LL) )
  {
    if ( !wcsnicmp(v8, L"\\Device\\HarddiskVolume", 0x16uLL) )
    {
      v19 = wcschr(v7 + 22, 0x5Cu);
      v20 = v19;
      if ( v19 )
      {
        *v19 = 0;
        PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath(v7);
        *v20 = 92;
        if ( PartitionVhdFilePath )
        {
          ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
          PhysicalDriveName = -1073741637;
          goto LABEL_23;
        }
      }
    }
    v6 = v26;
    PhysicalDriveName = BiCreateFileDeviceElement(v7);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(v26, 0, 0, &Src);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    LODWORD(v36[2]) = 6;
    Size = *((_DWORD *)Src + 2);
  }
  else
  {
    LODWORD(v36[2]) = 0;
  }
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_47:
      PhysicalDriveName = -1073741811;
      goto LABEL_21;
    }
    DWORD1(v36[2]) = 0;
    *(_OWORD *)((char *)&v36[2] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v36[2]) = MEMORY[8];
    DWORD1(v36[2]) = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PhysicalDriveName = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !v33 )
      {
        *(_QWORD *)&v36[1] = v34;
        v10 = v36[1];
LABEL_11:
        v11 = Size + 56;
        if ( Size + 56 > 0x48 )
          v5 = v11;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
        if ( PoolWithTag )
        {
          v13 = 72LL;
          if ( v11 > 0x48 )
            v13 = v11;
          memset(PoolWithTag, 0, v13);
          v14 = v36[3];
          v15 = 72;
          LODWORD(v36[0]) = 6;
          if ( v11 > 0x48 )
            v15 = Size + 56;
          DWORD2(v36[0]) = v15;
          *PoolWithTag = v36[0];
          v16 = v36[2];
          PoolWithTag[1] = v10;
          PoolWithTag[2] = v16;
          *(_QWORD *)&v16 = *(_QWORD *)&v36[4];
          PoolWithTag[3] = v14;
          *((_QWORD *)PoolWithTag + 8) = v16;
          if ( v7 )
            memmove((char *)PoolWithTag + 56, Src, Size);
          v17 = v29;
          *v28 = PoolWithTag;
          *v17 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_21;
      }
      if ( v33 == 1 )
      {
        v10 = v35;
        goto LABEL_11;
      }
      goto LABEL_47;
    }
  }
LABEL_21:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
LABEL_23:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}
