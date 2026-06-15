/*
 * XREFs of ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14002DE50
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140001EC8 (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ConnectToRightPipe(CPipeInstance *this, const struct CPipeInstance *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 8);
  if ( !v2 )
    ATL::AtlThrowImpl(-2147467259);
  return CPipeInstance::ResolvePendingConnections(this, *(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL));
}
