/*
 * XREFs of ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x180019344
 * Callers:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x18001939C (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000E880 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::ExternalResourceSet(
        ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet *result; // rax

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  *((_QWORD *)this + 171) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  *((_QWORD *)this + 173) = (char *)this + 1384;
  *((_QWORD *)this + 174) = (char *)this + 1384;
  *((_QWORD *)this + 175) = 0LL;
  result = this;
  *((_QWORD *)this + 176) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  *((_DWORD *)this + 356) = 0;
  return result;
}
