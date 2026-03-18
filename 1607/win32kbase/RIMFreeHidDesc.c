/*
 * XREFs of RIMFreeHidDesc @ 0x1C000A6BC
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C000560C (RIMAllocateHidConfigDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000A37C (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C000A5E0 (WPP_RECORDER_SF_qDD.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreeHidDesc(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]

  v7 = *(unsigned __int16 *)(a1 + 40);
  v6 = *(unsigned __int16 *)(a1 + 42);
  WPP_RECORDER_SF_qDD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Cu,
    (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
    a1,
    v6,
    v7);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    Win32FreePool(v4);
  return Win32FreePool(a1);
}
