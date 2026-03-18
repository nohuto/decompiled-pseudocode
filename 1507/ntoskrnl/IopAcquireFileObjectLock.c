/*
 * XREFs of IopAcquireFileObjectLock @ 0x140540A5C
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall IopAcquireFileObjectLock(char *Object, KPROCESSOR_MODE a2, char a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v9; // al
  BOOLEAN v10; // cl
  NTSTATUS v11; // eax
  unsigned int v12; // edi
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *a4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)Object + 28);
  while ( 2 )
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      ObfReferenceObject(Object);
      _InterlockedDecrement((volatile signed __int32 *)Object + 28);
      return 0LL;
    }
    do
    {
      if ( !a3 && a2 != 1 )
      {
        v10 = 0;
LABEL_6:
        v9 = 0;
        goto LABEL_7;
      }
      v9 = a2;
      v10 = 1;
      if ( !a3 )
        goto LABEL_6;
LABEL_7:
      v11 = KeWaitForSingleObject(Object + 128, Executive, v9, v10, 0LL);
      v12 = v11;
      if ( v11 != 257 && v11 != 192 )
        goto LABEL_9;
    }
    while ( !a3 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 );
    if ( v11 == 192 )
      break;
LABEL_9:
    if ( v11 != 257 )
      continue;
    break;
  }
  _InterlockedDecrement((volatile signed __int32 *)Object + 28);
  if ( !*((_DWORD *)Object + 29) && *((_DWORD *)Object + 28) )
    KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
  *a4 = 1;
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
