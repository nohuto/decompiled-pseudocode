/*
 * XREFs of ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44
 * Callers:
 *     xxxProcessPointerEvent @ 0x1C01E131C (xxxProcessPointerEvent.c)
 *     ProcessTouchInputViaRim @ 0x1C01F6554 (ProcessTouchInputViaRim.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?CheckTouchpadCachedInertia@@YAXPEAX@Z @ 0x1C01F10D4 (-CheckTouchpadCachedInertia@@YAXPEAX@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F2258 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F23EC (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F31E0 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FBBC8 (xxxGeneratePointerInputMessages.c)
 *     ?CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022EF04 (-CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F1E8 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F3E8 (-FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C022F600 (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C022F640 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022FE84 (-ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 */

__int64 __fastcall xxxDoTouchpadProcessing(void *a1, unsigned int a2)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  struct tagPOINTERHOLDINGFRAME *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rdx
  struct tagPOINTERINPUTFRAME *TPFrame; // r12
  unsigned int *v13; // rdx
  struct tagPOINTERINPUTFRAME *EarliestTPFrame; // rbp
  int v15; // eax
  __int64 v16; // rsi
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  struct _LIST_ENTRY *v23; // r8
  struct tagPOINTERINPUTFRAME *NextFrame; // rdi
  const struct tagPOINTERINPUTFRAME *v25; // rcx
  unsigned int *v26; // rdx
  _QWORD v27[4]; // [rsp+30h] [rbp-48h] BYREF
  char v28; // [rsp+90h] [rbp+18h] BYREF

  HoldingFrameForDevice = FindHoldingFrameForDevice(a1);
  v5 = HoldingFrameForDevice;
  if ( !HoldingFrameForDevice )
    return 0LL;
  v6 = *((_QWORD *)HoldingFrameForDevice + 11);
  if ( !v6 )
    return 0LL;
  v7 = HMValidateHandleNoSecure(*((_QWORD *)HoldingFrameForDevice + 2), 19);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 416);
  if ( !v8 )
    return 0LL;
  if ( SDWORD2(gTouchPadParameters) > 0 )
  {
    v9 = *(_QWORD *)(v6 + 1176);
    v10 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    *(_QWORD *)(v6 + 1176) = v10;
    if ( v10 - v9 >= (unsigned __int64)dword_1C0322DB4[SDWORD2(gTouchPadParameters)] )
      TPAAPSetCurtainState((struct tagTPSTATE *)v6, 1u);
  }
  TPFrame = CreateTPFrame(v5);
  if ( TPFrame )
  {
    ResetHoldingFrame(v5);
    EarliestTPFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v28, v13);
    if ( EarliestTPFrame )
    {
      do
      {
        if ( gbTapTimerFired )
        {
          *(_DWORD *)(v6 + 1264) &= ~0x10u;
          gbTapTimerFired = 0;
        }
        v15 = *(_DWORD *)(v6 + 1264);
        if ( (v15 & 1) == 0 )
        {
          v16 = *((_QWORD *)EarliestTPFrame + 9);
          v17 = (*(unsigned __int8 *)(v16 + 68) >> 4) & 1;
          if ( (v15 & 0x200) == 0 && v17 )
          {
            v18 = *(_DWORD *)(v8 + 1544) == 2 && !(unsigned int)TPAAPShouldAllowNow(8, 0, 0, 0LL)
               || *(_DWORD *)(v6 + 1064)
               || gidTapTimer && !a2;
            *(_DWORD *)(v6 + 1264) ^= (*(_DWORD *)(v6 + 1264) ^ (v18 << 9)) & 0x200;
          }
          v19 = *(_DWORD *)(v6 + 1264);
          if ( (v19 & 0x200) != 0 )
          {
            if ( v17 )
              *(_DWORD *)(v16 + 68) &= ~0x10u;
            else
              *(_DWORD *)(v6 + 1264) = v19 & 0xFFFFFDFF;
          }
          else if ( v17 )
          {
            if ( guMouseUpPending )
              *(_DWORD *)(v6 + 1264) = v19 & 0xFFFFFFEF;
            xxxCancelMouseUpTimer(1);
            gbTapTimerFired = 0;
          }
        }
        v20 = *(_DWORD *)(v6 + 1264);
        if ( (v20 & 4) == 0 && (v20 & 8) == 0 )
        {
          v21 = *(_DWORD *)(*((_QWORD *)EarliestTPFrame + 9) + 68LL);
          if ( (((unsigned __int8)v21 >> 5) & 1) != 0 || (((unsigned __int8)v21 >> 6) & 1) != 0 )
          {
            if ( guMouseUpPending )
              *(_DWORD *)(v6 + 1264) = v20 & 0xFFFFFFEF;
            xxxCancelMouseUpTimer(1);
            gbTapTimerFired = 0;
          }
        }
        PushW32ThreadLock((__int64)TPFrame, v27, (__int64)CleanupTPFrameList);
        v22 = xxxInternalTPProcessing(a2, v6, v8, EarliestTPFrame, a1);
        PopW32ThreadLock(v27);
        if ( v22 == 3 || v22 == 6 )
        {
          xxxGeneratePointerInputMessages(a1);
          NextFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v28, v26);
        }
        else
        {
          NextFrame = PointerFrameList::GetNextFrame(
                        EarliestTPFrame,
                        (const struct tagPOINTERINPUTFRAME *)&gFrameTPListHead,
                        v23);
          FreeTPFrame(v25);
          CheckTouchpadCachedInertia(a1);
        }
        EarliestTPFrame = NextFrame;
      }
      while ( NextFrame );
    }
  }
  return 1LL;
}
