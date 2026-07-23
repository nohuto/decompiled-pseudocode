/*
 * XREFs of ZwAlpcCreateSectionView @ 0x14017FF30
 * Callers:
 *     VfZwAlpcCreateSectionView @ 0x14075517C (VfZwAlpcCreateSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
