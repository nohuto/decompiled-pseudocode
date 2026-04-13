/*
 * XREFs of _Mtxunlock @ 0x1800246BC
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180023598 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
