/*
 * XREFs of ??_GHostResources@ExecutionModel@@QEAAPEAXI@Z @ 0x180047850
 * Callers:
 *     ?Release@HostResources@ExecutionModel@@UEAAKXZ @ 0x180018220 (-Release@HostResources@ExecutionModel@@UEAAKXZ.c)
 *     ?CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesProvider@1@PEAPEAVHostResources@1@@Z @ 0x180020B5C (-CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesPro.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1HostResources@ExecutionModel@@QEAA@XZ @ 0x180047780 (--1HostResources@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::HostResources *__fastcall ExecutionModel::HostResources::`scalar deleting destructor'(
        ExecutionModel::HostResources *this)
{
  ExecutionModel::HostResources::~HostResources(this);
  operator delete(this);
  return this;
}
