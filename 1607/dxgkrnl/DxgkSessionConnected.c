/*
 * XREFs of DxgkSessionConnected @ 0x1C00C6150
 * Callers:
 *     <none>
 * Callees:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0077A64 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00C617C (DxgkIncreaseSessionAdapterUniqueness.c)
 */

void __fastcall DxgkSessionConnected(char a1)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal(v2);
    DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 69), 1);
  }
}
