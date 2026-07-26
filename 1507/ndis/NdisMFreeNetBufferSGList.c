/*
 * XREFs of NdisMFreeNetBufferSGList @ 0x1C000C940
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0011244 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C0045A78 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 */

void __stdcall NdisMFreeNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PSCATTER_GATHER_LIST pSGL,
        PNET_BUFFER NetBuffer)
{
  unsigned __int16 Reserved; // ax
  _SLIST_ENTRY *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  struct _MDL *v10; // rsi
  char *v11; // rdi
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSCATTER_GATHER_LIST, bool))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL)
                                                             + 96LL))(
    *((_QWORD *)NdisMiniportDmaHandle + 3),
    pSGL,
    (NetBuffer->Reserved & 4) != 0);
  Reserved = NetBuffer->Reserved;
  if ( (Reserved & 1) != 0 )
  {
    v6 = (_SLIST_ENTRY *)NetBuffer->NdisReserved[0];
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved = Reserved & 0xFFFE;
    v7 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v8 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v8 >= *(_DWORD *)v7 )
      v8 = (unsigned int)(*(_DWORD *)v7 - 1);
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8);
    if ( !*(_BYTE *)(v9 + 112) )
      PplpLazyInitializeLookasideList(v7, *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8));
    ++*(_DWORD *)(v9 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v9) < *(_WORD *)(v9 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, v6);
    }
    else
    {
      ++*(_DWORD *)(v9 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v9 + 56))(v6, v9);
    }
  }
  else if ( (Reserved & 2) != 0 )
  {
    v10 = (struct _MDL *)NetBuffer->NdisReserved[0];
    v11 = (char *)v10->StartVa + v10->ByteOffset;
    if ( (Reserved & 4) == 0 )
      RtlCopyBufferToMdl(
        &v11[48 * NetBuffer->CurrentMdlOffset],
        NetBuffer->CurrentMdl,
        NetBuffer->CurrentMdlOffset,
        NetBuffer->DataLength,
        &v12);
    NetBuffer->Reserved &= ~2u;
    NetBuffer->NdisReserved[0] = 0LL;
    IoFreeMdl(v10);
    ExFreePoolWithTag(v11, 0);
  }
  NetBuffer->Reserved &= ~4u;
}
