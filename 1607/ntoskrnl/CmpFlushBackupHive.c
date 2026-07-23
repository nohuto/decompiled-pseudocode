/*
 * XREFs of CmpFlushBackupHive @ 0x140604564
 * Callers:
 *     CmpSyncNextBackupHive @ 0x140604DDC (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14015AD70 (ZwSetInformationObject.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpCmdHiveOpen @ 0x1404A4CD8 (CmpCmdHiveOpen.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     RtlAppendStringToString @ 0x140544C30 (RtlAppendStringToString.c)
 *     CmpInitBackupHive @ 0x14054DED8 (CmpInitBackupHive.c)
 *     CmpCmdRenameHive @ 0x140603608 (CmpCmdRenameHive.c)
 *     CmpFreeOffsetArray @ 0x14060489C (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x140604F5C (CmpWriteOffsetArrayToFile.c)
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
  __int64 v11; // rbx
  void *v12; // rcx
  unsigned int ObjectInformation; // [rsp+48h] [rbp-C0h] BYREF
  char FileInformation[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  int v18[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  char v22; // [rsp+98h] [rbp-70h] BYREF

  v1 = 19LL * a1;
  v19 = 0LL;
  v2 = 0;
  *(_QWORD *)v18 = 0LL;
  ObjectInformation = 0;
  v16 = 0;
  v3 = CmpMachineHiveList[v1 + 6];
  v4 = 0LL;
  FileInformation[0] = 1;
  v5 = 0;
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v22;
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
        inited = CmpSnapshotHiveToOffsetArray(v3, &ObjectInformation, v18, &v16);
        ExReleaseResourceLite(*((PERESOURCE *)v3 + 356));
        v2 = ObjectInformation;
        v4 = *(_QWORD *)v18;
        v5 = v16;
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
            inited = CmpCmdHiveOpen((UNICODE_STRING *)&Destination, 0, &ObjectInformation, &v19, 17367041, 0, 0LL, 0LL),
            inited < 0) )
      {
LABEL_12:
        v12 = (void *)*((_QWORD *)v3 + 336);
        if ( v12 )
        {
          LOWORD(ObjectInformation) = 0;
          ZwSetInformationObject(v12, ObjectHandleFlagInformation, &ObjectInformation, 2u);
          ZwClose(*((HANDLE *)v3 + 336));
          *((_QWORD *)v3 + 336) = 0LL;
        }
        if ( CmpCmdRenameHive(v6, 0LL, (const void **)&Destination, 0, 1) >= 0 )
          *((_QWORD *)v3 + 336) = v6;
      }
      else
      {
        v11 = v19;
        CmpDestroySecurityCache(v19);
        HvFreeHive(v11, 1);
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
