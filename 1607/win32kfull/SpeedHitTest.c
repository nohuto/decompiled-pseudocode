/*
 * XREFs of SpeedHitTest @ 0x1C00591A0
 * Callers:
 *     DetermineInputTarget @ 0x1C0058B9C (DetermineInputTarget.c)
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C0220DB4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C02234F0 (SpeedHitTestWithoutTargeting.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C0223944 (xxxDitCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000C718 (ResolveDCompInputHandleToPwnd.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     LayerHitTest @ 0x1C0121450 (LayerHitTest.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0155248 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 */

__int64 __fastcall SpeedHitTest(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  InputTransform *v25; // rax
  __int64 v26; // [rsp+50h] [rbp-18h] BYREF
  _BYTE v27[16]; // [rsp+58h] [rbp-10h] BYREF
  InputTransform *v28; // [rsp+90h] [rbp+28h]

  v9 = 0LL;
  v10 = a1;
  v28 = 0LL;
  v26 = 0LL;
  if ( !a1 )
    return 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  v12 = *(_QWORD *)(v10 + 96);
  if ( v12 )
  {
    v13 = a5;
    v14 = HIDWORD(a5);
    while ( 1 )
    {
      if ( (*(_BYTE *)(v12 + 55) & 0x10) == 0
        || (int)v13 < *(_DWORD *)(v12 + 112)
        || (int)v13 >= *(_DWORD *)(v12 + 120)
        || (int)v14 < *(_DWORD *)(v12 + 116)
        || (int)v14 >= *(_DWORD *)(v12 + 124) )
      {
        goto LABEL_16;
      }
      v15 = *(_QWORD *)(v12 + 200);
      if ( !v15 )
        goto LABEL_13;
      if ( (unsigned int)GrePtInRegion(v15, v13, v14) )
        break;
LABEL_15:
      v13 = a5;
      v14 = HIDWORD(a5);
LABEL_16:
      v12 = *(_QWORD *)(v12 + 72);
      if ( !v12 )
        goto LABEL_37;
    }
    v13 = a5;
LABEL_13:
    if ( (*(_BYTE *)(v12 + 50) & 8) == 0 || (unsigned int)LayerHitTest(v12, v13) )
    {
      if ( (unsigned int)IsDwmInputThread(v15, v13) )
      {
        UserAtomicCheck::Detach((UserAtomicCheck *)v27);
        v16 = *(_QWORD *)v12;
      }
      else
      {
        v16 = 0LL;
      }
      if ( (unsigned int)xxxIsDCompSpeedHitTest((struct tagWND *)v12, (__int64)&v26, a7, a8, a9) )
      {
        v17 = v26;
        if ( v26 )
          v28 = ResolveDCompInputHandleToPwnd(v16, (struct tagWND *)v26, a2, a4, a7);
      }
      if ( (unsigned int)IsDwmInputThread(v18, v17) )
      {
        LOBYTE(v19) = 1;
        v20 = HMValidateHandleNoSecure(v16, v19);
        v12 = v20;
        if ( !v20 || (LOBYTE(v21) = *(_BYTE *)(v20 + 43), (v21 & 0x80u) != 0LL) )
        {
          EtwTraceDITSpeedHitTestFailedRevalidation(v16, v21, v22, v23);
          goto LABEL_41;
        }
      }
      if ( *(_QWORD *)(v12 + 96) && (unsigned int)PtInRect(v12 + 128, a5) )
      {
        v10 = SpeedHitTest(v12, a2, a3, a4, v24, a6, a7, a8, a9);
        v25 = v28;
        if ( v10 && (!v28 || v10 != v12) )
          goto LABEL_37;
      }
      else
      {
        v25 = v28;
      }
      v10 = v12;
      if ( v25 )
        v10 = (__int64)v25;
      goto LABEL_37;
    }
    goto LABEL_15;
  }
LABEL_37:
  if ( v10 )
  {
    if ( *(char *)(v10 + 43) < 0 )
      v10 = 0LL;
  }
  v9 = v10;
LABEL_41:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  return v9;
}
