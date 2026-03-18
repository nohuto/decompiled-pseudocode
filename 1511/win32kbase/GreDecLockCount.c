/*
 * XREFs of GreDecLockCount @ 0x1C006E210
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDecLockCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( result )
  {
    result = *(_QWORD *)result;
    if ( result )
      --*(_DWORD *)(result + 104);
  }
  return result;
}
