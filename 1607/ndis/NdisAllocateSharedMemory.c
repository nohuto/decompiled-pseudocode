/*
 * XREFs of NdisAllocateSharedMemory @ 0x1C004B1E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003CE04 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     ndisGetAnyProcInsideNode @ 0x1C00D0B08 (ndisGetAnyProcInsideNode.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r14
  __int64 *v5; // r13
  _QWORD *v6; // rdi
  NDIS_STATUS v9; // ebx
  __int64 v10; // r15
  unsigned int v11; // eax
  _QWORD *PoolWithTag; // rax
  __int64 *ReceiveQueueByQueueId; // rax
  KIRQL v14; // r10
  PVOID *v15; // r9
  unsigned int PreferredNode; // ebx
  USHORT HighestNodeNumber; // ax
  __int64 v19; // r9
  int AnyProcInsideNode; // eax
  struct _KTHREAD *CurrentThread; // rcx
  UCHAR v22; // dl
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  void *v26; // rax
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  KIRQL v29; // r9
  _QWORD *v30; // rdx
  __int64 v31; // r8
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 **v35; // rcx
  __int64 v36; // rdx
  __int64 *v37; // rax
  char v38; // [rsp+30h] [rbp-50h]
  UCHAR Processor[4]; // [rsp+34h] [rbp-4Ch]
  PVOID *v40; // [rsp+38h] [rbp-48h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-40h] BYREF
  _PROCESSOR_NUMBER v42; // [rsp+48h] [rbp-38h] BYREF
  int v43; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v40 = pAllocationHandle;
  Affinity.Mask = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  *(_WORD *)&Processor[2] = 0;
  v5 = 0LL;
  v38 = 0;
  v6 = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  v9 = -1073741637;
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
  {
    WPP_SF_qD(
      0x15u,
      &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids,
      (__int64)NdisHandle,
      SharedMemoryParameters->Length);
    pAllocationHandle = v40;
  }
  if ( !NdisHandle )
    goto LABEL_19;
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
      goto LABEL_54;
    }
    v4 = NdisHandle;
  }
  *pAllocationHandle = 0LL;
  v10 = v4[63];
  v11 = SharedMemoryParameters->SGListBufferLength + 184;
  if ( v11 < 0xB8 )
  {
    v9 = -1073741811;
LABEL_19:
    v15 = v40;
    goto LABEL_20;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6264444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_19;
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
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId((__int64)v4, SharedMemoryParameters->QueueId);
    v4[65] = 0LL;
    *((_DWORD *)v4 + 464) = 0;
    v5 = ReceiveQueueByQueueId;
    KeReleaseSpinLock(v4 + 12, v14);
  }
  else
  {
    v5 = (__int64 *)v4[554];
  }
  if ( !v5 )
  {
    v9 = -1073741811;
LABEL_17:
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    goto LABEL_19;
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
      v42 = *(_PROCESSOR_NUMBER *)Processor;
      if ( *(unsigned __int16 *)(*(_QWORD *)&WPP_MAIN_CB.DeviceType + 20LL * KeGetProcessorIndexFromNumber(&v42) + 16) == PreferredNode )
      {
        CurrentThread = KeGetCurrentThread();
        v22 = Processor[2];
      }
      else
      {
        v38 = 1;
        AnyProcInsideNode = ndisGetAnyProcInsideNode((unsigned __int16)PreferredNode);
        Affinity.Mask = -1LL;
        v43 = AnyProcInsideNode;
        Affinity.Group = AnyProcInsideNode;
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        CurrentThread = KeGetCurrentThread();
        v22 = BYTE2(v43);
      }
      KeSetIdealProcessorThread(CurrentThread, v22);
    }
  }
  if ( SharedMemoryParameters->QueueId && !v3 && (v23 = v5[9]) != 0 && *(_QWORD *)(v23 + 872) )
  {
    v6[10] = *(_QWORD *)(v23 + 880);
    v24 = *(_QWORD *)(v5[9] + 888);
    v6[11] = v24;
    v9 = (*(__int64 (__fastcall **)(__int64, PNDIS_SHARED_MEMORY_PARAMETERS, _QWORD *))(v5[9] + 872))(
           v24,
           SharedMemoryParameters,
           v6 + 12);
    if ( v9 < 0 )
      goto LABEL_54;
    if ( (SharedMemoryParameters->Flags & 1) != 0 && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))v6[10])(v6[11], v6[12]);
LABEL_39:
      v9 = -1073741670;
      goto LABEL_54;
    }
    memmove((void *)v6[21], SharedMemoryParameters->SGListBuffer, SharedMemoryParameters->SGListBufferLength);
    *((_DWORD *)v6 + 12) |= 4u;
  }
  else if ( v4[456] )
  {
    v6[10] = v4[457];
    v25 = v4[458];
    v6[11] = v25;
    v9 = ((__int64 (__fastcall *)(__int64, PNDIS_SHARED_MEMORY_PARAMETERS, _QWORD *))v4[456])(
           v25,
           SharedMemoryParameters,
           v6 + 12);
    if ( v9 >= 0 )
    {
      if ( (SharedMemoryParameters->Flags & 1) != 0 && SharedMemoryParameters->SGListBuffer->NumberOfElements > 1 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))v4[457])(v6[11], v6[12]);
        goto LABEL_39;
      }
      memmove((void *)v6[21], SharedMemoryParameters->SGListBuffer, SharedMemoryParameters->SGListBufferLength);
      *((_DWORD *)v6 + 12) |= 8u;
    }
  }
  else
  {
    if ( v10 )
    {
      LOBYTE(v19) = 1;
      v26 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64))(*(_QWORD *)(*(_QWORD *)(v10 + 24)
                                                                                             + 8LL)
                                                                                 + 16LL))(
                      *(_QWORD *)(v10 + 24),
                      SharedMemoryParameters->Length,
                      v6 + 13,
                      v19);
      SharedMemoryParameters->VirtualAddress = v26;
      if ( !v26 )
        goto LABEL_39;
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
        goto LABEL_39;
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      *((_DWORD *)v6 + 12) |= 2u;
      v6[13] = PhysicalAddress.QuadPart;
    }
    v9 = 0;
  }
LABEL_54:
  if ( v38 )
  {
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    KeSetIdealProcessorThread(KeGetCurrentThread(), Processor[2]);
  }
  if ( v9 < 0 )
    goto LABEL_17;
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
  v29 = KeAcquireSpinLockRaiseToDpc(v4 + 12);
  v4[65] = KeGetCurrentThread();
  v30 = v4 + 454;
  *((_DWORD *)v4 + 464) = 1836789;
  v31 = v4[454];
  if ( *(_QWORD **)(v31 + 8) != v4 + 454 )
    __fastfail(3u);
  *v6 = v31;
  v6[1] = v30;
  *(_QWORD *)(v31 + 8) = v6;
  *v30 = v6;
  if ( v3 )
  {
    v32 = v3 + 107;
    v33 = v3[107];
    v34 = v6 + 2;
    if ( *(_QWORD **)(v33 + 8) != v3 + 107 )
      __fastfail(3u);
    *v34 = v33;
    v6[3] = v32;
    *(_QWORD *)(v33 + 8) = v34;
    *v32 = v34;
  }
  v35 = (__int64 **)(v5 + 11);
  v36 = v5[11];
  v37 = v6 + 4;
  if ( *(__int64 **)(v36 + 8) != v5 + 11 )
    __fastfail(3u);
  *v37 = v36;
  v6[5] = v35;
  *(_QWORD *)(v36 + 8) = v37;
  *v35 = v37;
  v4[65] = 0LL;
  *((_DWORD *)v4 + 464) = 0;
  KeReleaseSpinLock(v4 + 12, v29);
  v15 = v40;
  *v40 = v6;
LABEL_20:
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_dq(22LL, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, (unsigned int)v9, *v15);
  return v9;
}
