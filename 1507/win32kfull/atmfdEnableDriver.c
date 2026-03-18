/*
 * XREFs of atmfdEnableDriver @ 0x1C0157370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall atmfdEnableDriver(int a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  engineVersion = a1;
  if ( a2 < 0x10 )
    return 0LL;
  *(_DWORD *)(a3 + 4) = 19;
  *(_QWORD *)(a3 + 8) = &atmfdCallBlock;
  result = 1LL;
  *(_DWORD *)a3 = 196608;
  return result;
}
