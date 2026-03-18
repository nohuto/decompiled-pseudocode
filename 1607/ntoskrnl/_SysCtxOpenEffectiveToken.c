/*
 * XREFs of _SysCtxOpenEffectiveToken @ 0x1406DF950
 * Callers:
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x14015A260 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x14015A280 (ZwOpenProcessTokenEx.c)
 */

NTSTATUS __fastcall SysCtxOpenEffectiveToken(__int64 a1, HANDLE *TokenHandle)
{
  NTSTATUS result; // eax

  result = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0x200u, TokenHandle);
  if ( result == -1073741700 )
    return ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, TokenHandle);
  return result;
}
