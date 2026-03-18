/*
 * XREFs of IopDestroyDeviceNode @ 0x140534C48
 * Callers:
 *     IopDeleteDevice @ 0x140534BEC (IopDeleteDevice.c)
 *     IopFindLegacyDeviceNode @ 0x14067F04C (IopFindLegacyDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x14067F5C8 (IopRemoveLegacyDeviceNode.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopUncacheInterfaceInformation @ 0x14045E660 (IopUncacheInterfaceInformation.c)
 *     PnpFreeDeviceInstancePath @ 0x140534F5C (PnpFreeDeviceInstancePath.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 */

void __fastcall IopDestroyDeviceNode(char *P)
{
  __int64 v1; // r8
  void *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // si
  void *v8; // rcx
  unsigned __int8 v9; // di
  signed __int32 v10; // eax
  PVOID **v11; // rdi
  unsigned __int16 *v12; // rdi
  __int64 v13; // rax
  PVOID *v14; // rsi
  PVOID **v15; // rax

  if ( P )
  {
    v1 = *((_QWORD *)P + 4);
    if ( (*(_DWORD *)(v1 + 48) & 0x1000) != 0 && *((_QWORD *)P + 2) )
    {
      v12 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((int)P, 712);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((int)v12, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), *v12);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), *((unsigned __int16 *)P + 28));
      }
      v13 = *((_QWORD *)P + 2);
      if ( v13 && *(_WORD *)(v13 + 56) )
      {
        IoAddTriageDumpDataBlock(v13 + 56, 2);
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
      v5 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v4);
      v6 = v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v5);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      qword_14034AA48 = (__int64)KeGetCurrentThread();
      dword_14034AA70 = CurrentIrql;
      v8 = (void *)*((_QWORD *)P + 55);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      v9 = dword_14034AA70;
      qword_14034AA48 = 0LL;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
      if ( v10 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v10);
      __writecr8(v9);
      KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
      IopUncacheInterfaceInformation(*((_QWORD *)P + 4), 0);
      v11 = (PVOID **)(P + 608);
      while ( *v11 != (PVOID *)v11 )
      {
        v14 = *v11;
        v15 = (PVOID **)**v11;
        if ( (*v11)[1] != v11 || v15[1] != v14 )
          __fastfail(3u);
        *v11 = (PVOID *)v15;
        v15[1] = (PVOID *)v11;
        ExFreePoolWithTag(v14[3], 0);
        ExFreePoolWithTag(v14, 0);
      }
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 312LL) + 40LL) = 0LL;
      ExFreePoolWithTag(P, 0);
      _InterlockedDecrement(&IopNumberDeviceNodes);
    }
  }
}
