/*
 * XREFs of PipCheckForUnsatisfiedDependencies @ 0x1404E22B4
 * Callers:
 *     PnpCheckForActiveDependencies @ 0x1404E1D24 (PnpCheckForActiveDependencies.c)
 *     PipAttemptDependentStart @ 0x14067BA8C (PipAttemptDependentStart.c)
 * Callees:
 *     PiGetProviderList @ 0x1404E22F4 (PiGetProviderList.c)
 *     PiEnumerateProviderListEntry @ 0x14067B90C (PiEnumerateProviderListEntry.c)
 *     PipIsProviderStarted @ 0x14067BF08 (PipIsProviderStarted.c)
 */

char __fastcall PipCheckForUnsatisfiedDependencies(__int64 a1, unsigned __int8 a2)
{
  _QWORD **ProviderList; // rdi
  char v4; // r11
  _QWORD *v5; // rbx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  ProviderList = (_QWORD **)PiGetProviderList(*(_QWORD *)(a1 + 32));
  v5 = *ProviderList;
  if ( *ProviderList != ProviderList )
  {
    while ( 1 )
    {
      PiEnumerateProviderListEntry(v5, &v9, &v8);
      v5 = (_QWORD *)*v5;
      v7 = v9 ? *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) : 0LL;
      if ( !v9 || !v7 )
        break;
      if ( (a2 & (unsigned __int8)v8 & 3) != 0 )
      {
        if ( !(unsigned __int8)PipIsProviderStarted(v7) )
          return 1;
        v4 = 0;
      }
      if ( v5 == ProviderList )
        return v4;
    }
    return 1;
  }
  return v4;
}
