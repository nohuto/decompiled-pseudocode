/*
 * XREFs of SpeedHitTest @ 0x1C008D450
 * Callers:
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     DCESpeedHitTest @ 0x1C0065270 (DCESpeedHitTest.c)
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 *     SpeedHitTest @ 0x1C008D450 (SpeedHitTest.c)
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022AEF0 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C022D488 (SpeedHitTestWithoutTargeting.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022D7D4 (xxxDitCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000776C (ResolveDCompInputHandleToPwnd.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     SpeedHitTest @ 0x1C008D450 (SpeedHitTest.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C008D644 (xxxIsDCompSpeedHitTest.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     LayerHitTest @ 0x1C00FAD48 (LayerHitTest.c)
 */

__int64 __fastcall SpeedHitTest(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+10h]
  int v24; // [rsp+80h] [rbp+18h]
  __int64 v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v8 = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  if ( !a1 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 96);
  if ( !v11 )
    return a1;
  v12 = a5;
  v13 = HIDWORD(a5);
  while ( 1 )
  {
    if ( (*(_BYTE *)(v11 + 55) & 0x10) == 0
      || (int)v12 < *(_DWORD *)(v11 + 112)
      || (int)v12 >= *(_DWORD *)(v11 + 120)
      || (int)v13 < *(_DWORD *)(v11 + 116)
      || (int)v13 >= *(_DWORD *)(v11 + 124) )
    {
      goto LABEL_21;
    }
    v14 = *(_QWORD *)(v11 + 200);
    if ( !v14 )
      break;
    if ( (unsigned int)GrePtInRegion(v14, v12, v13) )
    {
      v12 = a5;
      break;
    }
LABEL_20:
    v12 = a5;
    v13 = HIDWORD(a5);
LABEL_21:
    v11 = *(_QWORD *)(v11 + 72);
    if ( !v11 )
      return a1;
  }
  if ( (*(_BYTE *)(v11 + 50) & 8) != 0 && !(unsigned int)LayerHitTest(v11) )
    goto LABEL_20;
  if ( (unsigned int)IsDwmInputThread(v14, v12, v13, a4) )
    v9 = *(_QWORD *)v11;
  v15 = a6;
  if ( (unsigned int)xxxIsDCompSpeedHitTest((struct tagWND *)v11, (__int64)&v22, a6, a7, a8) )
  {
    v16 = v22;
    if ( v22 )
      v8 = ResolveDCompInputHandleToPwnd(v9, (struct tagWND *)v22, v23, v25, v15);
  }
  if ( (unsigned int)IsDwmInputThread(v17, v16, v18, v19) )
  {
    v11 = HMValidateHandleNoSecure(v9, 1);
    if ( !v11 )
    {
      EtwTraceDITSpeedHitTestFailedRevalidation(v9);
      return 0LL;
    }
  }
  if ( !*(_QWORD *)(v11 + 96)
    || !(unsigned int)PtInRect(v11 + 128, a5)
    || (result = SpeedHitTest(v11, v23, v24, v25, v20, v15, a7, a8)) == 0
    || v8 && result == v11 )
  {
    if ( v8 )
      return v8;
    return v11;
  }
  return result;
}
