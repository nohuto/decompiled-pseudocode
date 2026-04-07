/*
 * XREFs of ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180093594
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800923E4 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093204 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094AD0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x18009316C (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 */

char __fastcall CGroupingStoryboard::_IsPartOfGroup(CGroupingStoryboard *this, struct CWindowData *a2)
{
  unsigned int v2; // eax
  RECT *v3; // rdx
  RECT v4; // xmm0
  char v5; // bl
  RECT rc2; // [rsp+20h] [rbp-38h] BYREF
  RECT rc1; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)a2 + 142);
  if ( (v2 & 0x1000000) != 0 )
    v3 = (RECT *)((char *)a2 + 588);
  else
    v3 = (RECT *)((char *)a2 + 48);
  v4 = *v3;
  *(_QWORD *)&rc2.left = 0LL;
  *(_QWORD *)&rc2.right = 0LL;
  rc1 = v4;
  v5 = 0;
  if ( (int)CGroupingStoryboard::_GetUnionRect((__int64)this, v2, &rc2) >= 0 )
    return !EqualRect(&rc1, &rc2);
  return v5;
}
