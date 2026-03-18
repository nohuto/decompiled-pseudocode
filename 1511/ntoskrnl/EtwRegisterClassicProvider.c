/*
 * XREFs of EtwRegisterClassicProvider @ 0x1404CC708
 * Callers:
 *     WmipProcessLegacyEtwRegister @ 0x140544F90 (WmipProcessLegacyEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x1406D0DF8 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
    return EtwpRegisterProvider(a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}
