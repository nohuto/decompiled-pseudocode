/*
 * XREFs of ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01FC6DC
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01FC234 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 *     ?GetPointerCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREINFO@@PEAH@Z @ 0x1C01FC47C (-GetPointerCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREINFO@@PEAH@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01FC898 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReleasePointerCaptureInt(struct tagPOINTERCAPTUREINFO *a1)
{
  if ( *(_DWORD *)a1 )
  {
    HMAssignmentUnlock((char *)a1 + 8);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 4) = 0;
  }
}
