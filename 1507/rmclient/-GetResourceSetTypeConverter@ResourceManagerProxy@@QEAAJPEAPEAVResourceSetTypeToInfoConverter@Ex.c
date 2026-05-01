/*
 * XREFs of ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000EA20
 * Callers:
 *     RmGetResourceSetInfoPolicy @ 0x18000F010 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000F080 (RmGetResourceSetTypePolicy.c)
 * Callees:
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180007570 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x180007660 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180007860 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall ResourceManagerProxy::GetResourceSetTypeConverter(
        ResourceManagerProxy *this,
        struct ExecutionModel::ResourceSetTypeToInfoConverter **a2)
{
  int DeviceTier; // eax
  const unsigned __int16 *DeviceTierName; // rax
  int v6; // edi

  RtlAcquireSRWLockExclusive((char *)this + 8);
  if ( *((_BYTE *)this + 24) )
    goto LABEL_4;
  DeviceTier = RmpGetDeviceTier();
  DeviceTierName = RmpGetDeviceTierNameEx(DeviceTier);
  v6 = ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
         (ResourceManagerProxy *)((char *)this + 32),
         DeviceTierName);
  if ( v6 >= 0 )
  {
    *((_BYTE *)this + 24) = 1;
LABEL_4:
    v6 = 0;
    *a2 = (ResourceManagerProxy *)((char *)this + 32);
  }
  RtlReleaseSRWLockExclusive((char *)this + 8);
  return (unsigned int)v6;
}
