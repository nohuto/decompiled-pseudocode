/*
 * XREFs of CloseProtectedHandle @ 0x1C0052440
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C00524A0 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(void *a1)
{
  if ( !a1 )
    return 0;
  SetHandleFlag(a1, 1LL);
  return ObCloseHandle(a1, 1);
}
