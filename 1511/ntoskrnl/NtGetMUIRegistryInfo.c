/*
 * XREFs of NtGetMUIRegistryInfo @ 0x1404AAE1C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MUIBugCheck @ 0x140215A84 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x140215AA4 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     MUIInitializeResourceLock @ 0x1404ABA74 (MUIInitializeResourceLock.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  ULONG v5; // ebx
  unsigned int *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bl
  int v9; // esi
  _DWORD *v10; // rcx
  int v12; // eax
  unsigned int Length; // [rsp+40h] [rbp-B8h]
  struct _KEVENT *StartContext; // [rsp+48h] [rbp-B0h] BYREF
  void *v15; // [rsp+50h] [rbp-A8h]
  __int64 v16; // [rsp+58h] [rbp-A0h]
  int v17; // [rsp+60h] [rbp-98h]
  int v18; // [rsp+64h] [rbp-94h]
  int v19; // [rsp+68h] [rbp-90h]
  int v20; // [rsp+6Ch] [rbp-8Ch]
  int v21; // [rsp+70h] [rbp-88h]
  HANDLE ThreadHandle; // [rsp+78h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-60h] BYREF
  char v25; // [rsp+118h] [rbp+20h]

  v5 = Flags;
  v25 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_47;
  if ( DataSize )
  {
    v6 = DataSize;
    if ( (unsigned __int64)DataSize >= MmUserProbeAddress )
      v6 = (unsigned int *)MmUserProbeAddress;
    Length = *v6;
    if ( *v6 )
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
  if ( !v5 )
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
  v25 = 1;
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
      v12 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v12;
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
  v15 = 0LL;
  v16 = 0LL;
  v17 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
  v18 = 0;
  v19 = (unsigned __int16)PsMachineUILanguageId;
  v20 = 0;
  v21 = -1073741823;
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
      v9 = v21;
      if ( v21 < 0 )
      {
LABEL_55:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_26;
      }
      MUIRegistryInfo = v15;
      LODWORD(MUIRegistryInfoSize) = v16;
      if ( !HIDWORD(v16) )
        MUIBugCheck(32770);
      if ( !v18 )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !v20 )
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
  v10 = DataSize;
  if ( (unsigned __int64)DataSize >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  *DataSize = MUIRegistryInfoSize;
  if ( v8 )
  {
    ProbeForWrite(Data, Length, 1u);
    memset(Data, 0, Length);
    memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
  }
LABEL_26:
  if ( v25 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v9;
}
