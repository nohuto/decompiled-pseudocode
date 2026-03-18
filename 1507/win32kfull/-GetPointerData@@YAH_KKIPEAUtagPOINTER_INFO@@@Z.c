/*
 * XREFs of ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F7E04
 * Callers:
 *     GetPointerInfoInternal @ 0x1C01E0D74 (GetPointerInfoInternal.c)
 * Callees:
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F8F08 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F1B4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

int __fastcall GetPointerData(__int64 a1, unsigned int a2, __int64 a3, struct tagPOINTER_INFO *a4)
{
  struct tagPOINTERINPUTFRAME *FrameById; // rdx
  struct tagPOINTER_INFO *v7; // r9
  __int64 v8; // r10
  unsigned int v9; // r11d

  if ( a1 && (FrameById = FindFrameById(*(_DWORD *)(a1 + 28))) != 0LL )
    return PointerInfoCopyOutHelper(
             (struct tagPOINTERINFONODE *)(*((_QWORD *)FrameById + 9) + 216LL * *(unsigned int *)(v8 + 32)),
             *((struct tagHID_POINTER_DEVICE_INFO **)FrameById + 11),
             a2,
             v9,
             v7);
  else
    return 0;
}
