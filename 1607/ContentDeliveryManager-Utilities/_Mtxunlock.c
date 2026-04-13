/*
 * XREFs of _Mtxunlock @ 0x18005669C
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180054480 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
