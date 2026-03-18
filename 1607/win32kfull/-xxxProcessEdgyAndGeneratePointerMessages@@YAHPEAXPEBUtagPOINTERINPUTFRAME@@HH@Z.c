/*
 * XREFs of ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C0228E54 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C0E14 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C1504 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C16E0 (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01D2BA0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01E80CC (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F0C54 (-RemoveUndispatchedFrameFromThreadFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z @ 0x1C021F7CC (-ProcessInput@Edgy@@YAHPEAUtagPOINTERINPUTFRAME@@PEAPEBU2@@Z.c)
 */

__int64 __fastcall xxxProcessEdgyAndGeneratePointerMessages(
        __int64 a1,
        const struct tagPOINTERINPUTFRAME *a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v5; // ebp
  int v6; // r9d
  const struct tagPOINTERINPUTFRAME *v7; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  const struct tagPOINTERINPUTFRAME **v13; // r8
  PointerFrameList *v15; // rdi
  _DWORD *v16; // rcx
  struct tagPOINTERINPUTFRAME *v17; // rax
  struct tagPOINTERINPUTFRAME *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _LIST_ENTRY *v21; // r8
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  __int64 v23; // rdx
  struct tagPOINTERINPUTFRAME *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int PointerInputMessagesCore; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  PointerFrameList *v30; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  v6 = 0;
  v7 = a2;
  if ( (_DWORD)a3 )
  {
    LOBYTE(a2) = 19;
    v9 = HMValidateHandle(a1, (__int64)a2, a3, 0LL);
    if ( v9 )
      v6 = *(_DWORD *)(*(_QWORD *)(v9 + 480) + 864LL);
    else
      v6 = 1;
  }
  ContactVisualization(*((_DWORD *)v7 + 10), *((const struct tagPOINTERINFONODE **)v7 + 11), v5, v6);
  v12 = *(_QWORD *)(grpdeskRitInput + 232LL);
  if ( !v12 )
    goto LABEL_25;
  if ( *(_DWORD *)(v12 + 16) == 1 )
  {
    if ( *(_QWORD *)(v12 + 288) != gptiCurrent )
      goto LABEL_25;
  }
  else if ( !*(_DWORD *)v12 )
  {
    goto LABEL_25;
  }
  if ( !IsTouchpadDevice(a1, v12, v10, v11) )
  {
    v30 = 0LL;
    if ( !(unsigned int)Edgy::ProcessInput(v7, (struct tagPOINTERINPUTFRAME *)&v30, v13) )
      return 1LL;
    v15 = v30;
    if ( v30 )
    {
      if ( *((_DWORD *)v30 + 10) == 1 && (*((_DWORD *)v30 + 18) & 0x10) != 0 )
      {
        v16 = (_DWORD *)*((_QWORD *)v30 + 11);
        if ( (*v16 & 0x400) != 0 && (*v16 & 0x1000) == 0 && (v16[17] & 1) == 0 )
        {
          v17 = ReferencePreviousFrameByDeviceInt((struct _LIST_ENTRY **)v30);
          v18 = v17;
          if ( v17 )
          {
            ProcessWindowEnterLeave(v17, *((struct tagPOINTERINFONODE **)v15 + 11));
            UnreferenceFrameInt(v18, v19, v20);
          }
        }
      }
      do
      {
        if ( v15 == v7 )
          break;
        RemoveUndispatchedFrameFromThreadFrameList(v15);
        xxxGeneratePointerInputMessagesCore(v5, a4, 0, v15);
        NextFrame = PointerFrameList::GetNextFrame(v15, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v21);
        UnreferenceFrameInt(v24, v23, v25);
        v15 = NextFrame;
      }
      while ( NextFrame );
    }
    v26 = *(_QWORD *)(grpdeskRitInput + 232LL);
    if ( v26 )
      *(_QWORD *)(v26 + 232) = 0LL;
  }
LABEL_25:
  RemoveUndispatchedFrameFromThreadFrameList(v7);
  PointerInputMessagesCore = xxxGeneratePointerInputMessagesCore(v5, a4, 0, v7);
  UnreferenceFrameInt(v7, v28, v29);
  return PointerInputMessagesCore;
}
