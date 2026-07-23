/*
 * XREFs of KsepShimDbMapToMemory @ 0x140495B04
 * Callers:
 *     KseShimDatabaseOpen @ 0x140514914 (KseShimDatabaseOpen.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 */

__int64 KsepShimDbMapToMemory()
{
  PVOID v0; // rdi
  NTSTATUS v1; // ebx
  NTSTATUS v2; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  PVOID Object; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+Fh] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE SectionHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID MappedBase; // [rsp+D0h] [rbp+77h] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  v0 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v1 < 0 )
  {
    v4 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v4 + 1] = v1;
    KsepHistoryErrors[2 * v4] = 590318;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0, "KSE: ZwOpenFile failed opening DB file!\n");
  }
  else
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v1 < 0 )
    {
      v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v5 + 1] = v1;
      KsepHistoryErrors[2 * v5] = 590340;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: ZwCreateSection Failed!\n");
      KsepLogError(0, "KSE: ZwCreateSection Failed!\n");
    }
    else
    {
      v2 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      v0 = Object;
      v1 = v2;
      if ( v2 < 0 )
      {
        v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        KsepHistoryErrors[2 * v6 + 1] = v2;
        KsepHistoryErrors[2 * v6] = 590354;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(0LL, "KSE: ObRefByHandle(section) failed!\n");
        KsepLogError(0, "KSE: ObRefByHandle(section) failed!\n");
      }
      else
      {
        ViewSize = 0LL;
        v1 = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
        if ( v1 < 0 )
        {
          v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v7 + 1] = v1;
          KsepHistoryErrors[2 * v7] = 590367;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(0LL, "KSE: Unable to map view of section!\n");
          KsepLogError(0, "KSE: Unable to map view of section!\n");
        }
        else
        {
          KsepShimDbHandle = SdbInitDatabaseInMemory(MappedBase, (unsigned int)ViewSize);
          if ( !KsepShimDbHandle )
          {
            v1 = -1073741823;
            v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
            KsepHistoryErrors[2 * v8 + 1] = -1073741823;
            KsepHistoryErrors[2 * v8] = 590376;
            if ( (KsepDebugFlag & 2) != 0 )
              KsepDebugPrint(0LL, "KSE: SdbInitDatabaseInMemory Failed!\n");
            KsepLogError(0, "KSE: SdbInitDatabaseInMemory Failed!\n");
            goto LABEL_26;
          }
          v1 = 0;
        }
      }
    }
  }
  if ( v1 >= 0 )
  {
    KsepShimDbFileHandle = FileHandle;
    KsepShimDbSectionHandle = SectionHandle;
    KsepShimDbAddress = MappedBase;
    KsepShimDbSectionPointer = v0;
    return (unsigned int)v1;
  }
LABEL_26:
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v0 )
    ObfDereferenceObject(v0);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v1;
}
