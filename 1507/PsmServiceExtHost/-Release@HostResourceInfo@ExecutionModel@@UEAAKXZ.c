/*
 * XREFs of ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180013EA0
 * Callers:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x180004C70 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x1800186AC (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 * Callees:
 *     ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180014258 (--1HostResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::Release(ExecutionModel::HostResourceInfo *this)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < 0 )
    __int2c();
  if ( !v2 && this )
  {
    ExecutionModel::HostResourceInfo::~HostResourceInfo(this);
    operator delete(this);
  }
  return (unsigned int)v2;
}
