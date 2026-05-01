/*
 * XREFs of ?IsReleased@BaseResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18000E958
 * Callers:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800011B4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180010750 (-IsReleased@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::IsReleased(ExecutionModel::BaseResourceSet *this)
{
  __int64 result; // rax

  if ( (*((_BYTE *)this + 1356) & 1) != 0 )
    return 1LL;
  result = 0LL;
  if ( !*((_DWORD *)this + 338) )
    return 1LL;
  return result;
}
