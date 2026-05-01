/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180013330
 * Callers:
 *     <none>
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180004630 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180015314 (-GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSetFromSponsorProcess(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 result; // rax
  _BYTE v18[368]; // [rsp+80h] [rbp-1B8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v18);
  result = ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(a1 + 16, a2, v18);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64, __int64, __int64, int, int, __int64, int, __int64, __int64, __int64))(*(_QWORD *)a1 + 288LL))(
               a1,
               v18,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
