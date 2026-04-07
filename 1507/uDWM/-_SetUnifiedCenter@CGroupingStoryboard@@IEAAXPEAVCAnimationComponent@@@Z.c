/*
 * XREFs of ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180093908
 * Callers:
 *     _lambda_c5b80c29b716117d9c8fc9ac03427231_::operator() @ 0x180090394 (_lambda_c5b80c29b716117d9c8fc9ac03427231_--operator().c)
 *     _lambda_ce7033fd26fde6ee41d93c51ce6ad988_::operator() @ 0x1800903E4 (_lambda_ce7033fd26fde6ee41d93c51ce6ad988_--operator().c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093204 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094AD0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z @ 0x180091690 (-MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x18009316C (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x18009361C (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 */

void __fastcall CGroupingStoryboard::_SetUnifiedCenter(CGroupingStoryboard *this, struct CAnimationComponent *a2)
{
  unsigned int v4; // esi
  __int64 v5; // r10
  __int64 v6; // xmm0_8
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  struct tagRECT v12; // [rsp+30h] [rbp-10h] BYREF
  float v13; // [rsp+60h] [rbp+20h] BYREF
  float v14; // [rsp+64h] [rbp+24h]

  v4 = *((_DWORD *)a2 + 6) & 0xFFF;
  if ( ((*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 96LL))(this, v4) & 8) != 0 )
  {
    v10 = 0LL;
    v11 = 0;
    if ( (int)CGroupingStoryboard::_GetUnionRect((__int64)this, v4, &v12) >= 0 )
    {
      v5 = *((_QWORD *)a2 + 5);
      v13 = (float)(v12.right + v12.left) * 0.5;
      v14 = (float)(v12.bottom + v12.top) * 0.5;
      v12 = *(struct tagRECT *)(v5 + 840);
      MapPointIntoRectangle((const struct MilPoint2F *)&v13, &v12, (struct MilPoint3F *)&v10);
      v6 = v10;
      v7 = v11;
      *(_QWORD *)(v8 + 784) = v10;
      *(_DWORD *)(v8 + 792) = v7;
      *(_DWORD *)(v8 + 1004) = 2;
      *(_BYTE *)(v8 + 957) = 1;
      v9 = *((_QWORD *)a2 + 5);
      *(_QWORD *)(v9 + 760) = v6;
      *(_DWORD *)(v9 + 768) = v7;
      *(_BYTE *)(v9 + 958) = 1;
      if ( (unsigned int)CGroupingStoryboard::_NumberOfWindowsInUnionRect((__int64)this, v4) > 1 || v4 - 45 <= 1 )
      {
        if ( *((_DWORD *)a2 + 17) != 2 )
          *((_DWORD *)a2 + 17) = 3;
      }
      else if ( *((_DWORD *)a2 + 17) != 2 )
      {
        *((_DWORD *)a2 + 17) = 1;
      }
    }
  }
}
