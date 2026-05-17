/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x1800212C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180021380 (ApiSetResolveToHost.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(__int64 a1, _BYTE *a2)
{
  void *ApiSetMap; // rsi
  int v5; // esi
  unsigned __int16 v7; // r8
  _WORD v8[12]; // [rsp+30h] [rbp-18h] BYREF

  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5328, 0, 0, 0, a1);
  v5 = ApiSetResolveToHost((_DWORD)ApiSetMap, a1, 0, (_DWORD)a2, (__int64)v8);
  if ( v5 < 0 || !*a2 )
  {
    v7 = 5331;
    goto LABEL_12;
  }
  if ( v8[0] )
  {
    v7 = 5329;
LABEL_12:
    LdrpLogDllState(0, a1, v7);
    goto LABEL_6;
  }
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5330, 0, 0, 0, a1);
LABEL_6:
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !v8[0] )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0LL;
}
