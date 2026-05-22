/*
 * XREFs of ?OnPropertyChanged@OrientationWatcher@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18005AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCurrentOrientation@OrientationWatcher@@IEAAXXZ @ 0x18005AC9C (-CheckCurrentOrientation@OrientationWatcher@@IEAAXXZ.c)
 */

__int64 __fastcall OrientationWatcher::OnPropertyChanged(
        OrientationWatcher *this,
        struct IMessageProxy *a2,
        __int16 a3)
{
  if ( a3 == 2 )
    OrientationWatcher::CheckCurrentOrientation((OrientationWatcher *)((char *)this - 16));
  return 0LL;
}
