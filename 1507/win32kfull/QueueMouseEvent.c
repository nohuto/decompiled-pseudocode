/*
 * XREFs of QueueMouseEvent @ 0x1C004AE08
 * Callers:
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C004AD10 (xxxWaitForDITMouseInjectionFlush.c)
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D8FD8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     ProcessMouseInput @ 0x1C01D9FE0 (ProcessMouseInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01EE4F0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE6A0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE830 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01F65C0 (xxxOnPTPMouseOperation.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C023AE50 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 * Callees:
 *     WakeDIT @ 0x1C0007B04 (WakeDIT.c)
 *     MonotonicTick @ 0x1C004B514 (MonotonicTick.c)
 *     GetMouseEventInputSource @ 0x1C004B934 (GetMouseEventInputSource.c)
 *     IsEqualInputSource @ 0x1C00EE90C (IsEqualInputSource.c)
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 *     GetMouseDataInputSource @ 0x1C02020F8 (GetMouseDataInputSource.c)
 *     UserBeep @ 0x1C0229040 (UserBeep.c)
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
  __int64 v19; // rcx
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // xmm0_8
  int v24; // r15d
  __int64 v25; // rax
  unsigned int v26; // r10d
  int v27; // r8d
  char v28; // r11
  __int16 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rcx
  int v34; // edx
  int v35; // ecx
  __int64 v36; // r11
  _WORD *v37; // rcx
  _BYTE v38[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v39; // [rsp+38h] [rbp-20h] BYREF
  int v40; // [rsp+40h] [rbp-18h]

  v18 = 0;
  if ( !a10 )
  {
    v20 = v40;
    goto LABEL_4;
  }
  if ( !a18 )
  {
    EnterCrit(1LL);
    v39 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v19) + 832);
    v20 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 12) >> 31;
    UserSessionSwitchLeaveCrit(v22, v21);
LABEL_4:
    v23 = v39;
    goto LABEL_5;
  }
  v23 = *a18;
  v20 = *((_DWORD *)a18 + 2);
LABEL_5:
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  v24 = a11;
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
  v25 = MonotonicTick();
  v26 = gdwMouseEvents;
  v27 = 0;
  v28 = gdwMouseQueueHead;
  gqwMouseQueueMouseEventTime = v25;
  if ( !gdwMouseEvents )
  {
    v29 = a1;
LABEL_8:
    if ( v26 >= 0x10 )
    {
      if ( glDitMouseHandling == v27 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
        EtwTraceWakeRIT(4LL);
        WakeRIT(4LL);
      }
      else
      {
        ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
        EtwTraceWakeDIT(64LL);
        WakeDIT(0x40u);
      }
      UserBeep(440LL, 125LL);
      return;
    }
    v30 = (v28 + 1) & 0xF;
    gdwMouseQueueHead = (v28 + 1) & 0xF;
    v31 = 24 * v30;
    gdwMouseEvents = v26 + 1;
    LOWORD(gMouseEventQueue[v31]) = v29;
    HIWORD(gMouseEventQueue[v31]) = a2;
    goto LABEL_10;
  }
  GetMouseDataInputSource(a8, a10, a14, &v39);
  GetMouseEventInputSource(&gMouseEventQueue[24 * v36], v38);
  v29 = a1;
  v27 = 0;
  if ( a1 || *v37 || a8 && (*(_BYTE *)(a8 + 2) & 8) != 0 || !(unsigned int)IsEqualInputSource(&v39, v38, 0LL) )
    goto LABEL_8;
  EtwTraceMouseInputCoalesced();
  LODWORD(v30) = gdwMouseQueueHead;
LABEL_10:
  v32 = 24LL * (unsigned int)v30;
  *(_QWORD *)&gMouseEventQueue[v32 + 2] = a3;
  *(_QWORD *)&gMouseEventQueue[v32 + 4] = a4;
  *(_QWORD *)&gMouseEventQueue[v32 + 6] = a5;
  *(_QWORD *)&gMouseEventQueue[v32 + 8] = a6;
  gMouseEventQueue[v32 + 12] ^= ((unsigned __int8)a10 ^ (unsigned __int8)gMouseEventQueue[v32 + 12]) & 1;
  *(_QWORD *)&gMouseEventQueue[v32 + 10] = a7;
  gMouseEventQueue[v32 + 12] = gMouseEventQueue[v32 + 12] & 0xFFFFF98F | (16
                                                                        * (a14 & 1 | (2
                                                                                    * (a12 & 1 | (2
                                                                                                * (a13 & 1 | (8 * (a15 & 1))))))));
  v33 = &unk_1C02DF018;
  if ( a9 )
    v33 = a9;
  *(_QWORD *)&gMouseEventQueue[v32 + 22] = *v33;
  if ( a10 && (!a11 || a18) )
  {
    *(_QWORD *)&gMouseEventQueue[v32 + 13] = v23;
    gMouseEventQueue[v32 + 15] = v20;
    gMouseEventQueue[v32 + 12] |= 0x400u;
  }
  if ( a8 )
  {
    gMouseEventQueue[v32 + 12] ^= (gMouseEventQueue[v32 + 12] ^ (2 * ((*(unsigned __int8 *)(a8 + 2) >> 3) & 1))) & 2;
    v34 = gMouseEventQueue[v32 + 12] ^ (gMouseEventQueue[v32 + 12] ^ (4 * ((*(unsigned __int8 *)(a8 + 2) >> 4) & 1))) & 4;
    gMouseEventQueue[v32 + 12] = v34;
    v35 = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)(8 * ((*(_BYTE *)(a8 + 2) & 0x40) != 0))) & 8;
    gMouseEventQueue[v32 + 12] = v35;
    gMouseEventQueue[v32 + 12] = v35 ^ ((unsigned __int16)v35 ^ (*(unsigned __int8 *)(a8 + 2) >> 7 << 8)) & 0x100;
    *(_OWORD *)&gMouseEventQueue[v32 + 16] = *(_OWORD *)a8;
    *(_QWORD *)&gMouseEventQueue[v32 + 20] = *(_QWORD *)(a8 + 16);
  }
  else
  {
    gMouseEventQueue[v32 + 12] &= 0xFFFFFEF1;
    LOWORD(gMouseEventQueue[v32 + 16]) = -1;
  }
  v18 = 0;
LABEL_18:
  if ( glDitMouseHandling )
  {
    if ( a11 || gulAnyInputSinkInSubtree )
      v18 = 1;
    v24 = 0;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  if ( v18 )
  {
    EtwTraceWakeDIT(64LL);
    WakeDIT(0x40u);
  }
  if ( v24 )
  {
    EtwTraceWakeRIT(4LL);
    WakeRIT(4LL);
  }
}
