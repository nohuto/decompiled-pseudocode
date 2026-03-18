/*
 * XREFs of CmpFlushBackupHive @ 0x1405E4F58
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1405E57D8 (CmpSyncNextBackupHive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1401511A0 (ZwSetInformationObject.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     RtlAppendStringToString @ 0x1404C3EF4 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x140521568 (CmpInitBackupHive.c)
 *     CmpCmdRenameHive @ 0x1405E3C50 (CmpCmdRenameHive.c)
 *     CmpFreeOffsetArray @ 0x1405E528C (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x1405E5958 (CmpWriteOffsetArrayToFile.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // r13
  unsigned int v2; // ebx
  wchar_t *v3; // rsi
  __int64 v4; // r15
  int v5; // r12d
  void *v6; // r14
  int inited; // edi
  const WCHAR *v8; // rdx
  int v9; // ecx
  void *v10; // rcx
  ULONG_PTR v11; // rbx
  __int64 v12; // r8
  void *v13; // rcx
  unsigned int ObjectInformation; // [rsp+48h] [rbp-C0h] BYREF
  char FileInformation[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  char v23; // [rsp+98h] [rbp-70h] BYREF

  v1 = 19LL * a1;
  BugCheckParameter2 = 0LL;
  v2 = 0;
  v20 = 0LL;
  ObjectInformation = 0;
  v17 = 0;
  v3 = CmpMachineHiveList[v1 + 6];
  v4 = 0LL;
  FileInformation[0] = 1;
  v5 = 0;
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v23;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v1]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v6 = (void *)*((_QWORD *)v3 + 336);
  if ( v6 )
  {
    inited = CmpCmdRenameHive(v6, 0LL, (const void **)&Destination, 0, 1);
    if ( inited >= 0 )
    {
      *((_QWORD *)v3 + 336) = 0LL;
      v8 = CmpMachineHiveList[v1];
      Destination.Length -= 8;
      inited = CmpInitBackupHive((ULONG_PTR)v3, v8);
      if ( inited < 0 )
        goto LABEL_12;
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v3 + 356), 1u);
        inited = CmpSnapshotHiveToOffsetArray(v3, &ObjectInformation, &v20, &v17);
        ExReleaseResourceLite(*((PERESOURCE *)v3 + 356));
        v2 = ObjectInformation;
        v4 = v20;
        v5 = v17;
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      if ( inited < 0 )
        goto LABEL_12;
      inited = CmpWriteOffsetArrayToFile(v9, v2, v4, v5, *((HANDLE *)v3 + 336));
      CmpFreeOffsetArray(v2, v4);
      if ( inited < 0
        || (v10 = (void *)*((_QWORD *)v3 + 336),
            LOWORD(ObjectInformation) = 0,
            ZwSetInformationObject(v10, ObjectHandleFlagInformation, &ObjectInformation, 2u),
            ZwClose(*((HANDLE *)v3 + 336)),
            *((_QWORD *)v3 + 336) = 0LL,
            LOBYTE(ObjectInformation) = 0,
            inited = CmpCmdHiveOpen(&Destination.Length, 0, &ObjectInformation, &BugCheckParameter2, 0x1000001u, 0, 0LL),
            inited < 0) )
      {
LABEL_12:
        v13 = (void *)*((_QWORD *)v3 + 336);
        if ( v13 )
        {
          LOWORD(ObjectInformation) = 0;
          ZwSetInformationObject(v13, ObjectHandleFlagInformation, &ObjectInformation, 2u);
          ZwClose(*((HANDLE *)v3 + 336));
          *((_QWORD *)v3 + 336) = 0LL;
        }
        if ( CmpCmdRenameHive(v6, 0LL, (const void **)&Destination, 0, 1) >= 0 )
          *((_QWORD *)v3 + 336) = v6;
      }
      else
      {
        v11 = BugCheckParameter2;
        CmpDestroySecurityCache(BugCheckParameter2);
        HvFreeHive(v11, 1, v12);
        *((_QWORD *)v3 + 336) = *(_QWORD *)(v11 + 2664);
        *(_QWORD *)(v11 + 2664) = 0LL;
        CmpCmdHiveClose(v11);
        CmpDereferenceHive(v11);
        ZwSetInformationFile(v6, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
        LOWORD(ObjectInformation) = 0;
        ZwSetInformationObject(v6, ObjectHandleFlagInformation, &ObjectInformation, 2u);
        ZwClose(v6);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)inited;
}
