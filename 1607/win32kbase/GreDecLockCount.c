/*
 * XREFs of GreDecLockCount @ 0x1C0074B40
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 GreDecLockCount()
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
  {
    result = *(_QWORD *)result;
    if ( result )
      --*(_DWORD *)(result + 104);
  }
  return result;
}
