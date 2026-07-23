/*
 * XREFs of PipCheckForUnsatisfiedDependencies @ 0x1403F3B48
 * Callers:
 *     PnpCheckForActiveDependencies @ 0x1403F371C (PnpCheckForActiveDependencies.c)
 *     PipAttemptDependentStart @ 0x14062AF7C (PipAttemptDependentStart.c)
 * Callees:
 *     PiGetProviderList @ 0x1403F3B88 (PiGetProviderList.c)
 *     PiEnumerateProviderListEntry @ 0x14062ADFC (PiEnumerateProviderListEntry.c)
 *     PipIsProviderStarted @ 0x14062B3F8 (PipIsProviderStarted.c)
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
