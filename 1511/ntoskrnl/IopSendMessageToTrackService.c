/*
 * XREFs of IopSendMessageToTrackService @ 0x1405F8664
 * Callers:
 *     IopTrackLink @ 0x1404BC4A8 (IopTrackLink.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     LpcRequestWaitReplyPort @ 0x14050D090 (LpcRequestWaitReplyPort.c)
 */

NTSTATUS __fastcall IopSendMessageToTrackService(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v6; // r14d
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  size_t v15; // r8
  int v16; // eax
  _BYTE v17[40]; // [rsp+30h] [rbp-138h] BYREF
  int v18; // [rsp+58h] [rbp-110h]

  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  while ( 1 )
  {
    if ( !IopLinkTrackingServiceObject )
    {
      if ( !*(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
        return -1073741153;
      result = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL);
      if ( result == 192 || result == 257 )
        return result;
      if ( IopLinkTrackingServiceObject )
      {
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
      }
      else
      {
        IopLinkTrackingPacket.Parameter = &IopLinkTrackingPacket;
        IopLinkTrackingPacket.WorkerRoutine = (void (__fastcall *)(void *))IopConnectLinkTrackingPort;
        IopLinkTrackingPacket.List.Flink = 0LL;
        KeResetEvent(&stru_1402FB760);
        ExQueueWorkItem(&IopLinkTrackingPacket, DelayedWorkQueue);
        v9 = KeWaitForSingleObject(&stru_1402FB760, Executive, PreviousMode, 0, 0LL);
        v10 = v9;
        if ( v9 != 192 && v9 != 257 && dword_1402FB778 < 0 )
          v10 = dword_1402FB778;
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
        if ( v10 )
          return v10;
      }
    }
    v11 = ViVerifierDriverAddedThunkListHead
        ? ExAllocatePoolWithTagPriority(
            PagedPool,
            0xB8uLL,
            0x20206F49u,
            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
        : ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x20206F49u);
    v12 = v11;
    if ( !v11 )
      break;
    memset(v11 + 5, 0, 0x90uLL);
    v12[5] = 0LL;
    *((_OWORD *)v12 + 3) = *(_OWORD *)a1;
    *((_DWORD *)v12 + 16) = *(_DWORD *)(a1 + 16);
    *(_OWORD *)((char *)v12 + 68) = *a2;
    *(_OWORD *)((char *)v12 + 84) = a2[1];
    *(_OWORD *)((char *)v12 + 100) = a2[2];
    *(_OWORD *)((char *)v12 + 116) = a2[3];
    if ( *(_DWORD *)(a3 + 8) < 0x24u )
    {
      ExFreePoolWithTag(v12, 0);
      return -2147483643;
    }
    *((_DWORD *)v12 + 33) = *(_DWORD *)(a3 + 12);
    *(_OWORD *)(v12 + 17) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v12 + 19) = *(_OWORD *)(a3 + 32);
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 > 0x24 )
    {
      v14 = v13 - 36;
      v15 = 16LL;
      if ( v14 <= 0x10 )
        v15 = v14;
      memmove(v12 + 21, (const void *)(a3 + 48), v15);
    }
    *v12 = 12058768LL;
    v16 = LpcRequestWaitReplyPort((__int64)IopLinkTrackingServiceObject, (__int64)v12, (ULONG64)v17);
    v10 = v16;
    if ( v16 >= 0 )
      return v18;
    if ( v16 != -1073741769
      || (v10 = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL),
          ObfDereferenceObject(IopLinkTrackingServiceObject),
          IopLinkTrackingServiceObject = 0LL,
          KeSetEvent(&IopLinkTrackingPortObject, 0, 0),
          v6) )
    {
      if ( v10 >= 0 )
        return v18;
      return v10;
    }
    v6 = 1;
  }
  return -1073741670;
}
