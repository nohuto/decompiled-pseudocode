/*
 * XREFs of ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1E44
 * Callers:
 *     xxxProcessPointerEvent @ 0x1C01E192C (xxxProcessPointerEvent.c)
 *     ProcessTouchInputViaRim @ 0x1C01F6A24 (ProcessTouchInputViaRim.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F72C (-FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C0230E2C (HoldRimCompleteFrame.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall IsTouchpadDevice(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = HMValidateHandleNoSecure(a1, 19);
  result = 0;
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 416);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 24) == 8 )
        return 1;
    }
  }
  return result;
}
