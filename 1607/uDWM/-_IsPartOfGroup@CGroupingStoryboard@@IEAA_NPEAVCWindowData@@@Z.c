/*
 * XREFs of ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180001DE0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093160 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x180093D50 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x180001C4C (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

char __fastcall CGroupingStoryboard::_IsPartOfGroup(CGroupingStoryboard *this, struct CWindowData *a2)
{
  unsigned int v2; // eax
  RECT *v3; // rdx
  RECT v4; // xmm0
  char v5; // bl
  RECT rc2; // [rsp+20h] [rbp-38h] BYREF
  RECT rc1; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)a2 + 146);
  if ( (v2 & 0x1000000) != 0 )
    v3 = (RECT *)((char *)a2 + 604);
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
