/*
 * XREFs of IopDestroyDeviceNode @ 0x1403F1B98
 * Callers:
 *     IopDeleteDevice @ 0x1403F1B3C (IopDeleteDevice.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140555018 (IopRemoveLegacyDeviceNode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopUncacheInterfaceInformation @ 0x140484758 (IopUncacheInterfaceInformation.c)
 *     PnpFreeDeviceInstancePath @ 0x14050D434 (PnpFreeDeviceInstancePath.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 */

void __fastcall IopDestroyDeviceNode(char *P)
{
  __int64 v1; // r8
  void *v3; // rcx
  void *v4; // rcx
  PVOID **v5; // rdi
  void *v6; // rcx
  unsigned __int16 *v7; // rdi
  __int64 v8; // rax
  PVOID *v9; // rsi
  PVOID **v10; // rax

  if ( P )
  {
    v1 = *((_QWORD *)P + 4);
    if ( (*(_DWORD *)(v1 + 48) & 0x1000) != 0 && *((_QWORD *)P + 2) )
    {
      v7 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((int)P, 720);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((int)v7, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v7 + 1), *v7);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), *((unsigned __int16 *)P + 28));
      }
      v8 = *((_QWORD *)P + 2);
      if ( v8 && *(_WORD *)(v8 + 56) )
      {
        IoAddTriageDumpDataBlock(v8 + 56, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*((_QWORD *)P + 2) + 64LL),
          *(unsigned __int16 *)(*((_QWORD *)P + 2) + 56LL));
      }
      KeBugCheckEx(0xCAu, 5uLL, *((_QWORD *)P + 4), 0LL, 0LL);
    }
    if ( (*((_DWORD *)P + 99) & 0x20000) != 0 )
    {
      IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, v1, 0, 0LL);
    }
    else
    {
      v3 = (void *)*((_QWORD *)P + 54);
      if ( v3 )
        ObfDereferenceObject(v3);
      if ( *((_WORD *)P + 28) )
        ExFreePoolWithTag(*((PVOID *)P + 8), 0);
      PnpFreeDeviceInstancePath(P);
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = (void *)*((_QWORD *)P + 55);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      KeReleaseGuardedMutex(&PiResourceListLock);
      IopUncacheInterfaceInformation(*((_QWORD *)P + 4), 0LL);
      v5 = (PVOID **)(P + 608);
      while ( *v5 != (PVOID *)v5 )
      {
        v9 = *v5;
        v10 = (PVOID **)**v5;
        if ( (*v5)[1] != v5 || v10[1] != v9 )
          __fastfail(3u);
        *v5 = (PVOID *)v10;
        v10[1] = (PVOID *)v5;
        ExFreePoolWithTag(v9[3], 0);
        ExFreePoolWithTag(v9, 0);
      }
      v6 = (void *)*((_QWORD *)P + 89);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x62655250u);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 312LL) + 40LL) = 0LL;
      ExFreePoolWithTag(P, 0);
      _InterlockedDecrement(&IopNumberDeviceNodes);
    }
  }
}
