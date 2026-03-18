/*
 * XREFs of ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022E6D4
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01FBBC8 (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1C8C (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8A30 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022E89C (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022E9B4 (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C022EC90 (-CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022F904 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022FC38 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C022FE6C (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C0230354 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C023063C (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
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
  struct tagPOINTERINFONODE *v8; // rbp
  unsigned int i; // esi
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 j; // rsi
  const struct tagPOINTERINFONODE *v13; // rcx
  unsigned __int64 v14; // rdx
  struct tagPOINTERQFRAME *v15; // rax
  unsigned int v16; // ebx
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    result = CommitRimCompleteFrame(a2);
  }
  else if ( IsTouchpadDevice((unsigned __int64)this) )
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
    _InterlockedIncrement((volatile signed __int32 *)result + 5);
    v6 = ReferencePreviousFrameByDeviceInt(result);
    *((_DWORD *)v5 + 14) |= 1u;
    v7 = v6;
    PushW32ThreadLock((__int64)v5, v18, (__int64)DereferencePointerInputFrame);
    if ( v7 )
      PushW32ThreadLock((__int64)v7, v17, (__int64)DereferencePointerInputFrame);
    v8 = (struct tagPOINTERINFONODE *)*((_QWORD *)v5 + 9);
    for ( i = 0; i < *((_DWORD *)v5 + 6); v8 = (struct tagPOINTERINFONODE *)((char *)v8 + 216) )
    {
      if ( !PopulatePointerInfoNode(v5, v8) )
      {
        v10 = *((_QWORD *)v5 + 9) + 216LL * i;
        *(_DWORD *)v10 |= 0x1000u;
        *(_QWORD *)(v10 + 16) = 0LL;
        ++*((_DWORD *)v5 + 7);
      }
      ++i;
    }
    if ( v7 )
      PopW32ThreadLock(v17);
    PopW32ThreadLock(v18);
    *((_DWORD *)v5 + 14) &= ~1u;
    v11 = 0;
    for ( j = *((_QWORD *)v5 + 9); v11 < *((_DWORD *)v5 + 6); j += 216LL )
    {
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)j) )
      {
        if ( IsManipulationThreadNode(v13) )
          v14 = -1LL;
        else
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(LODWORD(gSharedInfo[2])
                                                  * (unsigned int)(unsigned __int16)*(_DWORD *)(j + 80)
                                                  + gSharedInfo[1])
                                      + 16LL)
                          + 392LL);
        v15 = SetupQFrame(v5, v14, v7 != 0LL);
        *(_DWORD *)(j + 8) = *(_DWORD *)v15;
        ++*((_DWORD *)v15 + 4);
        ProcessQFrameNode(v15, v7, (struct tagPOINTERINFONODE *)j);
      }
      ++v11;
    }
    TryCoalesceQFrame(v5, v7, 0LL);
    EtwTraceEndPointerFrameCommit(*((unsigned int *)v5 + 4), *((unsigned int *)v5 + 6));
    EtwTraceEndPointerFrameCreation(*((unsigned int *)v5 + 4), *((unsigned int *)v5 + 6), 0LL);
    if ( v7 )
      UnreferenceFrameInt(v7);
    v16 = *((_DWORD *)v5 + 4);
    UnreferenceFrameInt(v5);
    return FindAndReferenceFrameById(v16);
  }
  return result;
}
