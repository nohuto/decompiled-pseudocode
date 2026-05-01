/*
 * XREFs of ?GetResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18000CFF0
 * Callers:
 *     RmGetResourceSetInfoPolicy @ 0x18000A9B0 (RmGetResourceSetInfoPolicy.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x18000B1A0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18000B2E0 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x18000BC60 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000D0B0 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::GetResourceSetInfo(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1

  if ( a2 > 0x38 )
    return 2147942487LL;
  v4 = (_OWORD *)(a1 + 376LL * (int)a2);
  v5 = 2LL;
  do
  {
    *(_OWORD *)a3 = *v4;
    *(_OWORD *)(a3 + 16) = v4[1];
    *(_OWORD *)(a3 + 32) = v4[2];
    *(_OWORD *)(a3 + 48) = v4[3];
    *(_OWORD *)(a3 + 64) = v4[4];
    *(_OWORD *)(a3 + 80) = v4[5];
    *(_OWORD *)(a3 + 96) = v4[6];
    a3 += 128LL;
    v6 = v4[7];
    v4 += 8;
    *(_OWORD *)(a3 - 16) = v6;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)a3 = *v4;
  *(_OWORD *)(a3 + 16) = v4[1];
  *(_OWORD *)(a3 + 32) = v4[2];
  *(_OWORD *)(a3 + 48) = v4[3];
  *(_OWORD *)(a3 + 64) = v4[4];
  *(_OWORD *)(a3 + 80) = v4[5];
  *(_OWORD *)(a3 + 96) = v4[6];
  *(_QWORD *)(a3 + 112) = *((_QWORD *)v4 + 14);
  return 0LL;
}
