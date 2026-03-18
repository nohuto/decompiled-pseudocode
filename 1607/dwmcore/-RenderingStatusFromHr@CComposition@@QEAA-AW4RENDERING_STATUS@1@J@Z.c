/*
 * XREFs of ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x18003C36C
 * Callers:
 *     ?CheckDeviceState@CComposition@@QEAAJXZ @ 0x18003B324 (-CheckDeviceState@CComposition@@QEAAJXZ.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x180072D6C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::RenderingStatusFromHr(__int64 a1, int a2)
{
  if ( a2 != -2003304442 && a2 != -2003304307 )
  {
    switch ( a2 )
    {
      case 0:
        return 3LL;
      case 142213121:
        return 2LL;
      case 142213130:
        return 3LL;
    }
  }
  return 1LL;
}
