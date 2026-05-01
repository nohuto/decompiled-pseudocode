/*
 * XREFs of ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18003F09C
 * Callers:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z @ 0x18003FF60 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000E3D0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::ExternalResourceSet(
        ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  *((_QWORD *)this + 171) = &ExecutionModel::ExternalResourceSet::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
  *((_QWORD *)this + 172) = 0LL;
  *((_QWORD *)this + 173) = 0LL;
  *((_WORD *)this + 696) = 0;
  *((_BYTE *)this + 1394) = 0;
  *((_QWORD *)this + 175) = (char *)this + 1400;
  *((_QWORD *)this + 176) = (char *)this + 1400;
  *((_QWORD *)this + 177) = 0LL;
  *((_QWORD *)this + 183) = 0LL;
  *((_QWORD *)this + 184) = 0LL;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 1424));
  return this;
}
