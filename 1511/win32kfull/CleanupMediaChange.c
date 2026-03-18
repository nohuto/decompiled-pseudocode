/*
 * XREFs of CleanupMediaChange @ 0x1C0114420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR CleanupMediaChange()
{
  LONG_PTR result; // rax

  if ( gpEventMediaChange )
  {
    result = ObfDereferenceObject(gpEventMediaChange);
    gpEventMediaChange = 0LL;
  }
  if ( gMediaChangeMutex )
  {
    result = Win32FreePool(gMediaChangeMutex);
    gMediaChangeMutex = 0LL;
  }
  return result;
}
