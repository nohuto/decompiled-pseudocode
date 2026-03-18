/*
 * XREFs of QueueMouseEvent @ 0x1C00E0E7C
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C00E0064 (ProcessMouseInputViaRim.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00E0460 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D14C8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01E4C10 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4DF0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4FB0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01EDC74 (xxxOnPTPMouseOperation.c)
 *     ?xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0232B3C (-xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z @ 0x1C023F438 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z.c)
 * Callees:
 *     MonotonicTick @ 0x1C00E15A4 (MonotonicTick.c)
 *     GetMouseEventInputSource @ 0x1C00E160C (GetMouseEventInputSource.c)
 *     WakeDIT @ 0x1C00E1684 (WakeDIT.c)
 *     IsEqualInputSource @ 0x1C0112E64 (IsEqualInputSource.c)
 *     WakeRIT @ 0x1C011A044 (WakeRIT.c)
 *     GetMouseDataInputSource @ 0x1C01F97A8 (GetMouseDataInputSource.c)
 *     UserBeep @ 0x1C0228C40 (UserBeep.c)
 */

void __fastcall QueueMouseEvent(
        __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        unsigned int a10,
        int a11,
        char a12,
        char a13,
        unsigned int a14,
        char a15,
        int a16,
        _DWORD *a17,
        __int64 *a18)
{
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // xmm0_8
  int v26; // r15d
  unsigned int v27; // r10d
  int v28; // r8d
  char v29; // r11
  __int16 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rcx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  __int64 v38; // r11
  _WORD *v39; // rcx
  _BYTE v40[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v41; // [rsp+38h] [rbp-20h] BYREF
  int v42; // [rsp+40h] [rbp-18h]

  v18 = 0;
  if ( !a10 )
  {
    v22 = v42;
    goto LABEL_4;
  }
  if ( !a18 )
  {
    EnterCrit(0LL, 1LL);
    v41 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v20, v19) + 824);
    v22 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v41, v21) + 12) >> 31;
    UserSessionSwitchLeaveCrit(v24, v23);
LABEL_4:
    v25 = v41;
    goto LABEL_5;
  }
  v25 = *a18;
  v22 = *((_DWORD *)a18 + 2);
LABEL_5:
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  v26 = a11;
  if ( a16 )
  {
    if ( gdwMouseEvents )
    {
      gMouseEventQueue[24 * gdwMouseQueueHead + 12] ^= (gMouseEventQueue[24 * gdwMouseQueueHead + 12] ^ (a16 << 7)) & 0x80;
      v18 = 0;
      if ( a17 )
        *a17 = 1;
    }
    goto LABEL_18;
  }
  MonotonicTick();
  v27 = gdwMouseEvents;
  v28 = 0;
  v29 = gdwMouseQueueHead;
  if ( !gdwMouseEvents )
  {
    v30 = a1;
LABEL_8:
    if ( v27 >= 0x10 )
    {
      if ( glDitMouseHandling == v28 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
        EtwTraceWakeRIT(4LL);
        WakeRIT(4LL);
      }
      else
      {
        ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
        EtwTraceWakeDIT(64LL);
        WakeDIT(64LL);
      }
      UserBeep(440LL, 125LL);
      return;
    }
    v31 = (v29 + 1) & 0xF;
    gdwMouseQueueHead = (v29 + 1) & 0xF;
    v32 = 24 * v31;
    gdwMouseEvents = v27 + 1;
    LOWORD(gMouseEventQueue[v32]) = v30;
    HIWORD(gMouseEventQueue[v32]) = a2;
    goto LABEL_10;
  }
  GetMouseDataInputSource(a8, a10, a14, &v41);
  GetMouseEventInputSource(&gMouseEventQueue[24 * v38], v40);
  v30 = a1;
  v28 = 0;
  if ( a1 || *v39 || a8 && (*(_BYTE *)(a8 + 2) & 8) != 0 || !(unsigned int)IsEqualInputSource(&v41) )
    goto LABEL_8;
  EtwTraceMouseInputCoalesced();
  LODWORD(v31) = gdwMouseQueueHead;
LABEL_10:
  v33 = 24LL * (unsigned int)v31;
  *(_QWORD *)&gMouseEventQueue[v33 + 2] = a3;
  *(_QWORD *)&gMouseEventQueue[v33 + 4] = a4;
  *(_QWORD *)&gMouseEventQueue[v33 + 6] = a5;
  *(_QWORD *)&gMouseEventQueue[v33 + 8] = a6;
  gMouseEventQueue[v33 + 12] ^= ((unsigned __int8)a10 ^ (unsigned __int8)gMouseEventQueue[v33 + 12]) & 1;
  *(_QWORD *)&gMouseEventQueue[v33 + 10] = a7;
  gMouseEventQueue[v33 + 12] = gMouseEventQueue[v33 + 12] & 0xFFFFF38F | (16
                                                                        * (a14 & 1 | (2
                                                                                    * (a12 & 1 | (2
                                                                                                * (a13 & 1 | (16 * (a15 & 1))))))));
  v34 = &unk_1C02E6040;
  if ( a9 )
    v34 = a9;
  *(_QWORD *)&gMouseEventQueue[v33 + 22] = *v34;
  if ( a10 && (!a11 || a18) )
  {
    *(_QWORD *)&gMouseEventQueue[v33 + 13] = v25;
    gMouseEventQueue[v33 + 15] = v22;
    gMouseEventQueue[v33 + 12] |= 0x800u;
  }
  if ( a8 )
  {
    gMouseEventQueue[v33 + 12] ^= (gMouseEventQueue[v33 + 12] ^ (2 * ((*(unsigned __int8 *)(a8 + 2) >> 3) & 1))) & 2;
    v35 = gMouseEventQueue[v33 + 12] ^ (gMouseEventQueue[v33 + 12] ^ (4 * ((*(unsigned __int8 *)(a8 + 2) >> 4) & 1))) & 4;
    gMouseEventQueue[v33 + 12] = v35;
    v36 = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(8 * ((*(_BYTE *)(a8 + 2) & 0x40) != 0))) & 8;
    gMouseEventQueue[v33 + 12] = v36;
    v37 = v36 ^ ((unsigned __int16)v36 ^ (*(unsigned __int8 *)(a8 + 2) >> 7 << 8)) & 0x100;
    gMouseEventQueue[v33 + 12] = v37;
    gMouseEventQueue[v33 + 12] = v37 ^ ((unsigned __int16)v37 ^ ((HIBYTE(*(_WORD *)(a8 + 2)) & 1) << 9)) & 0x200;
    *(_OWORD *)&gMouseEventQueue[v33 + 16] = *(_OWORD *)a8;
    *(_QWORD *)&gMouseEventQueue[v33 + 20] = *(_QWORD *)(a8 + 16);
  }
  else
  {
    gMouseEventQueue[v33 + 12] &= 0xFFFFFCF1;
    LOWORD(gMouseEventQueue[v33 + 16]) = -1;
  }
  v18 = 0;
LABEL_18:
  if ( glDitMouseHandling )
  {
    if ( a11 || gulAnyInputSinkInSubtree )
      v18 = 1;
    v26 = 0;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  if ( v18 )
  {
    EtwTraceWakeDIT(64LL);
    WakeDIT(64LL);
  }
  if ( v26 )
  {
    EtwTraceWakeRIT(4LL);
    WakeRIT(4LL);
  }
}
