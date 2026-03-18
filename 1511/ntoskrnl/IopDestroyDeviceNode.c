/*
 * XREFs of IopDestroyDeviceNode @ 0x140455E40
 * Callers:
 *     IopDeleteDevice @ 0x140455DE4 (IopDeleteDevice.c)
 *     IopFindLegacyDeviceNode @ 0x140604424 (IopFindLegacyDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x140604864 (IopRemoveLegacyDeviceNode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopUncacheInterfaceInformation @ 0x1404A0F04 (IopUncacheInterfaceInformation.c)
 *     PnpFreeDeviceInstancePath @ 0x1404C21BC (PnpFreeDeviceInstancePath.c)
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 */

void __fastcall IopDestroyDeviceNode(char *P)
{
  __int64 v1; // r8
  void *v3; // rcx
  void *v4; // rcx
  PVOID **v5; // rdi
  unsigned __int16 *v6; // rdi
  __int64 v7; // rax
  PVOID *v8; // rsi
  PVOID **v9; // rax

  if ( P )
  {
    v1 = *((_QWORD *)P + 4);
    if ( (*(_DWORD *)(v1 + 48) & 0x1000) != 0 && *((_QWORD *)P + 2) )
    {
      v6 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((int)P, 712);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((int)v6, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v6 + 1), *v6);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), *((unsigned __int16 *)P + 28));
      }
      v7 = *((_QWORD *)P + 2);
      if ( v7 && *(_WORD *)(v7 + 56) )
      {
        IoAddTriageDumpDataBlock(v7 + 56, 2);
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
        v8 = *v5;
        v9 = (PVOID **)**v5;
        if ( (*v5)[1] != v5 || v9[1] != v8 )
          __fastfail(3u);
        *v5 = (PVOID *)v9;
        v9[1] = (PVOID *)v5;
        ExFreePoolWithTag(v8[3], 0);
        ExFreePoolWithTag(v8, 0);
      }
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 312LL) + 40LL) = 0LL;
      ExFreePoolWithTag(P, 0);
      _InterlockedDecrement(&IopNumberDeviceNodes);
    }
  }
}
