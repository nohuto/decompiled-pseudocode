/*
 * XREFs of PpmIdleCheckProcessorStateEligibility @ 0x140200128
 * Callers:
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x140200714 (PpmIdleSelectCoordinatedProcessorDependency.c)
 * Callees:
 *     PpmCheckIdleVeto @ 0x1401FF5D4 (PpmCheckIdleVeto.c)
 */

__int64 __fastcall PpmIdleCheckProcessorStateEligibility(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned __int64 v11; // r9
  __int64 v12; // r11

  v6 = *(_QWORD *)(a1 + 23808);
  v7 = 248LL * a5;
  if ( *(_BYTE *)(v7 + v6 + 1047) )
    return 2147483658LL;
  if ( a2 != -1 && a5 > a2 )
    return 2147483656LL;
  if ( !*(_BYTE *)(v7 + v6 + 1042) && *(_BYTE *)(v6 + 523) )
    return 2147483655LL;
  if ( a6 )
    goto LABEL_16;
  v9 = PpmCheckIdleVeto(v7 + v6 + 1000);
  if ( v9 )
    return v9 | 0x100000000LL;
  if ( *(_DWORD *)(v12 + v6 + 984) > v10 )
    return 2147483650LL;
  if ( *(unsigned int *)(v12 + v6 + 988) > v11 )
    return 2147483651LL;
LABEL_16:
  result = *(_QWORD *)(v6 + 432);
  if ( result )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))result)(*(_QWORD *)(v6 + 472), a5);
  return result;
}
