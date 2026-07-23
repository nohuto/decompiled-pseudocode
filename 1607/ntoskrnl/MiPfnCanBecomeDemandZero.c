/*
 * XREFs of MiPfnCanBecomeDemandZero @ 0x1401E2874
 * Callers:
 *     MiConvertPrivateToDemandZero @ 0x1401F8668 (MiConvertPrivateToDemandZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPfnCanBecomeDemandZero(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al

  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    if ( *(__int64 *)(a2 + 8) >= 0 )
      return 0LL;
    return (*(_DWORD *)(a2 + 16) & 0x400LL) == 0;
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 184) & 7;
    if ( v2 >= 2u )
      return 0LL;
    if ( v2 )
      return 1LL;
    return KeGetCurrentThread()->ApcState.Process->SecurePid == 0;
  }
}
