/*
 * XREFs of _Mtxlock @ 0x18005668C
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800543F0 (--0_Lockit@std@@QEAA@H@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Mtxlock(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}
