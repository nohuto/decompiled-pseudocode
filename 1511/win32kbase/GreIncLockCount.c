/*
 * XREFs of GreIncLockCount @ 0x1C0071100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIncLockCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( result )
  {
    result = *(_QWORD *)result;
    if ( result )
      ++*(_DWORD *)(result + 104);
  }
  return result;
}
