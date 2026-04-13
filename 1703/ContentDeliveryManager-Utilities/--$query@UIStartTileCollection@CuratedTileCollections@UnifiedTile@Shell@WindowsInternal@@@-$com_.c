/*
 * XREFs of ??$query@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800597C8
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180058D80 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x180058FC0 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection,wil::err_exception_policy>::query<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::IStartTileCollection>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_adbf8965_6056_4126_ab26_6660af4661ce, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180059815LL);
  }
  return a2;
}
