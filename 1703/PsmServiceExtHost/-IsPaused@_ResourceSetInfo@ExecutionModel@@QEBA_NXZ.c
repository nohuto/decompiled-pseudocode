/*
 * XREFs of ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000E344
 * Callers:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000D334 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::_ResourceSetInfo::IsPaused(ExecutionModel::_ResourceSetInfo *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 1;
  if ( (*((_BYTE *)this + 42) & 8) == 0 )
  {
    if ( *(_DWORD *)this > 0x27u )
      return 0;
    v1 = *(int *)this;
    v2 = 0x8800001000LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
