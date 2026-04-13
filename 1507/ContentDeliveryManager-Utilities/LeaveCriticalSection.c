/*
 * XREFs of LeaveCriticalSection @ 0x180022B3C
 * Callers:
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180021A18 (--1_Lockit@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_LeaveCriticalSection(lpCriticalSection);
}
