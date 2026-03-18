/*
 * XREFs of EtwRegisterClassicProvider @ 0x1405817D4
 * Callers:
 *     WmipProcessLegacyEtwRegister @ 0x1405BBEFC (WmipProcessLegacyEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x1407549C0 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(char *, __int64, __int128 *, __int64),
        __int64 a4,
        __int64 *a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
    return EtwpRegisterProvider(a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}
