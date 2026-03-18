/*
 * XREFs of SpeedHitTest @ 0x1C0066700
 * Callers:
 *     DetermineInputTarget @ 0x1C0066180 (DetermineInputTarget.c)
 *     DCESpeedHitTest @ 0x1C0066310 (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022B1F4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C022D78C (SpeedHitTestWithoutTargeting.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022DBD8 (xxxDitCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C0008CE0 (ResolveDCompInputHandleToPwnd.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C0066924 (xxxIsDCompSpeedHitTest.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     LayerHitTest @ 0x1C00FE990 (LayerHitTest.c)
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
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+10h]
  int v20; // [rsp+80h] [rbp+18h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v8 = 0LL;
  v9 = 0LL;
  v18 = 0LL;
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
    if ( (!v14 || (unsigned int)GrePtInRegion(v14, v12, v13))
      && ((*(_BYTE *)(v11 + 50) & 8) == 0 || (unsigned int)LayerHitTest(v11)) )
    {
      break;
    }
    v12 = a5;
    v13 = HIDWORD(a5);
LABEL_21:
    v11 = *(_QWORD *)(v11 + 72);
    if ( !v11 )
      return a1;
  }
  if ( (unsigned int)IsDwmInputThread() )
    v9 = *(_QWORD *)v11;
  v15 = a6;
  if ( (unsigned int)xxxIsDCompSpeedHitTest((struct tagWND *)v11, (__int64)&v18, a6, a7, a8) && v18 )
    v8 = ResolveDCompInputHandleToPwnd(v9, (struct tagWND *)v18, v19, v21, v15);
  if ( (unsigned int)IsDwmInputThread() )
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
    || (result = SpeedHitTest(v11, v19, v20, v21, v16, v15, a7, a8)) == 0
    || v8 && result == v11 )
  {
    if ( v8 )
      return v8;
    return v11;
  }
  return result;
}
