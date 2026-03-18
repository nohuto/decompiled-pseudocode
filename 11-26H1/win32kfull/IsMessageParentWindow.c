/*
 * XREFs of IsMessageParentWindow @ 0x14012EA44
 * Callers:
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012E364 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMessageParentWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 112);
  return a1 == v2;
}
