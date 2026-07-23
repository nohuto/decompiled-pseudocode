/*
 * XREFs of PopFxAcpiForwardRequestCommon @ 0x14020E3E0
 * Callers:
 *     PopFxRequestCommon @ 0x140203854 (PopFxRequestCommon.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PopFxAcpiForwardRequestCommon(int a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 0x20uLL);
  LODWORD(v5[0]) = 1;
  LODWORD(v5[2]) = a1;
  if ( a1 != 1 )
    return 3221225659LL;
  v5[3] = a2;
  return PopFxPlatformInterface(v5);
}
