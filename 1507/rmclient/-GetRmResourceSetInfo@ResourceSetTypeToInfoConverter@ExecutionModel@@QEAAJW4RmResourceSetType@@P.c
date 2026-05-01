/*
 * XREFs of ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800143E8
 * Callers:
 *     RmGetResourceSetTypePolicy @ 0x18000F080 (RmGetResourceSetTypePolicy.c)
 *     ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x180013E50 (-RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResource.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180005B30 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001423C (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180014338 (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::GetRmResourceSetInfo(
        __int64 a1,
        unsigned int a2,
        const struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 result; // rax
  struct RmResourceSetInfo *v7; // r8
  _OWORD v8[22]; // [rsp+20h] [rbp-178h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(a1, a2, v8);
  if ( (int)result >= 0 )
  {
    ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo((ExecutionModel *)v8, a3, v7);
    return 0LL;
  }
  return result;
}
