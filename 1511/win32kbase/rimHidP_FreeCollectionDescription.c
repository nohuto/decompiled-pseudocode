/*
 * XREFs of rimHidP_FreeCollectionDescription @ 0x1C00C446C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00C5D50 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall rimHidP_FreeCollectionDescription(struct _HIDP_DEVICE_DESC *a1)
{
  if ( gpfnHidP_FreeCollectionDescription )
    gpfnHidP_FreeCollectionDescription(a1);
}
