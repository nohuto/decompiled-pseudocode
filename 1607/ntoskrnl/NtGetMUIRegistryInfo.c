/*
 * XREFs of NtGetMUIRegistryInfo @ 0x1404B3868
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MUIBugCheck @ 0x14022F984 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14022F9A4 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     MUIInitializeResourceLock @ 0x1404B42FC (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  ULONG v5; // ebx
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bl
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // eax
  unsigned int Length; // [rsp+40h] [rbp-B8h]
  struct _KEVENT *StartContext; // [rsp+48h] [rbp-B0h] BYREF
  void *v18; // [rsp+50h] [rbp-A8h]
  __int64 v19; // [rsp+58h] [rbp-A0h]
  int v20; // [rsp+60h] [rbp-98h]
  int v21; // [rsp+64h] [rbp-94h]
  int v22; // [rsp+68h] [rbp-90h]
  int v23; // [rsp+6Ch] [rbp-8Ch]
  int v24; // [rsp+70h] [rbp-88h]
  HANDLE ThreadHandle; // [rsp+78h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-60h] BYREF
  char v28; // [rsp+118h] [rbp+20h]

  v5 = Flags;
  v28 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_47;
  if ( DataSize )
  {
    v6 = (__int64)DataSize;
    if ( (unsigned __int64)DataSize >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    Length = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      if ( !Data )
        goto LABEL_48;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_48;
    Length = 0;
  }
  if ( Data )
    goto LABEL_48;
LABEL_11:
  if ( !Flags )
    v5 = 1;
  if ( (v5 & 0xFFFFFFF4) != 0 )
    goto LABEL_48;
  if ( !MUIRegistryLock )
  {
    v9 = MUIInitializeResourceLock(&MUIRegistryLock);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_26;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
  v28 = 1;
  if ( MUIRegistryInfo == (PVOID)-1LL )
  {
    if ( (v5 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
LABEL_46:
      v9 = 0;
      goto LABEL_26;
    }
LABEL_47:
    v9 = -1073741823;
    goto LABEL_26;
  }
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      if ( MUIRegistryInfo )
      {
        ExFreePoolWithTag(MUIRegistryInfo, 0);
        MUIRegistryInfo = 0LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        if ( (v5 & 8) != 0 )
          ++MEMORY[0xFFFFF780000003A4];
      }
      goto LABEL_46;
    }
    if ( (v5 & 8) != 0 )
    {
      v15 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v15;
      goto LABEL_46;
    }
LABEL_48:
    v9 = -1073741811;
    goto LABEL_26;
  }
  v8 = 0;
  if ( MUIRegistryInfo )
    goto LABEL_18;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  StartContext = &Event;
  v18 = 0LL;
  v19 = 0LL;
  v20 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
  v21 = 0;
  v22 = (unsigned __int16)PsMachineUILanguageId;
  v23 = 0;
  v24 = -1073741823;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         MUIRegistrySystemRoutine,
         &StartContext);
  if ( v9 >= 0 )
  {
    ZwClose(ThreadHandle);
    v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v9 >= 0 )
    {
      v9 = v24;
      if ( v24 < 0 )
      {
LABEL_55:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_26;
      }
      MUIRegistryInfo = v18;
      LODWORD(MUIRegistryInfoSize) = v19;
      if ( !HIDWORD(v19) )
        MUIBugCheck(32770);
      if ( !v21 )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !v23 )
        PsMachineUILanguageId = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    }
  }
  if ( v9 < 0 )
    goto LABEL_55;
LABEL_18:
  if ( Length )
  {
    if ( Length < (unsigned int)MUIRegistryInfoSize )
    {
      v9 = -1073741789;
      goto LABEL_22;
    }
    v8 = 1;
  }
  v9 = 0;
LABEL_22:
  v10 = (__int64)DataSize;
  if ( (unsigned __int64)DataSize >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v10 = *(_DWORD *)v10;
  *DataSize = MUIRegistryInfoSize;
  if ( v8 )
  {
    ProbeForWrite(Data, Length, 1u);
    memset(Data, 0, Length);
    memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
  }
LABEL_26:
  if ( v28 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  return v9;
}
