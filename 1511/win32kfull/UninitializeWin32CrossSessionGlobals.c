/*
 * XREFs of UninitializeWin32CrossSessionGlobals @ 0x1C01143A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32DestroySection @ 0x1C01D3948 (Win32DestroySection.c)
 */

NTSTATUS UninitializeWin32CrossSessionGlobals()
{
  NTSTATUS result; // eax

  if ( gpxsGlobals )
    result = MmUnmapViewInSessionSpace(gpxsGlobals);
  if ( gxsSection )
    result = Win32DestroySection(gxsSection);
  if ( gxsSectionHandle )
    return ZwClose(gxsSectionHandle);
  return result;
}
