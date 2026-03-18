/*
 * XREFs of OutputDuplProcessDestroyDevice @ 0x1C0078684
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0078248 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00867B8 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 */

void __fastcall OutputDuplProcessDestroyDevice(__int64 a1, void *a2)
{
  OUTPUTDUPL_CONTEXT **RemoteOutputDuplMgr; // rax

  if ( a1 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *(ADAPTER_DISPLAY **)(a1 + 2128),
      lambda_55055bd30a6c367c9479cf67f85e47ac_::_lambda_invoker_cdecl_,
      a2);
  RemoteOutputDuplMgr = (OUTPUTDUPL_CONTEXT **)FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessDestroyDevice(RemoteOutputDuplMgr, (struct DXGDEVICE *)a2);
}
