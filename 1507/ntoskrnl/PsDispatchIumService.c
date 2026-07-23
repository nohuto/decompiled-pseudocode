/*
 * XREFs of PsDispatchIumService @ 0x140244710
 * Callers:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     EtwWriteTransfer @ 0x1400EFF50 (EtwWriteTransfer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeAlertThreadByThreadId @ 0x1400F33C0 (KeAlertThreadByThreadId.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KeWaitForAlertByThreadId @ 0x14010BF10 (KeWaitForAlertByThreadId.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017F2F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017F3B0 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x14017F570 (ZwTerminateProcess.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspIumAllocatePhysicalPages @ 0x140244BC0 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140244CE0 (PspIumFreePhysicalPages.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkpSuspendProcess @ 0x1404091C4 (DbgkpSuspendProcess.c)
 *     PsExitCurrentUserThread @ 0x1404204E4 (PsExitCurrentUserThread.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwSetInformation @ 0x14057E7C0 (EtwSetInformation.c)
 *     PspIumGetSystemData @ 0x1405C74F0 (PspIumGetSystemData.c)
 *     DbgkpResumeProcess @ 0x1406696BC (DbgkpResumeProcess.c)
 *     MmGetSectionStrongImageReference @ 0x1406AA510 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x1406C6518 (PspIumGetPhysicalPage.c)
 *     PspIumGetProcessorInfo @ 0x1406C65D8 (PspIumGetProcessorInfo.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int128 v9; // xmm0
  unsigned int v10; // r9d
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // eax
  int SectionStrongImageReference; // eax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v25; // rdx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  ULONGLONG v30; // rax
  _KPROCESS *v31; // rcx
  _KPROCESS *Process; // rbx
  NTSTATUS VirtualMemory; // eax
  _KPROCESS *v34; // rcx
  NTSTATUS v35; // esi
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  const GUID *v40; // r8
  const GUID *v41; // rcx
  __int64 v42; // rcx
  _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+48h] [rbp-C0h] BYREF
  ULONGLONG RegHandle; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v45[48]; // [rsp+58h] [rbp-B0h] BYREF
  _WORD v46[136]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v47[5]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v48; // [rsp+1E8h] [rbp+E0h]
  int v49; // [rsp+1F0h] [rbp+E8h]
  __int16 v50; // [rsp+1F4h] [rbp+ECh]
  char v51; // [rsp+1F6h] [rbp+EEh]

  v4 = *(unsigned __int16 *)(a1 + 2);
  if ( v4 > 12 )
  {
    if ( v4 <= 18 )
    {
      if ( v4 == 18 )
      {
        v23 = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_29;
      }
      v26 = v4 - 13;
      if ( !v26 )
      {
        memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        v17 = 0LL;
        goto LABEL_17;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        SectionStrongImageReference = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), 0LL, a1 + 16);
        goto LABEL_16;
      }
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 != 1 )
            goto LABEL_64;
          *(_QWORD *)(a1 + 8) = KeGetCurrentProcessorNumberEx(ProcNumber);
          v30 = (unsigned int)ProcNumber[0];
          goto LABEL_46;
        }
        v31 = *(_KPROCESS **)(a1 + 8);
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process != v31 )
          KiStackAttachProcess(v31, 0, (__int64)v45);
        VirtualMemory = ZwFreeVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(a1 + 16),
                          (PSIZE_T)(a1 + 24),
                          *(_DWORD *)(a1 + 32));
      }
      else
      {
        v34 = *(_KPROCESS **)(a1 + 8);
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process != v34 )
          KiStackAttachProcess(v34, 0, (__int64)v45);
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(a1 + 16),
                          *(_QWORD *)(a1 + 40),
                          (PSIZE_T)(a1 + 24),
                          *(_DWORD *)(a1 + 32),
                          *(_DWORD *)(a1 + 36));
      }
      v35 = VirtualMemory;
      if ( Process != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((struct _KTHREAD *)v45, 0);
      *(_DWORD *)(a1 + 8) = v35;
      return;
    }
    v36 = v4 - 19;
    if ( !v36 )
    {
      DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
      return;
    }
    v37 = v36 - 1;
    if ( !v37 )
    {
      memset(v46, 0, sizeof(v46));
      SectionStrongImageReference = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v46);
      goto LABEL_16;
    }
    v38 = v37 - 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( !v39 )
      {
        SectionStrongImageReference = EtwSetInformation(
                                        *(_QWORD *)(a1 + 8),
                                        *(EVENT_INFO_CLASS *)(a1 + 16),
                                        *(PVOID *)(a1 + 24),
                                        *(_DWORD *)(a1 + 32));
        goto LABEL_16;
      }
      if ( v39 == 1 )
      {
        v40 = (const GUID *)(a1 + 32);
        v41 = 0LL;
        if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
          v40 = 0LL;
        if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
          v41 = (const GUID *)(a1 + 48);
        SectionStrongImageReference = EtwWriteTransfer(
                                        *(_QWORD *)(a1 + 8),
                                        (PCEVENT_DESCRIPTOR)(a1 + 16),
                                        v40,
                                        v41,
                                        *(_DWORD *)(a1 + 64),
                                        *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
        goto LABEL_16;
      }
LABEL_64:
      PspTerminateThreadByPointer((ULONG_PTR)KeGetCurrentThread());
      return;
    }
    v42 = EtwRegister((LPCGUID)(a1 + 8), HvlIumEtwEnableCallback, *(PVOID *)(a1 + 24), &RegHandle);
    v30 = RegHandle;
    *(_QWORD *)(a1 + 8) = v42;
LABEL_46:
    *(_QWORD *)(a1 + 16) = v30;
    return;
  }
  if ( v4 == 12 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v25 = KeGetCurrentThread();
    LOWORD(CurrentThread) = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = (__int16)CurrentThread;
    if ( !(_WORD)CurrentThread
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return;
  }
  if ( v4 > 6 )
  {
    v18 = v4 - 7;
    if ( !v18 )
    {
      if ( !*(_QWORD *)(a1 + 8) )
        PsExitCurrentUserThread();
      PspExitThread(*(unsigned int *)(a1 + 16));
      __debugbreak();
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 8));
      return;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v22 = 0LL;
          if ( *(_QWORD *)(a1 + 16) )
            v22 = a1 + 24;
          SectionStrongImageReference = KeWaitForAlertByThreadId(*(_BYTE *)(a1 + 8), v22, 0LL);
          goto LABEL_16;
        }
        goto LABEL_64;
      }
      v23 = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
    }
    else
    {
      LOBYTE(a3) = *(_BYTE *)(a1 + 24);
      LOBYTE(a2) = *(_BYTE *)(a1 + 16);
      v23 = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
    }
LABEL_29:
    *(_QWORD *)(a1 + 8) = v23;
    return;
  }
  if ( v4 == 6 )
  {
    PspIumGetProcessorInfo(a1);
    return;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    SectionStrongImageReference = PspIumAllocatePhysicalPages(*(unsigned int *)(a1 + 8), a1 + 16);
LABEL_16:
    v17 = SectionStrongImageReference;
LABEL_17:
    *(_QWORD *)(a1 + 8) = v17;
    return;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 8));
    return;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      PspIumGetPhysicalPage(a1);
      return;
    }
    if ( v8 == 1 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    goto LABEL_64;
  }
  v9 = *(_OWORD *)(a1 + 10);
  v10 = *(unsigned __int16 *)(a1 + 8);
  v11 = *(_OWORD *)(a1 + 26);
  v49 = *(_DWORD *)(a1 + 98);
  v50 = *(_WORD *)(a1 + 102);
  v47[0] = v9;
  v12 = *(_OWORD *)(a1 + 42);
  v51 = 0;
  v47[1] = v11;
  v13 = *(_OWORD *)(a1 + 58);
  v47[2] = v12;
  v14 = *(_OWORD *)(a1 + 74);
  v15 = *(_DWORD *)(a1 + 4);
  v47[3] = v13;
  *(_QWORD *)&v13 = *(_QWORD *)(a1 + 90);
  v47[4] = v14;
  v48 = v13;
  DbgPrintEx(0, 0, "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n", v10 >> 13, v15, (v10 >> 1) & 0xFFF, (const char *)v47);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
