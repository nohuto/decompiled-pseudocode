/*
 * XREFs of GreDecLockCount @ 0x1C000B7B0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
