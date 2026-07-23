/*
 * XREFs of PsDispatchIumService @ 0x14020FA50
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 * Callees:
 *     EtwWriteTransfer @ 0x14000A1B0 (EtwWriteTransfer.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     KeAlertThreadByThreadId @ 0x140096B20 (KeAlertThreadByThreadId.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KeWaitForAlertByThreadId @ 0x1400CE2E8 (KeWaitForAlertByThreadId.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x14015A770 (ZwTerminateProcess.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1401C252C (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1401C291C (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x1401C2960 (VslHandleKsrCall.c)
 *     PspIumAllocatePhysicalPages @ 0x14020FF24 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140210044 (PspIumFreePhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     EtwSetInformation @ 0x140549024 (EtwSetInformation.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 *     PspIumGetSystemData @ 0x140581FD0 (PspIumGetSystemData.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14061AD54 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x14061AE68 (DbgkpSuspendProcess.c)
 *     MmGetSectionStrongImageReference @ 0x140663080 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x1406822E8 (PspIumGetPhysicalPage.c)
 *     PspIumGetProcessorInfo @ 0x1406823AC (PspIumGetProcessorInfo.c)
 *     PspIumVerifyParentSd @ 0x1406823CC (PspIumVerifyParentSd.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  GUID *v3; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int128 v11; // xmm0
  unsigned int v12; // r9d
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  int SectionStrongImageReference; // eax
  unsigned __int8 v19; // al
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  _KPROCESS *v25; // rcx
  _KPROCESS *Process; // rbx
  NTSTATUS VirtualMemory; // eax
  NTSTATUS v28; // esi
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  void *v36; // r8
  ETWENABLECALLBACK *v37; // rdx
  __int64 v38; // rcx
  const GUID *v39; // r8
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  void *v44; // rax
  ULONGLONG RegHandle; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v46[56]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v47[272]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v48[5]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v49; // [rsp+1E0h] [rbp+E0h]
  int v50; // [rsp+1E8h] [rbp+E8h]
  __int16 v51; // [rsp+1ECh] [rbp+ECh]
  char v52; // [rsp+1EEh] [rbp+EEh]

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v5 = *(unsigned __int16 *)(a1 + 2);
  if ( v5 > 0xE )
  {
    if ( *(unsigned __int16 *)(a1 + 2) > 0x15u )
    {
      v40 = v5 - 22;
      if ( !v40 )
      {
        SectionStrongImageReference = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
        goto LABEL_80;
      }
      v41 = v40 - 1;
      if ( !v41 )
      {
        VslHandleKsrCall(a1);
        return;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        SectionStrongImageReference = HvlpDepositPages(0);
        goto LABEL_80;
      }
      v43 = v42 - 1;
      if ( !v43 )
      {
        *(_DWORD *)(a1 + 8) = VslAllocatePool(
                                *(_QWORD *)(a1 + 8),
                                *(_DWORD *)(a1 + 16),
                                (_QWORD *)(a1 + 16),
                                (_QWORD *)(a1 + 24),
                                (_QWORD *)(a1 + 32));
        return;
      }
      if ( v43 == 1 )
      {
        v44 = (void *)VslFreePoolTransferObject(*(__int64 **)(a1 + 8), 0LL);
        ExFreePoolWithTag(v44, 0);
        return;
      }
    }
    else
    {
      if ( v5 == 21 )
      {
        v39 = (const GUID *)(a1 + 32);
        if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
          v39 = 0LL;
        if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
          v3 = (GUID *)(a1 + 48);
        SectionStrongImageReference = EtwWriteTransfer(
                                        *(_QWORD *)(a1 + 8),
                                        (PCEVENT_DESCRIPTOR)(a1 + 16),
                                        v39,
                                        v3,
                                        *(_DWORD *)(a1 + 64),
                                        *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
        goto LABEL_80;
      }
      v31 = v5 - 15;
      if ( !v31 )
      {
        v19 = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_23;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
        DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
        return;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
        memset(v47, 0, sizeof(v47));
        SectionStrongImageReference = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v47);
        goto LABEL_80;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        v36 = *(void **)(a1 + 24);
        v37 = (ETWENABLECALLBACK *)VslIumEtwEnableCallback;
        if ( !v36 )
          v37 = 0LL;
        v38 = EtwRegister((LPCGUID)(a1 + 8), v37, v36, &RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle;
        goto LABEL_81;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
        SectionStrongImageReference = EtwUnregister(*(_QWORD *)(a1 + 8));
        goto LABEL_80;
      }
      if ( v35 == 1 )
      {
        SectionStrongImageReference = EtwSetInformation(
                                        *(_QWORD *)(a1 + 8),
                                        *(EVENT_INFO_CLASS *)(a1 + 16),
                                        *(PVOID *)(a1 + 24),
                                        *(_DWORD *)(a1 + 32));
        goto LABEL_80;
      }
    }
    goto LABEL_74;
  }
  if ( v5 == 14 )
  {
    v30 = *(_KPROCESS **)(a1 + 8);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v30 )
      KiStackAttachProcess(v30, 0, (__int64)v46);
    VirtualMemory = ZwFreeVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)(a1 + 16),
                      (PSIZE_T)(a1 + 24),
                      *(_DWORD *)(a1 + 40));
    goto LABEL_33;
  }
  if ( *(unsigned __int16 *)(a1 + 2) > 7u )
  {
    v20 = v5 - 8;
    if ( !v20 )
    {
      v19 = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
      goto LABEL_23;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        v3 = (GUID *)(a1 + 24);
      SectionStrongImageReference = KeWaitForAlertByThreadId(*(_BYTE *)(a1 + 8), v3, 0LL);
      goto LABEL_80;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      KeLeaveCriticalRegion();
      return;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
      *(_QWORD *)(a1 + 8) = 0LL;
      return;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      SectionStrongImageReference = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), 0LL, a1 + 16);
      goto LABEL_80;
    }
    if ( v24 == 1 )
    {
      v25 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v25 )
        KiStackAttachProcess(v25, 0, (__int64)v46);
      VirtualMemory = ZwAllocateVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)(a1 + 16),
                        *(_QWORD *)(a1 + 32),
                        (PSIZE_T)(a1 + 24),
                        *(_DWORD *)(a1 + 40),
                        4u);
LABEL_33:
      v28 = VirtualMemory;
      if ( Process != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((struct _KTHREAD *)v46, 0);
      *(_DWORD *)(a1 + 8) = v28;
      return;
    }
LABEL_74:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v5 == 7 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 24);
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    v19 = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
LABEL_23:
    *(_QWORD *)(a1 + 8) = v19;
    return;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    SectionStrongImageReference = PspIumAllocatePhysicalPages(*(unsigned int *)(a1 + 8), a1 + 16);
LABEL_80:
    v38 = SectionStrongImageReference;
LABEL_81:
    *(_QWORD *)(a1 + 8) = v38;
    return;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 8));
    return;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      PspIumGetPhysicalPage(a1);
      return;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    if ( v10 == 1 )
    {
      PspIumGetProcessorInfo(a1);
      return;
    }
    goto LABEL_74;
  }
  v11 = *(_OWORD *)(a1 + 10);
  v12 = *(unsigned __int16 *)(a1 + 8);
  v13 = *(_OWORD *)(a1 + 26);
  v50 = *(_DWORD *)(a1 + 98);
  v51 = *(_WORD *)(a1 + 102);
  v48[0] = v11;
  v14 = *(_OWORD *)(a1 + 42);
  v48[1] = v13;
  v15 = *(_OWORD *)(a1 + 58);
  v16 = *(_DWORD *)(a1 + 4);
  v48[2] = v14;
  v17 = *(_OWORD *)(a1 + 74);
  v48[3] = v15;
  *(_QWORD *)&v15 = *(_QWORD *)(a1 + 90);
  v48[4] = v17;
  v49 = v15;
  v52 = 0;
  DbgPrintEx(0, 0, "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n", v12 >> 13, v16, (v12 >> 1) & 0xFFF, (const char *)v48);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
