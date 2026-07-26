/*
 * XREFs of NdisCompleteDmaTransfer @ 0x1C005EDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCompleteDmaTransfer(
        PNDIS_STATUS Status,
        NDIS_HANDLE NdisDmaHandle,
        PNDIS_BUFFER Buffer,
        ULONG Offset,
        ULONG Length,
        BOOLEAN WriteToDevice)
{
  *Status = (*(unsigned __int8 (__fastcall **)(_QWORD, PNDIS_BUFFER, _QWORD, char *, ULONG, BOOLEAN))(*(_QWORD *)(*((_QWORD *)NdisDmaHandle + 4) + 8LL) + 40LL))(
              *((_QWORD *)NdisDmaHandle + 4),
              Buffer,
              *(_QWORD *)NdisDmaHandle,
              (char *)Buffer->StartVa + Buffer->ByteOffset + Offset,
              Length,
              WriteToDevice) == 0
          ? 0xC000009A
          : 0;
  *((_BYTE *)NdisDmaHandle + 48) = 0;
}
