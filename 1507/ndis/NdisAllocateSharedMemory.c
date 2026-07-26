/*
 * XREFs of NdisAllocateSharedMemory @ 0x1C001DBA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C0038194 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     ndisGetAnyProcInsideNode @ 0x1C00D1D78 (ndisGetAnyProcInsideNode.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // rdi
  NDIS_STATUS v9; // ebx
  __int64 v10; // r15
  unsigned int v11; // eax
  _QWORD *PoolWithTag; // rax
  unsigned int PreferredNode; // ebx
  USHORT HighestNodeNumber; // ax
  __int64 v15; // r9
  void *v16; // rax
  KIRQL v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // rax
  PVOID *v21; // r9
  __int64 ReceiveQueueByQueueId; // rax
  KIRQL v24; // r10
  int AnyProcInsideNode; // eax
  struct _KTHREAD *CurrentThread; // rcx
  UCHAR v27; // dl
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  char v35; // [rsp+30h] [rbp-50h]
  UCHAR Processor[4]; // [rsp+34h] [rbp-4Ch]
  PVOID *v37; // [rsp+38h] [rbp-48h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-40h] BYREF
  _PROCESSOR_NUMBER v39; // [rsp+48h] [rbp-38h] BYREF
  int v40; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v37 = pAllocationHandle;
  Affinity.Mask = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  *(_WORD *)&Processor[2] = 0;
  v5 = 0LL;
  v35 = 0;
  v6 = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  v9 = -1073741637;
  if ( (unsigned __int8)byte_1C008531C >= 4u )
  {
    WPP_SF_qD(21LL, &WPP_e661d27027f753e153c509da19b80f2a_Traceguids, NdisHandle, SharedMemoryParameters->Length);
    pAllocationHandle = v37;
  }
  if ( !NdisHandle )
    goto LABEL_42;
  if ( *(_BYTE *)NdisHandle == 18 )
  {
    v4 = (_QWORD *)*((_QWORD *)NdisHandle + 2);
    v3 = NdisHandle;
  }
  else
  {
    if ( *(_BYTE *)NdisHandle != 17 )
    {
      v9 = -1073741811;
      goto LABEL_19;
    }
    v4 = NdisHandle;
  }
  *pAllocationHandle = 0LL;
  v10 = v4[63];
  v11 = SharedMemoryParameters->SGListBufferLength + 184;
  if ( v11 < 0xB8 )
  {
    v9 = -1073741811;
LABEL_42:
    v21 = v37;
    goto LABEL_30;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6264444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_42;
  }
  memset(PoolWithTag, 0, 0xB8uLL);
  v6[7] = v4;
  v6[8] = v3;
  *((_OWORD *)v6 + 7) = *(_OWORD *)&SharedMemoryParameters->Header.Type;
  *((_OWORD *)v6 + 8) = *(_OWORD *)&SharedMemoryParameters->SharedMemoryHandle;
  *((_OWORD *)v6 + 9) = *(_OWORD *)&SharedMemoryParameters->Length;
  *((_OWORD *)v6 + 10) = *(_OWORD *)&SharedMemoryParameters->SGListBufferLength;
  v6[22] = *(_QWORD *)&SharedMemoryParameters->VPortId;
  v6[21] = v6 + 23;
  if ( SharedMemoryParameters->QueueId )
  {
    KeAcquireSpinLockRaiseToDpc(v4 + 12);
    v4[65] = KeGetCurrentThread();
    *((_DWORD *)v4 + 464) = 1836535;
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v4, SharedMemoryParameters->QueueId);
    v4[65] = 0LL;
    *((_DWORD *)v4 + 464) = 0;
    v5 = ReceiveQueueByQueueId;
    KeReleaseSpinLock(v4 + 12, v24);
  }
  else
  {
    v5 = v4[554];
  }
  if ( !v5 )
  {
    v9 = -1073741811;
LABEL_40:
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    goto LABEL_42;
  }
  v6[9] = v5;
  PreferredNode = SharedMemoryParameters->PreferredNode;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( PreferredNode != 0x80000000 )
  {
    if ( PreferredNode > HighestNodeNumber )
      PreferredNode = 0x80000000;
    if ( PreferredNode != 0x80000000 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Processor[2] = KeSetIdealProcessorThread(KeGetCurrentThread(), ProcNumber.Number);
      *(_WORD *)Processor = ProcNumber.Group;
      v39 = *(_PROCESSOR_NUMBER *)Processor;
      if ( *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->ProcessorHistory
           + 10 * KeGetProcessorIndexFromNumber(&v39)) == PreferredNode )
      {
        CurrentThread = KeGetCurrentThread();
        v27 = Processor[2];
      }
      else
      {
        v35 = 1;
        AnyProcInsideNode = ndisGetAnyProcInsideNode((unsigned __int16)PreferredNode);
        Affinity.Mask = -1LL;
        v40 = AnyProcInsideNode;
        Affinity.Group = AnyProcInsideNode;
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        CurrentThread = KeGetCurrentThread();
        v27 = BYTE2(v40);
      }
      KeSetIdealProcessorThread(CurrentThread, v27);
    }
  }
  if ( SharedMemoryParameters->QueueId && !v3 && (v28 = *(_QWORD *)(v5 + 72)) != 0 && *(_QWORD *)(v28 + 872) )
  {
    v6[10] = *(_QWORD *)(v28 + 880);
    v29 = *(_QWORD *)(*(_QWORD *)(v5 + 72) + 888LL);
    v6[11] = v29;
    v9 = (*(__int64 (__fastcall **)(__int64, PNDIS_SHARED_MEMORY_PARAMETERS, _QWORD *))(*(_QWORD *)(v5 + 72) + 872LL))(
           v29,
           SharedMemoryParameters,
           v6 + 12);
    if ( v9 < 0 )
      goto LABEL_19;
    if ( (SharedMemoryParameters->Flags & 1) != 0 && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))v6[10])(v6[11], v6[12]);
      goto LABEL_58;
    }
    memmove((void *)v6[21], SharedMemoryParameters->SGListBuffer, SharedMemoryParameters->SGListBufferLength);
    *((_DWORD *)v6 + 12) |= 4u;
  }
  else
  {
    if ( !v4[456] )
    {
      if ( v10 )
      {
        LOBYTE(v15) = 1;
        v16 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(*(_QWORD *)(*(_QWORD *)(v10 + 24)
                                                                                               + 8LL)
                                                                                   + 16LL))(
                        *(_QWORD *)(v10 + 24),
                        SharedMemoryParameters->Length,
                        v6 + 13,
                        v15);
        SharedMemoryParameters->VirtualAddress = v16;
        if ( !v16 )
        {
LABEL_58:
          v9 = -1073741670;
          goto LABEL_19;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 72));
        *((_DWORD *)v6 + 12) |= 1u;
      }
      else
      {
        ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(
                                         SharedMemoryParameters->Length,
                                         0LL,
                                         -1LL,
                                         0LL,
                                         4,
                                         PreferredNode);
        SharedMemoryParameters->VirtualAddress = ContiguousNodeMemory;
        if ( !ContiguousNodeMemory )
          goto LABEL_58;
        PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
        *((_DWORD *)v6 + 12) |= 2u;
        v6[13] = PhysicalAddress.QuadPart;
      }
      v9 = 0;
      goto LABEL_19;
    }
    v6[10] = v4[457];
    v30 = v4[458];
    v6[11] = v30;
    v9 = ((__int64 (__fastcall *)(__int64, PNDIS_SHARED_MEMORY_PARAMETERS, _QWORD *))v4[456])(
           v30,
           SharedMemoryParameters,
           v6 + 12);
    if ( v9 >= 0 )
    {
      if ( (SharedMemoryParameters->Flags & 1) != 0 && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))v4[457])(v6[11], v6[12]);
        goto LABEL_58;
      }
      memmove((void *)v6[21], SharedMemoryParameters->SGListBuffer, SharedMemoryParameters->SGListBufferLength);
      *((_DWORD *)v6 + 12) |= 8u;
    }
  }
LABEL_19:
  if ( v35 )
  {
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    KeSetIdealProcessorThread(KeGetCurrentThread(), Processor[2]);
  }
  if ( v9 < 0 )
    goto LABEL_40;
  v6[19] = SharedMemoryParameters->VirtualAddress;
  if ( (v6[6] & 3) != 0 )
  {
    if ( SharedMemoryParameters->SGListBufferLength >= 0x28 )
    {
      SharedMemoryParameters->SGListBuffer->NumberOfElements = 1;
      SharedMemoryParameters->SGListBuffer->Elements[0].Address.QuadPart = v6[13];
      SharedMemoryParameters->SGListBuffer->Elements[0].Length = SharedMemoryParameters->Length;
    }
    SharedMemoryParameters->SharedMemoryHandle = 0LL;
  }
  v17 = KeAcquireSpinLockRaiseToDpc(v4 + 12);
  v4[65] = KeGetCurrentThread();
  *((_DWORD *)v4 + 464) = 1836789;
  v18 = v4[454];
  *v6 = v18;
  v6[1] = v4 + 454;
  if ( *(_QWORD **)(v18 + 8) != v4 + 454 )
    __fastfail(3u);
  *(_QWORD *)(v18 + 8) = v6;
  v4[454] = v6;
  if ( v3 )
  {
    v33 = v3[107];
    v34 = v6 + 2;
    v6[2] = v33;
    v6[3] = v3 + 107;
    if ( *(_QWORD **)(v33 + 8) != v3 + 107 )
      __fastfail(3u);
    *(_QWORD *)(v33 + 8) = v34;
    v3[107] = v34;
  }
  v19 = *(_QWORD *)(v5 + 88);
  v20 = v6 + 4;
  v6[4] = v19;
  v6[5] = v5 + 88;
  if ( *(_QWORD *)(v19 + 8) != v5 + 88 )
    __fastfail(3u);
  *(_QWORD *)(v19 + 8) = v20;
  *(_QWORD *)(v5 + 88) = v20;
  v4[65] = 0LL;
  *((_DWORD *)v4 + 464) = 0;
  KeReleaseSpinLock(v4 + 12, v17);
  v21 = v37;
  *v37 = v6;
LABEL_30:
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_dq(22LL, &WPP_e661d27027f753e153c509da19b80f2a_Traceguids, (unsigned int)v9, *v21);
  return v9;
}
