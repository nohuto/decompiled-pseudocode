/*
 * XREFs of ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022DF70
 * Callers:
 *     AbortDeviceActivity @ 0x1C01C71D0 (AbortDeviceActivity.c)
 *     EndAllActiveContacts @ 0x1C01C978C (EndAllActiveContacts.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CDE84 (xxxUpdateDeviceFrameState.c)
 *     ?StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z @ 0x1C0230400 (-StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C02308A4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C022F54C (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

void __fastcall AbandonHoldingFrame(struct tagPOINTERHOLDINGFRAME *a1)
{
  __int64 v2; // rcx

  EtwTraceEndPointerFrameCreation(
    0LL,
    *((unsigned int *)a1 + 9),
    (unsigned int)(*((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 9)));
  v2 = *((_QWORD *)a1 + 8);
  if ( v2 )
    Win32FreePool(v2);
  FreePointerRawDataList(*((struct tagPOINTERRAWDATA **)a1 + 6));
  ResetHoldingFrame(a1);
}
