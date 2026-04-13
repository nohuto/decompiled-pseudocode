/*
 * XREFs of EnterCriticalSection @ 0x180022B2C
 * Callers:
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_EnterCriticalSection(lpCriticalSection);
}
