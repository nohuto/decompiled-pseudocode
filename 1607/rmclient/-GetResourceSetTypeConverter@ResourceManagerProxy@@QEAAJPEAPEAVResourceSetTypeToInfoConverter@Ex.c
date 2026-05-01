/*
 * XREFs of ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000A6E8
 * Callers:
 *     RmGetResourceSetInfoPolicy @ 0x18000A9B0 (RmGetResourceSetInfoPolicy.c)
 *     RmGetResourceSetTypePolicy @ 0x18000AA20 (RmGetResourceSetTypePolicy.c)
 * Callees:
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180004FB0 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x1800050A0 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x1800052E0 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
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
