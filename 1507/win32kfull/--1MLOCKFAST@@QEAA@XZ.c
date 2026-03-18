/*
 * XREFs of ??1MLOCKFAST@@QEAA@XZ @ 0x1C01C12FC
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1C02910C0 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MLOCKFAST::~MLOCKFAST(MLOCKFAST *this)
{
  GreReleaseHmgrSemaphore(this);
}
