/*
 * XREFs of ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180012B18
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180015470 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PE.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800107B0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180011100 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::ResourceSet(ExecutionModel::ResourceSet *this)
{
  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *((_DWORD *)this + 352) = 2;
  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  *((_QWORD *)this + 171) = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::IResourceSet'};
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 175) = 0LL;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::ResourceSet *)((char *)this + 1416));
  *((_QWORD *)this + 224) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  *((_QWORD *)this + 229) = 0LL;
  *((_QWORD *)this + 233) = -1LL;
  *((_DWORD *)this + 460) = 0;
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 234) = (char *)this + 1872;
  *((_QWORD *)this + 235) = (char *)this + 1872;
  *((_QWORD *)this + 236) = 0LL;
  *((_QWORD *)this + 237) = (char *)this + 1896;
  *((_QWORD *)this + 238) = (char *)this + 1896;
  *((_QWORD *)this + 239) = 0LL;
  *((_DWORD *)this + 480) = 0;
  *((_DWORD *)this + 482) = 0;
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  *((_QWORD *)this + 228) = 0LL;
  *((_DWORD *)this + 353) = 4;
  *((_QWORD *)this + 172) = 0LL;
  *((_QWORD *)this + 173) = 0LL;
  return this;
}
