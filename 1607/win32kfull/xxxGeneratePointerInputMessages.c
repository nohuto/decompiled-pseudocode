/*
 * XREFs of xxxGeneratePointerInputMessages @ 0x1C01F33DC
 * Callers:
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01EB030 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01EBC40 (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ProcessTouchInputViaRim @ 0x1C01EDC08 (ProcessTouchInputViaRim.c)
 * Callees:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01E80CC (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     ?Enabled@PalmRejection@@YAHXZ @ 0x1C0228F48 (-Enabled@PalmRejection@@YAHXZ.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0228FC8 (-ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall xxxGeneratePointerInputMessages(PointerFrameList *a1, void *a2, void *a3, unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 result; // rax
  const struct tagPOINTERINPUTFRAME *v8; // rbx
  _QWORD *v9; // rdx
  PalmRejection *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagPOINTERINPUTFRAME *v15; // rdx

  v5 = (unsigned int)a3;
  result = (__int64)PointerFrameList::CommitAndReferenceFrame(a1, a2, a3);
  v8 = (const struct tagPOINTERINPUTFRAME *)result;
  if ( result )
  {
    v9 = (_QWORD *)(result + 16);
    v10 = (PalmRejection *)(gptiCurrent + 1008LL);
    v11 = *(_QWORD *)(gptiCurrent + 1008LL);
    if ( *(_QWORD *)(v11 + 8) != gptiCurrent + 1008LL )
      __fastfail(3u);
    *v9 = v11;
    v9[1] = v10;
    *(_QWORD *)(v11 + 8) = v9;
    *(_QWORD *)v10 = v9;
    if ( !(unsigned int)PalmRejection::Enabled(v10)
      || IsTouchpadDevice((unsigned __int64)a1, v12, v13, v14)
      || (unsigned int)PalmRejection::ProcessInput(v8, v15) )
    {
      return xxxProcessEdgyAndGeneratePointerMessages((__int64)a1, v8, v5, a4);
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
