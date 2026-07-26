/*
 * XREFs of NdisMResetComplete @ 0x1C0023AC0
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 * Callees:
 *     ndisMResetCompleteStage2 @ 0x1C0023B9C (ndisMResetCompleteStage2.c)
 *     ndisMResetCompleteStage1 @ 0x1C0023CBC (ndisMResetCompleteStage1.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 */

void __stdcall NdisMResetComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status, BOOLEAN AddressingReset)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // r8
  KIRQL v7; // r14
  bool v8; // zf
  int v9; // eax
  BOOLEAN v10; // dl

  v4 = Status;
  if ( (unsigned __int8)byte_1C00895D8 >= 4u )
    WPP_SF_q(73LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle);
  if ( *((_QWORD *)MiniportAdapterHandle + 564) )
    ndisClearBusy(MiniportAdapterHandle, 1LL, 36LL);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v8 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x200000) == 0;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 726441;
  if ( v8 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 489),
      "Completing reset when one is not pending");
    KeBugCheckEx(0x7Cu, 0xFuLL, (ULONG_PTR)MiniportAdapterHandle, v4, AddressingReset);
  }
  LOBYTE(v6) = AddressingReset;
  v9 = ndisMResetCompleteStage1(MiniportAdapterHandle, (unsigned int)v4, v6);
  v10 = AddressingReset;
  if ( v9 )
    v10 = 0;
  if ( !v10 || (_DWORD)v4 )
    ndisMResetCompleteStage2(MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v7);
  if ( (unsigned __int8)byte_1C00895D8 >= 4u )
    WPP_SF_q(74LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportAdapterHandle);
}
