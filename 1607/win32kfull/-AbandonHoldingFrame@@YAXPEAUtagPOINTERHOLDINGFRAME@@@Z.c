/*
 * XREFs of ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01BF6D4
 * Callers:
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C1E24 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C01C0D20 (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

void __fastcall AbandonHoldingFrame(struct tagPOINTERHOLDINGFRAME *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  EtwTraceEndPointerFrameCreation(
    0LL,
    *((unsigned int *)a1 + 9),
    (unsigned int)(*((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 9)));
  v4 = *((_QWORD *)a1 + 8);
  if ( v4 )
    Win32FreePool(v4, v2, v3);
  FreePointerRawDataList(*((struct tagPOINTERRAWDATA **)a1 + 6));
  ResetHoldingFrame(a1);
}
