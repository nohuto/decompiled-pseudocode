/*
 * XREFs of DwmNotifyChildrenAddRemove @ 0x1C00D2698
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D26D8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 */

void __fastcall DwmNotifyChildrenAddRemove(struct tagDESKTOP *a1, int a2)
{
  if ( a2 )
  {
    DwmNotifyChildrenCreateDestroy(a1, 1);
    DwmNotifyChildrenLinkUnlink(a1, 1);
  }
  else
  {
    DwmNotifyChildrenLinkUnlink(a1, 0);
    DwmNotifyChildrenCreateDestroy(a1, 0);
  }
}
