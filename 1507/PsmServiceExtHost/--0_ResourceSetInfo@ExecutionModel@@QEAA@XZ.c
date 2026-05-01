/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58
 * Callers:
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180031A38 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180031DE4 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180032124 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800324D4 (-Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEA.c)
 *     ?Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSetInfo@@@Z @ 0x180033040 (-Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSe.c)
 *     ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_KPEA_N@Z @ 0x180034158 (-AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_KPEA_.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetImpl@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x180047BE0 (-NotifyPendingResourceSetTransition@ResourceSetImpl@ExecutionModel@@UEAAJW4Enum@ResourceSetType@.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x18002048C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx

  *((_DWORD *)this + 3) = 101;
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 4) = 32;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  `vector constructor iterator'(
    (ExecutionModel::_ResourceSetInfo *)((char *)this + 64),
    24LL,
    3,
    ExecutionModel::_ResourceInfo::_ResourceInfo);
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 16) = 0;
  v2 = (_DWORD *)((char *)this + 136);
  *((_DWORD *)this + 22) = 1;
  v3 = 48LL;
  *((_DWORD *)this + 28) = 2;
  while ( v3 )
  {
    *v2++ = 101;
    --v3;
  }
  *((_DWORD *)this + 87) = 0;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 26) = 0;
  *((_DWORD *)this + 7) = 1;
  *((_DWORD *)this + 5) = 0;
  return this;
}
