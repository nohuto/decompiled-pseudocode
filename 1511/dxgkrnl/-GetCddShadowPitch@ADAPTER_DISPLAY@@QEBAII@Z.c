/*
 * XREFs of ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00075F8
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00C4160 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCddShadowPitch(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 26) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 3975LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(unsigned int *)(1016 * v3 + *((_QWORD *)this + 17) + 608);
}
