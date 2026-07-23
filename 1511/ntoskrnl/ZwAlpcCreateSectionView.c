/*
 * XREFs of ZwAlpcCreateSectionView @ 0x140151560
 * Callers:
 *     VfZwAlpcCreateSectionView @ 0x1406D15B4 (VfZwAlpcCreateSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
