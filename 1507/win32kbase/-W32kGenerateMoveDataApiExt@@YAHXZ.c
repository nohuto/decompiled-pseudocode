/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C00B5F90
 * Callers:
 *     <none>
 * Callees:
 *     IsW32kGenerateMoveDataSupported_0 @ 0x1C00015E8 (IsW32kGenerateMoveDataSupported_0.c)
 *     W32kGenerateMoveData_0 @ 0x1C00015F0 (W32kGenerateMoveData_0.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  int MoveDataSupported_0; // eax
  unsigned int v1; // ecx

  MoveDataSupported_0 = IsW32kGenerateMoveDataSupported_0();
  v1 = 0;
  if ( MoveDataSupported_0 >= 0 )
    return (unsigned int)W32kGenerateMoveData_0();
  return v1;
}
