/*
 * XREFs of FreeHook @ 0x1C00A4550
 * Callers:
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00A4690 (zzzUnhookWindowsHookEx.c)
 *     FreeThreadsWindowHooks @ 0x1C00FEB20 (FreeThreadsWindowHooks.c)
 * Callees:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00A444C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00A45B0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     RemoveHmodDependency @ 0x1C00A758C (RemoveHmodDependency.c)
 */

__int64 __fastcall FreeHook(struct tagHOOK *a1)
{
  int v1; // eax
  struct tagTHREADINFO *v3; // rcx
  __int64 result; // rax

  v1 = *((_DWORD *)a1 + 16);
  if ( (v1 & 0x80u) == 0 )
  {
    *((_DWORD *)a1 + 16) = v1 | 0x80;
    v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 9);
    if ( !v3 )
      v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    CheckWHFBits(v3, *((_DWORD *)a1 + 12));
  }
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    UnlinkHook(a1);
    if ( *((int *)a1 + 17) >= 0 )
      RemoveHmodDependency();
    return HMFreeObject(a1);
  }
  return result;
}
