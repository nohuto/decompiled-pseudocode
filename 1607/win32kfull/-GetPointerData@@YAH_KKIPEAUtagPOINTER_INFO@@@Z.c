/*
 * XREFs of ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01EF4A0
 * Callers:
 *     GetPointerInfoInternal @ 0x1C01D76DC (GetPointerInfoInternal.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A54 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F05C0 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 */

int __fastcall GetPointerData(__int64 a1, unsigned int a2, __int64 a3, struct tagPOINTER_INFO *a4)
{
  struct _LIST_ENTRY *FrameById; // rdx
  struct tagPOINTER_INFO *v7; // r9
  __int64 v8; // r10
  unsigned int v9; // r11d

  if ( a1 && (FrameById = FindFrameById(*(_DWORD *)(a1 + 28))) != 0LL )
    return PointerInfoCopyOutHelper(
             (struct tagPOINTERINFONODE *)((char *)FrameById[5].Blink + 216 * *(unsigned int *)(v8 + 32)),
             (struct tagHID_POINTER_DEVICE_INFO *)FrameById[6].Blink,
             a2,
             v9,
             v7);
  else
    return 0;
}
