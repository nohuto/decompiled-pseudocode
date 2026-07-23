/*
 * XREFs of PsDispatchIumService @ 0x1401F5B10
 * Callers:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x1400297D0 (KeWaitForAlertByThreadId.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAlertThreadByThreadId @ 0x14008E070 (KeAlertThreadByThreadId.c)
 *     EtwWriteTransfer @ 0x14009250C (EtwWriteTransfer.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1400C7F80 (KeGetCurrentProcessorNumberEx.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x140150920 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401509E0 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x140150BA0 (ZwTerminateProcess.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspIumAllocatePhysicalPages @ 0x1401F5F78 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1401F6098 (PspIumFreePhysicalPages.c)
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     DbgkpSuspendProcess @ 0x1404A46AC (DbgkpSuspendProcess.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwSetInformation @ 0x14050D180 (EtwSetInformation.c)
 *     PspIumGetSystemData @ 0x14054F734 (PspIumGetSystemData.c)
 *     DbgkpResumeProcess @ 0x1405F0A74 (DbgkpResumeProcess.c)
 *     MmGetSectionStrongImageReference @ 0x14062CA98 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x14064377C (PspIumGetPhysicalPage.c)
 *     PspIumGetProcessorInfo @ 0x14064383C (PspIumGetProcessorInfo.c)
 *     PspIumVerifyParentSd @ 0x14064385C (PspIumVerifyParentSd.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  GUID *v3; // rbx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  __int128 v10; // xmm0
  unsigned int v11; // r9d
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  int SectionStrongImageReference; // eax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v24; // al
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _KPROCESS *v29; // rcx
  _KPROCESS *Process; // rbx
  NTSTATUS VirtualMemory; // eax
  _KPROCESS *v32; // rcx
  NTSTATUS v33; // esi
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  const GUID *v37; // r8
  _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+48h] [rbp-C0h] BYREF
  ULONGLONG RegHandle; // [rsp+50h] [rbp-B8h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v40; // [rsp+58h] [rbp-B0h] BYREF
  _WORD v41[136]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v42[5]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v43; // [rsp+1E8h] [rbp+E0h]
  int v44; // [rsp+1F0h] [rbp+E8h]
  __int16 v45; // [rsp+1F4h] [rbp+ECh]
  char v46; // [rsp+1F6h] [rbp+EEh]

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    else
      PspTerminateThreadByPointer((ULONG_PTR)KeGetCurrentThread());
  }
  v5 = *(unsigned __int16 *)(a1 + 2);
  if ( v5 > 0xC )
  {
    if ( *(unsigned __int16 *)(a1 + 2) > 0x12u )
    {
      v34 = v5 - 19;
      if ( !v34 )
      {
        v18 = EtwRegister((LPCGUID)(a1 + 8), HvlIumEtwEnableCallback, *(PVOID *)(a1 + 24), &RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle;
        goto LABEL_71;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
          {
LABEL_60:
            PspTerminateThreadByPointer((ULONG_PTR)KeGetCurrentThread());
            return;
          }
          SectionStrongImageReference = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
        }
        else
        {
          v37 = (const GUID *)(a1 + 32);
          if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
            v37 = 0LL;
          if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
            v3 = (GUID *)(a1 + 48);
          SectionStrongImageReference = EtwWriteTransfer(
                                          *(_QWORD *)(a1 + 8),
                                          (PCEVENT_DESCRIPTOR)(a1 + 16),
                                          v37,
                                          v3,
                                          *(_DWORD *)(a1 + 64),
                                          *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
        }
      }
      else
      {
        SectionStrongImageReference = EtwSetInformation(
                                        *(_QWORD *)(a1 + 8),
                                        *(EVENT_INFO_CLASS *)(a1 + 16),
                                        *(PVOID *)(a1 + 24),
                                        *(_DWORD *)(a1 + 32));
      }
LABEL_20:
      v18 = SectionStrongImageReference;
LABEL_71:
      *(_QWORD *)(a1 + 8) = v18;
      return;
    }
    if ( v5 == 18 )
    {
      memset(v41, 0, sizeof(v41));
      SectionStrongImageReference = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v41);
      goto LABEL_20;
    }
    v25 = v5 - 13;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
          *(_QWORD *)(a1 + 8) = KeGetCurrentProcessorNumberEx(ProcNumber);
          *(_QWORD *)(a1 + 16) = (unsigned int)ProcNumber[0];
          return;
        }
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
            return;
          }
          goto LABEL_60;
        }
        v24 = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_34;
      }
      v29 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v29 )
        KiStackAttachProcess(v29, 0LL, (__int64)&v40);
      VirtualMemory = ZwFreeVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)(a1 + 16),
                        (PSIZE_T)(a1 + 24),
                        *(_DWORD *)(a1 + 32));
    }
    else
    {
      v32 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v32 )
        KiStackAttachProcess(v32, 0LL, (__int64)&v40);
      VirtualMemory = ZwAllocateVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)(a1 + 16),
                        *(_QWORD *)(a1 + 40),
                        (PSIZE_T)(a1 + 24),
                        *(_DWORD *)(a1 + 32),
                        *(_DWORD *)(a1 + 36));
    }
    v33 = VirtualMemory;
    if ( Process != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess(&v40, 0LL);
    *(_DWORD *)(a1 + 8) = v33;
    return;
  }
  if ( v5 == 12 )
  {
    SectionStrongImageReference = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), 0LL, a1 + 16);
    goto LABEL_20;
  }
  if ( *(unsigned __int16 *)(a1 + 2) > 6u )
  {
    v19 = v5 - 7;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            KeLeaveCriticalRegion();
            return;
          }
          if ( v22 == 1 )
          {
            memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
            *(_QWORD *)(a1 + 8) = 0LL;
            return;
          }
          goto LABEL_60;
        }
        if ( *(_QWORD *)(a1 + 16) )
          v3 = (GUID *)(a1 + 24);
        SectionStrongImageReference = KeWaitForAlertByThreadId(*(_BYTE *)(a1 + 8), v3, 0LL);
        goto LABEL_20;
      }
      v24 = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8), a2, a3);
    }
    else
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 16);
      v24 = DbgkForwardException(*(_QWORD *)(a1 + 8), a2);
    }
LABEL_34:
    *(_QWORD *)(a1 + 8) = v24;
    return;
  }
  if ( v5 == 6 )
  {
    PspIumGetProcessorInfo(a1);
    return;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    SectionStrongImageReference = PspIumAllocatePhysicalPages(*(unsigned int *)(a1 + 8), a1 + 16);
    goto LABEL_20;
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
    if ( v9 == 1 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    goto LABEL_60;
  }
  v10 = *(_OWORD *)(a1 + 10);
  v11 = *(unsigned __int16 *)(a1 + 8);
  v12 = *(_OWORD *)(a1 + 26);
  v44 = *(_DWORD *)(a1 + 98);
  v45 = *(_WORD *)(a1 + 102);
  v42[0] = v10;
  v13 = *(_OWORD *)(a1 + 42);
  v42[1] = v12;
  v14 = *(_OWORD *)(a1 + 58);
  v15 = *(_DWORD *)(a1 + 4);
  v42[2] = v13;
  v16 = *(_OWORD *)(a1 + 74);
  v42[3] = v14;
  *(_QWORD *)&v14 = *(_QWORD *)(a1 + 90);
  v42[4] = v16;
  v43 = v14;
  v46 = 0;
  DbgPrintEx(0, 0, "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n", v11 >> 13, v15, (v11 >> 1) & 0xFFF, (const char *)v42);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
