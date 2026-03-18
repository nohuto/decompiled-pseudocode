/*
 * XREFs of ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x1800DE5CC
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x1800DE73C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::RenderingStatusFromHr(__int64 a1, int a2)
{
  if ( a2 == -2003304442 || a2 == -2003304307 )
    return 1LL;
  if ( a2 )
  {
    if ( a2 == 142213121 )
      return 2LL;
    if ( a2 != 142213130 )
      return 1LL;
  }
  return 3LL;
}
