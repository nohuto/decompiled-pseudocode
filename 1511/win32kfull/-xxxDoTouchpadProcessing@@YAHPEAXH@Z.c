/*
 * XREFs of ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58
 * Callers:
 *     xxxProcessPointerEvent @ 0x1C01E192C (xxxProcessPointerEvent.c)
 *     ProcessTouchInputViaRim @ 0x1C01F6A24 (ProcessTouchInputViaRim.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     ?CheckTouchpadCachedInertia@@YAXPEAX@Z @ 0x1C01F1034 (-CheckTouchpadCachedInertia@@YAXPEAX@Z.c)
 *     ?TPAAPGetLevel@@YA?AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z @ 0x1C01F2418 (-TPAAPGetLevel@@YA-AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F25A4 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?xxxCancelMouseUpTimer@@YAXH@Z @ 0x1C01F3510 (-xxxCancelMouseUpTimer@@YAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     ?CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022F350 (-CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F968 (-FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C022FA4C (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C022FA8C (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C02302B4 (-ResetHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 */

__int64 __fastcall xxxDoTouchpadProcessing(void *a1, unsigned int a2)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  struct tagPOINTERHOLDINGFRAME *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // eax
  int v10; // r8d
  unsigned __int64 v11; // rdx
  struct tagPOINTERINPUTFRAME *TPFrame; // r12
  unsigned int *v14; // rdx
  struct tagPOINTERINPUTFRAME *EarliestTPFrame; // rbp
  int v16; // eax
  __int64 v17; // rsi
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  struct _LIST_ENTRY *v24; // r8
  struct tagPOINTERINPUTFRAME *NextFrame; // rdi
  const struct tagPOINTERINPUTFRAME *v26; // rcx
  unsigned int *v27; // rdx
  _QWORD v28[4]; // [rsp+30h] [rbp-48h] BYREF
  char v29; // [rsp+90h] [rbp+18h] BYREF

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
  v9 = TPAAPGetLevel(v6);
  if ( v9 > 0 )
  {
    v10 = *(_DWORD *)(v6 + 1416);
    v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(v6 + 1416) = v11;
    if ( (unsigned int)(v11 - v10) >= dword_1C0323A34[v9] )
      TPAAPSetCurtainState((struct tagTPSTATE *)v6, 1u);
  }
  TPFrame = CreateTPFrame(v5);
  if ( TPFrame )
  {
    ResetHoldingFrame(v5);
    EarliestTPFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v29, v14);
    if ( EarliestTPFrame )
    {
      do
      {
        if ( gbTapTimerFired )
        {
          *(_DWORD *)(v6 + 1544) &= ~0x10u;
          gbTapTimerFired = 0;
        }
        v16 = *(_DWORD *)(v6 + 1544);
        if ( (v16 & 1) == 0 )
        {
          v17 = *((_QWORD *)EarliestTPFrame + 9);
          v18 = (*(unsigned __int8 *)(v17 + 68) >> 4) & 1;
          if ( (v16 & 0x200) == 0 && v18 )
          {
            v19 = *(_DWORD *)(v8 + 1560) == 2 && !(unsigned int)TPAAPShouldAllowNow(8, 0, 0, 0LL)
               || *(_DWORD *)(v6 + 1304)
               || gidTapTimer && !a2;
            *(_DWORD *)(v6 + 1544) ^= (*(_DWORD *)(v6 + 1544) ^ (v19 << 9)) & 0x200;
          }
          v20 = *(_DWORD *)(v6 + 1544);
          if ( (v20 & 0x200) != 0 )
          {
            if ( v18 )
              *(_DWORD *)(v17 + 68) &= ~0x10u;
            else
              *(_DWORD *)(v6 + 1544) = v20 & 0xFFFFFDFF;
          }
          else if ( v18 )
          {
            if ( guMouseUpPending )
              *(_DWORD *)(v6 + 1544) = v20 & 0xFFFFFFEF;
            xxxCancelMouseUpTimer(1);
            gbTapTimerFired = 0;
          }
        }
        v21 = *(_DWORD *)(v6 + 1544);
        if ( (v21 & 4) == 0 && (v21 & 8) == 0 )
        {
          v22 = *(_DWORD *)(*((_QWORD *)EarliestTPFrame + 9) + 68LL);
          if ( (((unsigned __int8)v22 >> 5) & 1) != 0 || (((unsigned __int8)v22 >> 6) & 1) != 0 )
          {
            if ( guMouseUpPending )
              *(_DWORD *)(v6 + 1544) = v21 & 0xFFFFFFEF;
            xxxCancelMouseUpTimer(1);
            gbTapTimerFired = 0;
          }
        }
        PushW32ThreadLock((__int64)TPFrame, v28, (__int64)CleanupTPFrameList);
        v23 = xxxInternalTPProcessing(a2, v6, v8, EarliestTPFrame, a1);
        PopW32ThreadLock(v28);
        if ( v23 == 3 || v23 == 6 )
        {
          xxxGeneratePointerInputMessages(a1);
          NextFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v29, v27);
        }
        else
        {
          NextFrame = PointerFrameList::GetNextFrame(
                        EarliestTPFrame,
                        (const struct tagPOINTERINPUTFRAME *)&gFrameTPListHead,
                        v24);
          FreeTPFrame(v26);
          CheckTouchpadCachedInertia(a1);
        }
        EarliestTPFrame = NextFrame;
      }
      while ( NextFrame );
    }
  }
  return 1LL;
}
