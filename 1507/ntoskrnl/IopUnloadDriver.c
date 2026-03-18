/*
 * XREFs of IopUnloadDriver @ 0x140539658
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x1405395A8 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x14067A088 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1407B5D90 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     IopCleanupNotifications @ 0x14011C4BC (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x14011C5DC (IopCheckUnloadDriver.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwUnloadDriver @ 0x140182510 (ZwUnloadDriver.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     ObMakeTemporaryObject @ 0x140539B08 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x140539BE4 (IopOpenRegistryKey.c)
 *     PnpIsLegacyDriver @ 0x140572950 (PnpIsLegacyDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopUnloadDriver(unsigned __int16 *a1, char a2)
{
  int v4; // r15d
  KPROCESSOR_MODE PreviousMode; // dl
  REGHANDLE v6; // rbx
  int DriverNameFromKeyNode; // edi
  void (__fastcall **v8)(PVOID); // rbx
  PIMAGE_NT_HEADERS v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  wchar_t *Buffer; // rbx
  unsigned __int16 v14; // ax
  REGHANDLE v15; // rsi
  int v17; // r8d
  int v18; // eax
  wchar_t *v19; // rcx
  ULONG64 v20; // rdx
  PVOID PoolWithTagPriority; // rax
  void *v22; // rdi
  unsigned int v23; // ebx
  void (__fastcall **v24)(PVOID); // rcx
  int Object; // [rsp+20h] [rbp-1B8h]
  char v26[4]; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int16 v27; // [rsp+44h] [rbp-194h] BYREF
  __int16 v28; // [rsp+48h] [rbp-190h] BYREF
  __int16 v29; // [rsp+4Ch] [rbp-18Ch] BYREF
  int v30; // [rsp+50h] [rbp-188h] BYREF
  PVOID v31; // [rsp+58h] [rbp-180h] BYREF
  int v32; // [rsp+60h] [rbp-178h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-170h] BYREF
  PVOID v34; // [rsp+78h] [rbp-160h]
  UNICODE_STRING DriverServiceName; // [rsp+80h] [rbp-158h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-148h] BYREF
  HANDLE v37; // [rsp+98h] [rbp-140h] BYREF
  void (__fastcall **v38)(PVOID); // [rsp+A0h] [rbp-138h]
  int v39; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-128h]
  UNICODE_STRING *p_Destination; // [rsp+B8h] [rbp-120h]
  int v42; // [rsp+C0h] [rbp-118h]
  __int128 v43; // [rsp+C8h] [rbp-110h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+E0h] [rbp-F8h] BYREF
  struct _KEVENT Event; // [rsp+100h] [rbp-D8h] BYREF
  PVOID v46; // [rsp+118h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+140h] [rbp-98h]
  int v49; // [rsp+148h] [rbp-90h]
  int v50; // [rsp+14Ch] [rbp-8Ch]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+150h] [rbp-88h] BYREF
  __int64 v52; // [rsp+160h] [rbp-78h]
  int v53; // [rsp+168h] [rbp-70h]
  int v54; // [rsp+16Ch] [rbp-6Ch]
  int *v55; // [rsp+170h] [rbp-68h]
  __int64 v56; // [rsp+178h] [rbp-60h]
  __int16 *v57; // [rsp+180h] [rbp-58h]
  __int64 v58; // [rsp+188h] [rbp-50h]
  wchar_t *v59; // [rsp+190h] [rbp-48h]
  int v60; // [rsp+198h] [rbp-40h]
  int v61; // [rsp+19Ch] [rbp-3Ch]
  int *v62; // [rsp+1A0h] [rbp-38h]
  __int64 v63; // [rsp+1A8h] [rbp-30h]

  v34 = 0LL;
  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !a2 )
  {
    if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (unsigned __int16 *)MmUserProbeAddress;
      v18 = *(_DWORD *)a1;
      *(_DWORD *)&DriverServiceName.Length = v18;
      v19 = (wchar_t *)*((_QWORD *)a1 + 1);
      DriverServiceName.Buffer = v19;
      if ( !(_WORD)v18 )
        return 3221225485LL;
      if ( ((unsigned __int8)v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (ULONG64)v19 + (unsigned __int16)v18;
      if ( v20 > MmUserProbeAddress || v20 < (unsigned __int64)v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                PagedPool,
                                DriverServiceName.Length,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        v22 = PoolWithTagPriority;
        if ( !PoolWithTagPriority )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithTagPriority = ExAllocatePoolWithQuotaTag(PagedPool, DriverServiceName.Length, 0x20206F49u);
        v22 = PoolWithTagPriority;
      }
      v34 = PoolWithTagPriority;
      memmove(v22, DriverServiceName.Buffer, DriverServiceName.Length);
      DriverServiceName.Buffer = (wchar_t *)v22;
      v23 = ZwUnloadDriver(&DriverServiceName);
      ExFreePoolWithTag(v22, 0);
      return v23;
    }
    return 3221225569LL;
  }
  v6 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverUnload_Start) )
  {
    v17 = *a1;
    v28 = *a1 >> 1;
    UserData.Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&UserData.Size = 2LL;
    v48 = *((_QWORD *)a1 + 1);
    v49 = v17;
    v50 = 0;
    EtwWrite(v6, &KMPnPEvt_DriverUnload_Start, 0LL, 2u, &UserData);
  }
  Destination.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
    return 3221225569LL;
  }
  LOBYTE(Object) = 0;
  DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 131097LL, Object);
  if ( DriverNameFromKeyNode >= 0 )
  {
    DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
    ObCloseHandle(Handle, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      v39 = 48;
      v40 = 0LL;
      v42 = 576;
      p_Destination = &Destination;
      v43 = 0LL;
      DriverNameFromKeyNode = ObOpenObjectByName((__int64)&v39, (__int64)IoDriverObjectType, 0, 0LL, 1u, 0LL, &v37);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = ObReferenceObjectByHandle(v37, 0, IoDriverObjectType, 0, &v31, 0LL);
        ObCloseHandle(v37, 0);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v8 = (void (__fastcall **)(PVOID))v31;
          v9 = RtlImageNtHeader(*((PVOID *)v31 + 3));
          v4 = v9->OptionalHeader.MinorImageVersion | (v9->OptionalHeader.MajorImageVersion << 16);
          v38 = v8 + 13;
          if ( v8[13] && v8[5] )
          {
            if ( a2 || (unsigned int)PnpIsLegacyDriver(v8) )
            {
              DriverNameFromKeyNode = IopCheckUnloadDriver(v8, v26);
              if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
              {
                if ( v26[0] )
                {
                  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                  {
                    v8 = (void (__fastcall **)(PVOID))v31;
                    (*v38)(v31);
                  }
                  else
                  {
                    KeInitializeEvent(&Event, NotificationEvent, 0);
                    v8 = (void (__fastcall **)(PVOID))v31;
                    v46 = v31;
                    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                    WorkItem.Parameter = &WorkItem;
                    WorkItem.List.Flink = 0LL;
                    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
                    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  }
                  IopCleanupNotifications(v8, v8, v10, v11);
                  ObMakeTemporaryObject(v8);
                  ObfDereferenceObject(v8);
                }
                ObfDereferenceObject(v8);
                DriverNameFromKeyNode = 0;
              }
              goto LABEL_20;
            }
          }
          else
          {
            v24 = v8;
          }
          ObfDereferenceObject(v24);
          DriverNameFromKeyNode = -1073741808;
        }
      }
    }
  }
LABEL_20:
  v32 = v4;
  v30 = DriverNameFromKeyNode;
  v12 = *a1;
  v29 = *a1 >> 1;
  v51.Ptr = (ULONGLONG)&v29;
  *(_QWORD *)&v51.Size = 2LL;
  v52 = *((_QWORD *)a1 + 1);
  v53 = v12;
  v54 = 0;
  v55 = &v30;
  v56 = 4LL;
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
    v14 = Destination.Length >> 1;
  else
    v14 = 0;
  v27 = v14;
  v57 = (__int16 *)&v27;
  v58 = 2LL;
  v59 = Destination.Buffer;
  v60 = 2 * v14;
  v61 = 0;
  v62 = &v32;
  v63 = 4LL;
  v15 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverUnload_Stop) )
  {
    EtwWrite(v15, &KMPnPEvt_DriverUnload_Stop, 0LL, 6u, &v51);
    Buffer = Destination.Buffer;
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
