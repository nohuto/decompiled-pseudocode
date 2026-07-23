/*
 * XREFs of ExpFindHost @ 0x140553AB8
 * Callers:
 *     ExRegisterExtension @ 0x140553780 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140553960 (ExRegisterHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpFindHost(__int16 a1, __int16 a2)
{
  __int64 result; // rax

  for ( result = ExpHostList; (__int64 *)result != &ExpHostList; result = *(_QWORD *)result )
  {
    if ( *(_WORD *)(result + 24) == a1 && *(_WORD *)(result + 26) == a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(result + 16));
      return result;
    }
  }
  return 0LL;
}
