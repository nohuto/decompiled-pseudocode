/*
 * XREFs of VfZwTranslateFilePath @ 0x1406D4844
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwTranslateFilePath(_FILE_PATH *a1, ULONG OutputType, _FILE_PATH *a3, ULONG a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
  }
  return pXdvZwTranslateFilePath(a1, OutputType, a3, a4);
}
