/*
 * XREFs of _Mtxdst @ 0x18006D140
 * Callers:
 *     ??1_Init_locks@std@@QEAA@XZ @ 0x18006AFF4 (--1_Init_locks@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
