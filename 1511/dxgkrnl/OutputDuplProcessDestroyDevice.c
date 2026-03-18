/*
 * XREFs of OutputDuplProcessDestroyDevice @ 0x1C00BBB98
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00990F0 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009EAC0 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

void __fastcall OutputDuplProcessDestroyDevice(__int64 a1, struct DXGDEVICE *a2)
{
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v4; // r8

  if ( a1 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *(ADAPTER_DISPLAY **)(a1 + 1984),
      (__int64 (__fastcall *)(__int64, __int64))sub_1C009D040,
      (__int64)a2);
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessDestroyDevice(RemoteOutputDuplMgr, a2, v4);
}
