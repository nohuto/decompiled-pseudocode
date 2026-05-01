/*
 * XREFs of ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18000FDF0
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180012F20 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18000E370 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000E880 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::ResourceSet(ExecutionModel::ResourceSet *this)
{
  __int64 v2; // r9

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *((_DWORD *)this + 350) = 2;
  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable';
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 174) = 0LL;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::ResourceSet *)((char *)this + 1408));
  *((_QWORD *)this + 223) = v2;
  *((_QWORD *)this + 224) = v2;
  *((_QWORD *)this + 228) = v2;
  *((_QWORD *)this + 230) = -1LL;
  *((_DWORD *)this + 458) = v2;
  *((_QWORD *)this + 231) = v2;
  *((_QWORD *)this + 232) = v2;
  *((_QWORD *)this + 225) = 0LL;
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  *((_DWORD *)this + 351) = 4;
  *((_QWORD *)this + 171) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  return this;
}
