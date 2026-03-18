/*
 * XREFs of rimHidP_FreeCollectionDescription @ 0x1C00D2E98
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall rimHidP_FreeCollectionDescription(struct _HIDP_DEVICE_DESC *a1)
{
  if ( gpfnHidP_FreeCollectionDescription )
    gpfnHidP_FreeCollectionDescription(a1);
}
