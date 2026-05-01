/*
 * XREFs of ?get_TileActivatedInfo@CLaunchActivatedEventArgs@@UEAAJPEAPEAUITileActivatedInfo@Activation@ApplicationModel@Windows@@@Z @ 0x18002C9F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::get_TileActivatedInfo(
        CLaunchActivatedEventArgs *this,
        struct Windows::ApplicationModel::Activation::ITileActivatedInfo **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct Windows::ApplicationModel::Activation::ITileActivatedInfo *)*((_QWORD *)this + 7);
  return 0LL;
}
