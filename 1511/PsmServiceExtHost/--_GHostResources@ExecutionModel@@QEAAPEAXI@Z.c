/*
 * XREFs of ??_GHostResources@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D488
 * Callers:
 *     ?Release@HostResources@ExecutionModel@@UEAAKXZ @ 0x18001A070 (-Release@HostResources@ExecutionModel@@UEAAKXZ.c)
 *     ?CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesProvider@1@PEAPEAVHostResources@1@@Z @ 0x180025368 (-CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesPro.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??1HostResources@ExecutionModel@@QEAA@XZ @ 0x18004D3A4 (--1HostResources@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::HostResources *__fastcall ExecutionModel::HostResources::`scalar deleting destructor'(
        ExecutionModel::HostResources *this)
{
  ExecutionModel::HostResources::~HostResources(this);
  operator delete(this);
  return this;
}
