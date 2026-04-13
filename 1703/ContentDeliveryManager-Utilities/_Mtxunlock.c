/*
 * XREFs of _Mtxunlock @ 0x18006D160
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x18006B038 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxunlock(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}
