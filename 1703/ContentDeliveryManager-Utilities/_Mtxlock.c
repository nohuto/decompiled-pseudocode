/*
 * XREFs of _Mtxlock @ 0x18006D158
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x18006AFB4 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
