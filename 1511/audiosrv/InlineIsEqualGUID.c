/*
 * XREFs of InlineIsEqualGUID @ 0x18004468C
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800445D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIVolumeLimitTracker@@VNil@Details@WRL@Microsoft.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InlineIsEqualGUID(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
