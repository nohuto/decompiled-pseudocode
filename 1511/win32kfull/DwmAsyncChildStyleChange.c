/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C0080178
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0072348 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C0072DE0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C008001C (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[16]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset((char *)v10 + 2, 0, 0x3AuLL);
    v10[0] = 3932180;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741846;
    *(_QWORD *)&v10[11] = a2;
    v10[13] = a3;
    v10[14] = a4;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
