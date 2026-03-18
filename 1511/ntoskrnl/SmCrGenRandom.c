/*
 * XREFs of SmCrGenRandom @ 0x14020A9A4
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14065A96C (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14065BF44 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

__int64 __fastcall SmCrGenRandom(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned __int64 ExtensionTable; // rax

  v4 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(ExtensionTable + 160))(0LL, a1, a2, 2LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v4;
}
