/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x180012150
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180005B30 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180014338 (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSet(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  _BYTE v12[352]; // [rsp+40h] [rbp-1A8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v12);
  result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(a1 + 16, a2, v12);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(
               a1,
               v12,
               a3,
               a4,
               a5,
               a6,
               a7);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
