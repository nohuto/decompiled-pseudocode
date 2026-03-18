/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800036F8
 * Callers:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000377C (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800037E0 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x18001199C (-UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  __int64 v6; // r11
  char v7; // al
  bool v8; // zf
  COcclusionContext *v9; // rcx

  if ( a3 )
    *a3 = 0;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 6256), a2);
  v7 = CMILMatrix::IsIdentity<0>(v6);
  v8 = *((_BYTE *)this + 6531) == 0;
  *((_BYTE *)this + 6324) = v7 != 0;
  if ( !v8 )
  {
    v9 = (COcclusionContext *)*((_QWORD *)this + 808);
    if ( v9 )
    {
      if ( (int)COcclusionContext::UpdateDeviceTransform(v9, a2) >= 0 && a3 )
        *a3 = 1;
    }
  }
  return 0LL;
}
