/*
 * XREFs of SmCrGenRandom @ 0x140259EF4
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1406DD190 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1406DE798 (SmCrEncStart.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

__int64 __fastcall SmCrGenRandom(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned __int64 ExtensionTable; // rax
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned __int64 v7; // rtt

  v4 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(ExtensionTable + 160))(0LL, a1, a2, 2LL);
    v6 = (struct _EX_RUNDOWN_REF *)(SepBCryptExtensionHost + 64);
    _m_prefetchw((const void *)(SepBCryptExtensionHost + 64));
    v7 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v7 - 2, v7) )
      ExfReleaseRundownProtection(v6);
  }
  return v4;
}
