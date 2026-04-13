/*
 * XREFs of _Mtxdst @ 0x180024688
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x18002354C (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
