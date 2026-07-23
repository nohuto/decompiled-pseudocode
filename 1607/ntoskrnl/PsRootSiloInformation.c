/*
 * XREFs of PsRootSiloInformation @ 0x14067E15C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     PspGetNextSilo @ 0x14055FE9C (PspGetNextSilo.c)
 *     PspIsSiloInSilo @ 0x14067EA9C (PspIsSiloInSilo.c)
 */

__int64 __fastcall PsRootSiloInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // edi
  __int64 CurrentSilo; // r12
  __int64 v8; // rsi
  int v9; // ebx
  __int64 *i; // rcx
  __int64 *NextSilo; // rax
  __int64 *v12; // r8

  v3 = a2;
  v5 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = 0LL;
  v9 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    NextSilo = PspGetNextSilo(i, 0);
    if ( !NextSilo )
      break;
    if ( (unsigned __int8)PspIsSiloInSilo(NextSilo, CurrentSilo, NextSilo) )
    {
      if ( (unsigned __int64)v5 + 4 > v3 )
      {
        v9 = -1073741789;
        ObfDereferenceObjectWithTag(v12, 0x6E457350u);
        break;
      }
      a1[v8 + 1] = *((_DWORD *)v12 + 309);
      v5 += 4;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  if ( v9 >= 0 )
  {
    *a1 = v8;
    *a3 = v5;
  }
  return (unsigned int)v9;
}
