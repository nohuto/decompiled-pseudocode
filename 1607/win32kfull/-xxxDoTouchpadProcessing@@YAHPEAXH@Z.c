/*
 * XREFs of ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78
 * Callers:
 *     ProcessTouchInputViaRim @ 0x1C01EDC08 (ProcessTouchInputViaRim.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C06A4 (-CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C01C0A88 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0BBC (-FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01C0DD4 (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C0E14 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C16F8 (-ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E7E60 (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01E8A00 (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01E9B60 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB3C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 */

__int64 __fastcall xxxDoTouchpadProcessing(void *a1, unsigned int a2)
{
  unsigned int v2; // esi
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagPOINTERHOLDINGFRAME *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  struct tagPOINTERINPUTFRAME *TPFrame; // r13
  unsigned int *v14; // rdx
  __int64 v15; // r9
  struct tagPOINTERINPUTFRAME *EarliestTPFrame; // r14
  int v17; // eax
  __int64 v18; // rbp
  int v19; // esi
  int v20; // eax
  int v21; // eax
  bool v22; // zf
  int v23; // edx
  int v24; // ecx
  int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _LIST_ENTRY *v29; // r8
  struct tagPOINTERINPUTFRAME *NextFrame; // rsi
  __int64 v31; // rdx
  const struct tagPOINTERINPUTFRAME *v32; // rcx
  __int64 v33; // r8
  struct tagPOINTERHOLDINGFRAME *v34; // rax
  __int64 v35; // rcx
  int v36; // edx
  struct tagTPSTATE *v37; // rcx
  unsigned int *v38; // rdx
  _QWORD v39[11]; // [rsp+30h] [rbp-58h] BYREF
  char v41; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  HoldingFrameForDevice = FindHoldingFrameForDevice(a1);
  v8 = HoldingFrameForDevice;
  if ( !HoldingFrameForDevice )
    return 0LL;
  v9 = *((_QWORD *)HoldingFrameForDevice + 11);
  if ( !v9 )
    return 0LL;
  LOBYTE(v5) = 19;
  v10 = HMValidateHandleNoSecure(*((_QWORD *)HoldingFrameForDevice + 2), v5, v6, v7);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v10 + 480);
  if ( !v11 )
    return 0LL;
  TPFrame = CreateTPFrame(v8);
  if ( !TPFrame )
    return 1LL;
  ResetHoldingFrame(v8);
  EarliestTPFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v41, v14);
  if ( EarliestTPFrame )
  {
    do
    {
      if ( gbTapTimerFired )
      {
        *(_DWORD *)(v9 + 1920) &= ~0x10u;
        gbTapTimerFired = 0;
      }
      v17 = *(_DWORD *)(v9 + 1920);
      if ( (v17 & 1) == 0 )
      {
        v18 = *((_QWORD *)EarliestTPFrame + 11);
        v19 = (*(unsigned __int8 *)(v18 + 68) >> 4) & 1;
        if ( (v17 & 0x200) == 0 && v19 )
        {
          v20 = *(_DWORD *)(v11 + 1520) == 2 && !(unsigned int)TPAAPShouldAllowNow(8, 0, 0, 0LL)
             || *(_DWORD *)(v9 + 1640)
             || gidTapTimer && !a2;
          *(_DWORD *)(v9 + 1920) ^= (*(_DWORD *)(v9 + 1920) ^ (v20 << 9)) & 0x200;
        }
        v21 = *(_DWORD *)(v9 + 1920);
        if ( (v21 & 0x200) != 0 )
        {
          v22 = v19 == 0;
          v2 = a2;
          if ( v22 )
            *(_DWORD *)(v9 + 1920) = v21 & 0xFFFFFDFF;
          else
            *(_DWORD *)(v18 + 68) &= ~0x10u;
        }
        else
        {
          if ( v19 )
          {
            if ( guMouseUpPending )
              *(_DWORD *)(v9 + 1920) = v21 & 0xFFFFFFEF;
            xxxCancelMouseUpTimer(1);
            gbTapTimerFired = 0;
          }
          v2 = a2;
        }
      }
      v23 = *(_DWORD *)(v9 + 1920);
      if ( (v23 & 4) == 0 && (v23 & 8) == 0 )
      {
        v24 = *(_DWORD *)(*((_QWORD *)EarliestTPFrame + 11) + 68LL);
        if ( (((unsigned __int8)v24 >> 5) & 1) != 0 || (((unsigned __int8)v24 >> 6) & 1) != 0 )
        {
          if ( guMouseUpPending )
            *(_DWORD *)(v9 + 1920) = v23 & 0xFFFFFFEF;
          xxxCancelMouseUpTimer(1);
          gbTapTimerFired = 0;
        }
      }
      PushW32ThreadLock((__int64)TPFrame, v39, (__int64)CleanupTPFrameList, v15);
      v25 = xxxInternalTPProcessing(v2, v9, v11, EarliestTPFrame, a1);
      PopW32ThreadLock(v39, v26, v27, v28);
      if ( v25 == 3 || v25 == 6 )
      {
        xxxGeneratePointerInputMessages(a1);
        NextFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v41, v38);
      }
      else
      {
        NextFrame = PointerFrameList::GetNextFrame(
                      EarliestTPFrame,
                      (const struct tagPOINTERINPUTFRAME *)&gFrameTPListHead,
                      v29);
        FreeTPFrame(v32, v31, v33);
        v34 = FindHoldingFrameForDevice(a1);
        if ( v34 )
        {
          v35 = *((_QWORD *)v34 + 11);
          if ( v35 )
          {
            v36 = *(_DWORD *)(v35 + 1920);
            if ( (v36 & 0x200000) != 0
              && (v36 & 1) == 0
              && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)v35) )
            {
              zzzCancelInertiaState(v37, 0);
            }
          }
        }
      }
      EarliestTPFrame = NextFrame;
      v22 = NextFrame == 0LL;
      v2 = a2;
    }
    while ( !v22 );
  }
  return 1LL;
}
