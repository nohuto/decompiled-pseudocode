/*
 * XREFs of xxxGeneratePointerInputMessages @ 0x1C01FC05C
 * Callers:
 *     xxxProcessPointerEvent @ 0x1C01E192C (xxxProcessPointerEvent.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01F4690 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ProcessTouchInputViaRim @ 0x1C01F6A24 (ProcessTouchInputViaRim.c)
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1E44 (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z @ 0x1C02296B0 (-ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C022FA8C (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C02301AC (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C023029C (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall xxxGeneratePointerInputMessages(PointerFrameList *a1, void *a2, void *a3, unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 result; // rax
  __int64 v8; // rsi
  int v9; // r9d
  __int64 v10; // rax
  _DWORD *v11; // rax
  const struct tagPOINTERINPUTFRAME **v12; // r8
  PointerFrameList *v13; // rdi
  _DWORD *v14; // rcx
  const struct tagPOINTERINPUTFRAME *v15; // rax
  struct tagPOINTERINPUTFRAME *v16; // rbx
  struct _LIST_ENTRY *v17; // r8
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  struct tagPOINTERINPUTFRAME *v19; // rcx
  unsigned int PointerInputMessagesCore; // ebx
  PointerFrameList *v21; // [rsp+20h] [rbp-18h] BYREF

  v5 = (unsigned int)a3;
  result = (__int64)PointerFrameList::CommitAndReferenceFrame(a1, a2, a3);
  v8 = result;
  if ( result )
  {
    v9 = 0;
    if ( v5 )
    {
      v10 = HMValidateHandle((__int64)a1, 19);
      if ( v10 )
        v9 = *(_DWORD *)(*(_QWORD *)(v10 + 416) + 896LL);
      else
        v9 = 1;
    }
    ContactVisualization(*(_DWORD *)(v8 + 24), *(const struct tagPOINTERINFONODE **)(v8 + 72), v5, v9);
    v11 = *(_DWORD **)(grpdeskRitInput + 232LL);
    if ( v11 && (v11[4] == 1 || *v11) && !IsTouchpadDevice((unsigned __int64)a1) )
    {
      v21 = 0LL;
      if ( !(unsigned int)Edgy::ProcessInput((Edgy *)v8, (struct tagPOINTERINPUTFRAME *)&v21, v12) )
      {
        *(_DWORD *)(v8 + 56) |= 0x40u;
        return 1LL;
      }
      v13 = v21;
      if ( v21 )
      {
        if ( *((_DWORD *)v21 + 6) == 1 && (*((_DWORD *)v21 + 14) & 0x10) != 0 )
        {
          v14 = (_DWORD *)*((_QWORD *)v21 + 9);
          if ( (*v14 & 0x400) != 0 && (v14[17] & 1) == 0 )
          {
            v15 = ReferencePreviousFrameByDeviceInt(v21);
            v16 = v15;
            if ( v15 )
            {
              ProcessWindowEnterLeave(v15, *((struct tagPOINTERINFONODE **)v13 + 9));
              UnreferenceFrameInt(v16);
            }
          }
        }
        do
        {
          if ( v13 == (PointerFrameList *)v8 )
            break;
          xxxGeneratePointerInputMessagesCore(v5, a4, 0, v13);
          *(_DWORD *)(v8 + 56) &= ~0x40u;
          NextFrame = PointerFrameList::GetNextFrame(v13, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v17);
          UnreferenceFrameInt(v19);
          v13 = NextFrame;
        }
        while ( NextFrame );
      }
    }
    PointerInputMessagesCore = xxxGeneratePointerInputMessagesCore(v5, a4, 0, (const struct tagPOINTERINPUTFRAME *)v8);
    UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v8);
    return PointerInputMessagesCore;
  }
  return result;
}
