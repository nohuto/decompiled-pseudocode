/*
 * XREFs of MiPfnCanBecomeDemandZero @ 0x1400AFAA0
 * Callers:
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiConvertPrivateToDemandZero @ 0x140228598 (MiConvertPrivateToDemandZero.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnCanBecomeDemandZero(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al

  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0 )
  {
    v2 = *(_BYTE *)(a1 + 216) & 7;
    return v2 < 2u && (v2 || !KeGetCurrentThread()->ApcState.Process->SecurePid);
  }
  return *(__int64 *)(a2 + 8) < 0 && (*(_DWORD *)(a2 + 16) & 0x400LL) == 0;
}
