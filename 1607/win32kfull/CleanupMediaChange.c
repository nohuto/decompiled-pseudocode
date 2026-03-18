/*
 * XREFs of CleanupMediaChange @ 0x1C0135850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CleanupMediaChange(__int64 a1, __int64 a2, __int64 a3)
{
  LONG_PTR result; // rax

  if ( gpEventMediaChange )
  {
    result = ObfDereferenceObject(gpEventMediaChange);
    gpEventMediaChange = 0LL;
  }
  if ( gMediaChangeMutex )
  {
    result = Win32FreePool(gMediaChangeMutex, a2, a3);
    gMediaChangeMutex = 0LL;
  }
  return result;
}
