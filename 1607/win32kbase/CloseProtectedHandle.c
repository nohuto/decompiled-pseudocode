/*
 * XREFs of CloseProtectedHandle @ 0x1C0011F88
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0011FC0 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(void *a1)
{
  if ( !a1 )
    return 0;
  SetHandleFlag(a1, 1LL);
  return ObCloseHandle(a1, 1);
}
