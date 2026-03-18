/*
 * XREFs of CloseProtectedHandle @ 0x1C0046BB8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0046C20 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(void *a1)
{
  if ( !a1 )
    return 0;
  SetHandleFlag(a1, 1LL);
  return ObCloseHandle(a1, 1);
}
