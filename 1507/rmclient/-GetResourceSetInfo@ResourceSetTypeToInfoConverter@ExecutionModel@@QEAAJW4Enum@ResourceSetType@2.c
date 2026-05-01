/*
 * XREFs of ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180014338
 * Callers:
 *     RmGetResourceSetInfoPolicy @ 0x18000F010 (RmGetResourceSetInfoPolicy.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180011F20 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBGK_KPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180012040 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Executi_ea_180012040.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x180012150 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Executi_ea_180012150.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180012600 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBGK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180012730 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@Resou_ea_180012730.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x180012C00 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800143E8 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 result; // rax
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm1

  if ( a2 > 0x38 )
    return 2147942487LL;
  v4 = (_OWORD *)(a1 + 352LL * (int)a2);
  v5 = 2LL;
  do
  {
    *a3 = *v4;
    a3[1] = v4[1];
    a3[2] = v4[2];
    a3[3] = v4[3];
    a3[4] = v4[4];
    a3[5] = v4[5];
    a3[6] = v4[6];
    a3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(a3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *a3 = *v4;
  a3[1] = v4[1];
  a3[2] = v4[2];
  a3[3] = v4[3];
  a3[4] = v4[4];
  v7 = v4[5];
  result = 0LL;
  a3[5] = v7;
  return result;
}
