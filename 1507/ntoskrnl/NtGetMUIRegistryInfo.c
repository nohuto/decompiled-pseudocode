/*
 * XREFs of NtGetMUIRegistryInfo @ 0x14053A748
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MUIBugCheck @ 0x140265BE8 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x140265C08 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     MUIInitializeResourceLock @ 0x14053B410 (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  ULONG v5; // ebx
  unsigned int *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bl
  int v9; // esi
  _DWORD *v10; // rcx
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  int v14; // eax
  unsigned int Length; // [rsp+40h] [rbp-B8h]
  struct _KEVENT *StartContext; // [rsp+48h] [rbp-B0h] BYREF
  void *v17; // [rsp+50h] [rbp-A8h]
  __int64 v18; // [rsp+58h] [rbp-A0h]
  int v19; // [rsp+60h] [rbp-98h]
  int v20; // [rsp+64h] [rbp-94h]
  int v21; // [rsp+68h] [rbp-90h]
  int v22; // [rsp+6Ch] [rbp-8Ch]
  int v23; // [rsp+70h] [rbp-88h]
  HANDLE ThreadHandle; // [rsp+78h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-60h] BYREF
  char v27; // [rsp+118h] [rbp+20h]

  v5 = Flags;
  v27 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_50;
  if ( DataSize )
  {
    v6 = DataSize;
    if ( (unsigned __int64)DataSize >= MmUserProbeAddress )
      v6 = (unsigned int *)MmUserProbeAddress;
    Length = *v6;
    if ( *v6 )
    {
      if ( !Data )
        goto LABEL_51;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_51;
    Length = 0;
  }
  if ( Data )
    goto LABEL_51;
LABEL_11:
  if ( !v5 )
    v5 = 1;
  if ( (v5 & 0xFFFFFFF4) != 0 )
    goto LABEL_51;
  if ( !MUIRegistryLock )
  {
    v9 = MUIInitializeResourceLock(&MUIRegistryLock);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_26;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
  v27 = 1;
  if ( MUIRegistryInfo == (PVOID)-1LL )
  {
    if ( (v5 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
LABEL_47:
      v9 = 0;
      goto LABEL_26;
    }
LABEL_50:
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
      goto LABEL_47;
    }
    if ( (v5 & 8) != 0 )
    {
      v14 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v14;
      goto LABEL_47;
    }
LABEL_51:
    v9 = -1073741811;
    goto LABEL_26;
  }
  v8 = 0;
  if ( MUIRegistryInfo )
    goto LABEL_18;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  StartContext = &Event;
  v17 = 0LL;
  v18 = 0LL;
  v19 = *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3);
  v20 = 0;
  v21 = (unsigned __int16)PsMachineUILanguageId;
  v22 = 0;
  v23 = -1073741823;
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
      v9 = v23;
      if ( v23 < 0 )
      {
LABEL_58:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_26;
      }
      MUIRegistryInfo = v17;
      LODWORD(MUIRegistryInfoSize) = v18;
      if ( !HIDWORD(v18) )
        MUIBugCheck(32770);
      if ( !v20 )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !v22 )
        PsMachineUILanguageId = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    }
  }
  if ( v9 < 0 )
    goto LABEL_58;
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
  if ( v27 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
