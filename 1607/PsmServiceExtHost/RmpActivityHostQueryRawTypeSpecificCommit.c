/*
 * XREFs of RmpActivityHostQueryRawTypeSpecificCommit @ 0x18002F4C4
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18003571C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 * Callees:
 *     RmpSystemQueryActivityHostRawCommit @ 0x180037C64 (RmpSystemQueryActivityHostRawCommit.c)
 */

__int64 __fastcall RmpActivityHostQueryRawTypeSpecificCommit(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  result = RmpSystemQueryActivityHostRawCommit(a1, &v5, &v6);
  if ( (int)result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
      *a2 = v5;
    else
      *a2 = v5 + v6;
    return 0LL;
  }
  return result;
}
