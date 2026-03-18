/*
 * XREFs of ResetInteractionStateInfo @ 0x1800BDA78
 * Callers:
 *     InitializeInteractionStateInfo @ 0x1800A856C (InitializeInteractionStateInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetInteractionStateInfo(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 12) &= 0xFCu;
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
