/*
 * XREFs of NdisMCompleteBufferPhysicalMapping @ 0x1C00551B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCompleteBufferPhysicalMapping(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_BUFFER Buffer,
        ULONG PhysicalMapRegister)
{
  __int64 v3; // rax
  __int64 v4; // r10
  char v5; // [rsp+28h] [rbp-20h]

  v3 = *((_QWORD *)MiniportAdapterHandle + 63);
  v4 = *(_QWORD *)(v3 + 136);
  v5 = *(_BYTE *)(v4 + 16LL * PhysicalMapRegister + 8);
  (*(void (__fastcall **)(_QWORD, PNDIS_BUFFER, _QWORD, char *, ULONG, char))(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL)
                                                                            + 40LL))(
    *(_QWORD *)(v3 + 24),
    Buffer,
    *(_QWORD *)(v4 + 16LL * PhysicalMapRegister),
    (char *)Buffer->StartVa + Buffer->ByteOffset,
    Buffer->ByteCount,
    v5);
}
