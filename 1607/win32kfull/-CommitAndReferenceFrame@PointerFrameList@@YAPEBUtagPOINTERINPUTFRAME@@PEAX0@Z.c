/*
 * XREFs of ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01BFFF8 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01C011C (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C01C0400 (-CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C109C (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C13C0 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C16E0 (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C01C1B64 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01C1BBC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01E80CC (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

const struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::CommitAndReferenceFrame(
        PointerFrameList *this,
        void *a2,
        void *a3)
{
  const struct tagPOINTERINPUTFRAME *result; // rax
  const struct tagPOINTERINPUTFRAME *v5; // rdi
  struct tagPOINTERINPUTFRAME *v6; // rax
  const struct tagPOINTERINPUTFRAME *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagPOINTERINFONODE *v12; // rbp
  unsigned int i; // esi
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 j; // rsi
  const struct tagPOINTERINFONODE *v17; // rcx
  unsigned __int64 v18; // rdx
  struct tagPOINTERQFRAME *v19; // rax
  unsigned int v20; // ebx
  _QWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    result = CommitRimCompleteFrame(a2);
  }
  else if ( (unsigned int)IsTouchpadDevice(this) )
  {
    result = CommitTPInputFrame();
  }
  else
  {
    result = CommitHoldingFrame(this);
  }
  v5 = result;
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)result + 9);
    v6 = ReferencePreviousFrameByDeviceInt(result);
    *((_DWORD *)v5 + 18) |= 1u;
    v7 = v6;
    PushW32ThreadLock((__int64)v5, v22, (__int64)DereferencePointerInputFrameAndMessageData, v8);
    if ( v7 )
      PushW32ThreadLock((__int64)v7, v21, (__int64)DereferencePointerInputFrame, v11);
    v12 = (struct tagPOINTERINFONODE *)*((_QWORD *)v5 + 11);
    for ( i = 0; i < *((_DWORD *)v5 + 10); v12 = (struct tagPOINTERINFONODE *)((char *)v12 + 216) )
    {
      if ( !PopulatePointerInfoNode(v5, v12) )
      {
        v14 = *((_QWORD *)v5 + 11) + 216LL * i;
        *(_DWORD *)v14 |= 0x2000u;
        *(_QWORD *)(v14 + 16) = 0LL;
        ++*((_DWORD *)v5 + 11);
      }
      ++i;
    }
    if ( v7 )
      PopW32ThreadLock(v21, v9, v10, v11);
    PopW32ThreadLock(v22, v9, v10, v11);
    *((_DWORD *)v5 + 18) &= ~1u;
    v15 = 0;
    for ( j = *((_QWORD *)v5 + 11); v15 < *((_DWORD *)v5 + 10); j += 216LL )
    {
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)j) )
      {
        if ( (unsigned int)IsManipulationThreadNode(v17) )
          v18 = -1LL;
        else
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(LODWORD(gSharedInfo[2])
                                                  * (unsigned int)(unsigned __int16)*(_DWORD *)(j + 80)
                                                  + gSharedInfo[1])
                                      + 16LL)
                          + 384LL);
        v19 = SetupQFrame(v5, v18, v7 != 0LL);
        *(_DWORD *)(j + 8) = *(_DWORD *)v19;
        ++*((_DWORD *)v19 + 4);
        ProcessQFrameNode(v19, v7, (struct tagPOINTERINFONODE *)j);
      }
      ++v15;
    }
    TryCoalesceQFrame(v5, v7, 0LL);
    EtwTraceEndPointerFrameCommit(*((unsigned int *)v5 + 8), *((unsigned int *)v5 + 10));
    EtwTraceEndPointerFrameCreation(*((unsigned int *)v5 + 8), *((unsigned int *)v5 + 10), 0LL);
    if ( v7 )
      UnreferenceFrameInt(v7);
    v20 = *((_DWORD *)v5 + 8);
    UnreferenceFrameInt(v5);
    return FindAndReferenceFrameById(v20);
  }
  return result;
}
