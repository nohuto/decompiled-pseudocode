/*
 * XREFs of DeleteCriticalSection @ 0x180022B08
 * Callers:
 *     sub_1800219CC @ 0x1800219CC (sub_1800219CC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}
