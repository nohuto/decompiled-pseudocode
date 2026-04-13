/*
 * XREFs of _Mtxlock @ 0x1800246AC
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180023508 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
