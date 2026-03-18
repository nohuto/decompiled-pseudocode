/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0088810
 * Callers:
 *     GreSetupDCAttributes @ 0x1C0025D50 (GreSetupDCAttributes.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0083B80 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
}
