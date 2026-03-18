/*
 * XREFs of SmKmStoreFileCreateForIoType @ 0x140698F68
 * Callers:
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     IoSetThreadHardErrorMode @ 0x140074CB8 (IoSetThreadHardErrorMode.c)
 *     ZwSetSecurityObject @ 0x14015CF00 (ZwSetSecurityObject.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     IoCreateFile @ 0x1404D8ECC (IoCreateFile.c)
 *     SmKmFileInfoCleanup @ 0x140697DE0 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x140698108 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileDelete @ 0x1406991DC (SmKmStoreFileDelete.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 */

__int64 __fastcall SmKmStoreFileCreateForIoType(_OWORD *a1, const WCHAR *a2, int *a3, int a4, int a5)
{
  BOOL v8; // edi
  int v9; // r14d
  BOOLEAN v10; // r12
  int IsVolumeIoPossible; // ebx
  ULONG Options; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  HANDLE FileHandle[8]; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+110h] [rbp+10h] BYREF
  int v23; // [rsp+198h] [rbp+98h] BYREF

  v23 = a4;
  v8 = 0;
  memset(FileHandle, 0, sizeof(FileHandle));
  if ( a3 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v23 = 0;
    a3 = &v23;
  }
  v10 = IoSetThreadHardErrorMode(0);
  RtlInitUnicodeString(&DestinationString, a2);
  IsVolumeIoPossible = SmKmStoreFileMakeSecurityDescriptor(SecurityDescriptor);
  if ( IsVolumeIoPossible >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    while ( 1 )
    {
      Options = 264;
      if ( !*a3 )
        Options = 266;
      IsVolumeIoPossible = IoCreateFile(
                             FileHandle,
                             0x140003u,
                             &ObjectAttributes,
                             &IoStatusBlock,
                             0LL,
                             0x2000u,
                             0,
                             0,
                             0x800Au,
                             0LL,
                             0,
                             CreateFileTypeNone,
                             0LL,
                             Options);
      if ( IsVolumeIoPossible < 0 )
        break;
      IsVolumeIoPossible = ObReferenceObjectByHandle(FileHandle[0], 0x10003u, 0LL, 0, &Object, 0LL);
      FileHandle[1] = Object;
      if ( IsVolumeIoPossible < 0 )
        break;
      v8 = !*a3 || (IoStatusBlock.Information & 0xFFFFFFFFFFFFFFFDuLL) == 0;
      IsVolumeIoPossible = ZwSetSecurityObject(FileHandle[0], 4u, SecurityDescriptor);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( *a3 )
        goto LABEL_25;
      IsVolumeIoPossible = SmKmIsVolumeIoPossible((__int64)FileHandle, &a5);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( a5 )
      {
LABEL_25:
        v14 = *(_OWORD *)&FileHandle[2];
        *a1 = *(_OWORD *)FileHandle;
        v15 = *(_OWORD *)&FileHandle[4];
        a1[1] = v14;
        v16 = *(_OWORD *)&FileHandle[6];
        a1[2] = v15;
        a1[3] = v16;
        memset(FileHandle, 0, sizeof(FileHandle));
        IsVolumeIoPossible = 0;
        goto LABEL_24;
      }
      if ( v9 )
      {
        IsVolumeIoPossible = -1073741637;
        break;
      }
      *a3 = 1;
      if ( v8 )
      {
        SmKmStoreFileDelete(FileHandle);
        v8 = 0;
      }
      SmKmFileInfoCleanup((__int64)FileHandle);
      memset(FileHandle, 0, sizeof(FileHandle));
    }
    if ( v8 )
      SmKmStoreFileDelete(FileHandle);
  }
LABEL_24:
  SmKmFileInfoCleanup((__int64)FileHandle);
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)IsVolumeIoPossible;
}
