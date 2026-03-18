/*
 * XREFs of ?PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000B938
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     ?Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z @ 0x180019C20 (-Push@CBaseMatrixStack@@IEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CHitTestContext::PopulateWorldTransform(
        CHitTestContext *this,
        const struct CVisualTree *a2,
        CVisual **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  if ( *((CVisual ***)a2 + 3) != a3 )
  {
    if ( a3[10] )
    {
      if ( CVisual::FindTreeData(a3[10], a2) )
      {
        CVisual::GetWorldTransform(v6 + 64, v5, 4LL, v9, 0LL, 0LL);
        v7 = CBaseMatrixStack::Push((CHitTestContext *)((char *)this + 120), (const struct CMILMatrix *)v9, 0);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1FFu);
      }
    }
  }
  return v3;
}
