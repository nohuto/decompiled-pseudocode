/*
 * XREFs of ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002EE88
 * Callers:
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012BAC (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150 (-ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ConnectToRightPipe(CPipeInstance *this, const struct CPipeInstance *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 8);
  if ( !v2 )
    ATL::AtlThrowImpl(-2147467259);
  return CPipeInstance::ResolvePendingConnections(this, *(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL));
}
