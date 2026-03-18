/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000E11C
 * Callers:
 *     VidSchSetVidPnSourceAddress @ 0x1C0079440 (VidSchSetVidPnSourceAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  return ((__int64 (__fastcall **)(ADAPTER_DISPLAY *, struct _DXGKARG_SETVIDPNSOURCEADDRESS *))DxgCoreInterface)[22](
           this,
           a2);
}
