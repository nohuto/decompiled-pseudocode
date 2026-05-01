/*
 * XREFs of ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000E31C
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180001670 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000D334 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180012900 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::_ResourceSetInfo::IsFrozen(ExecutionModel::_ResourceSetInfo *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 1;
  if ( (*((_BYTE *)this + 40) & 0x10) == 0 )
  {
    if ( *(_DWORD *)this > 0x28u )
      return 0;
    v1 = *(int *)this;
    v2 = 0x11000002000LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
