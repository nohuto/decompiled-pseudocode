/*
 * XREFs of ?UnpackGameConfigPointer@Internal@ExecutionModel@@YAJ_KIPEA_K@Z @ 0x180010DD8
 * Callers:
 *     ?UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x180010D50 (-UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::UnpackGameConfigPointer(
        ExecutionModel::Internal *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r9

  v4 = *a3;
  if ( *a3 >= a2 || v4 < 0x28 )
    return 2147942487LL;
  *a3 = (unsigned __int64)this + v4;
  return 0LL;
}
