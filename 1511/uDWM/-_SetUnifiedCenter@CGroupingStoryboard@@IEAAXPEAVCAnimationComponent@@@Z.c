/*
 * XREFs of ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18000204C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     sub_180093234 @ 0x180093234 (sub_180093234.c)
 *     sub_180093284 @ 0x180093284 (sub_180093284.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180095990 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096330 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z @ 0x1800011A8 (-MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z.c)
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x180002190 (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800021D4 (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
    if ( (int)CGroupingStoryboard::_GetUnionRect(this, v4, &v12) >= 0 )
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
      if ( (unsigned int)CGroupingStoryboard::_NumberOfWindowsInUnionRect(this, v4) > 1 || v4 - 45 <= 1 )
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
