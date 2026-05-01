/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x1800142FC
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InvertDesktopPixelData_::_1_::dtor$1 @ 0x180027B16 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InvertDesktopPix_ea_180027B16.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180025E1C (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
