/*
 * XREFs of EditionInitGlobalCursorSizes @ 0x1401BFA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1401BFAA4 (--0CCursorSizes@@QEAA@XZ.c)
 */

__int64 EditionInitGlobalCursorSizes()
{
  CCursorSizes *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  CCursorSizes *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v0 = (CCursorSizes *)Win32AllocPoolZInit(80LL, 1129607282LL);
  v3 = 0;
  if ( v0 )
    v4 = CCursorSizes::CCursorSizes(v0);
  else
    v4 = 0LL;
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36376) = v4;
  LOBYTE(v3) = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36376) != 0LL;
  return v3;
}
