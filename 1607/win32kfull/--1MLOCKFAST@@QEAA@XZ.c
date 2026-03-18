/*
 * XREFs of ??1MLOCKFAST@@QEAA@XZ @ 0x1C01BF4A0
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1C028FC20 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall MLOCKFAST::~MLOCKFAST(MLOCKFAST *this)
{
  GreReleaseHmgrSemaphore(this);
}
