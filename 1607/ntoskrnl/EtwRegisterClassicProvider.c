/*
 * XREFs of EtwRegisterClassicProvider @ 0x140492C2C
 * Callers:
 *     WmipProcessLegacyEtwRegister @ 0x140574F70 (WmipProcessLegacyEtwRegister.c)
 * Callees:
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, __int128 *, __int64),
        __int64 a4,
        __int64 *a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
    return EtwpRegisterProvider(EtwpHostSiloState, a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}
