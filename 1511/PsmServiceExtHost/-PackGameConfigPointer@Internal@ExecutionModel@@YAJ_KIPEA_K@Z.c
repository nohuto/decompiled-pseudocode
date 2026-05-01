/*
 * XREFs of ?PackGameConfigPointer@Internal@ExecutionModel@@YAJ_KIPEA_K@Z @ 0x18004BA50
 * Callers:
 *     ?PackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x18004B9CC (-PackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::PackGameConfigPointer(
        ExecutionModel::Internal *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r9

  v4 = *a3 - (_QWORD)this;
  if ( v4 >= a2 || v4 < 0x28 )
    return 2147942487LL;
  *a3 = v4;
  return 0LL;
}
