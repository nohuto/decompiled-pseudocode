/*
 * XREFs of ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01E80CC
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     HoldRimCompleteFrame @ 0x1C01C1F74 (HoldRimCompleteFrame.c)
 *     ProcessTouchInputViaRim @ 0x1C01EDC08 (ProcessTouchInputViaRim.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall IsTouchpadDevice(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _BOOL8 result; // rax

  LOBYTE(a2) = 19;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  result = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 480);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 24) == 7 )
        return 1;
    }
  }
  return result;
}
