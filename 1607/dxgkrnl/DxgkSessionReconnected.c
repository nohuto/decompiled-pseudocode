/*
 * XREFs of DxgkSessionReconnected @ 0x1C00E3010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0077A64 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00C617C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C017FA5C (OutputDuplRemoteSessionReconnected.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2)
{
  char v3; // bl
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax

  v3 = a1;
  DxgkIncreaseSessionAdapterUniqueness(a1);
  if ( v3 )
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 69), 1);
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
}
