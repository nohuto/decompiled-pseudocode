/*
 * XREFs of ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01FCD38
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01E1A60 (xxxRetrievePointerInputMessage.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01FAB0C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01FCB7C (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 */

__int64 __fastcall PointerList::SetPointerCapture(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax

  v5 = *(_QWORD *)(a1 + 40);
  if ( !v5 )
    return 0LL;
  if ( a5 )
    v10 = v5 + 56;
  else
    v10 = v5 + 32;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 != a2 )
  {
    if ( v11 )
      ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)v10);
    HMAssignmentLock(v10 + 8, a2);
  }
  *(_DWORD *)v10 = a3;
  result = 1LL;
  *(_DWORD *)(v10 + 16) = a4;
  return result;
}
