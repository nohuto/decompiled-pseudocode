/*
 * XREFs of GreDecNonRBLockCount @ 0x1C00749A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreDecNonRBLockCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( result )
    --*(_DWORD *)(result + 108);
  return result;
}
