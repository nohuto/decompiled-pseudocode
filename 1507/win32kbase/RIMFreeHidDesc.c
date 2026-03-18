/*
 * XREFs of RIMFreeHidDesc @ 0x1C0075858
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00755F8 (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0077EB8 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall RIMFreeHidDesc(__int64 a1)
{
  int v2; // edx

  v2 = *(unsigned __int16 *)(a1 + 42);
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_qDD(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    4,
    28,
    (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
    a1,
    *(_WORD *)(a1 + 42),
    *(_WORD *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 24) )
    Win32FreePool();
  if ( *(_QWORD *)(a1 + 16) )
    Win32FreePool();
  if ( *(_QWORD *)(a1 + 32) )
    Win32FreePool();
  return Win32FreePool();
}
