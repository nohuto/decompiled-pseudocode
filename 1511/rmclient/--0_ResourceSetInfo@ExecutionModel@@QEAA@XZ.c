/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180004630
 * Callers:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800038C0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180012C50 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBGK_KPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180012D70 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Executi_ea_180012D70.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x180012E80 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Executi_ea_180012E80.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180013330 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBGK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x180013460 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@Resou_ea_180013460.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x180013930 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180013E00 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800153CC (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  char *v1; // rax
  int v2; // edx
  _QWORD *v3; // rax
  __int64 v4; // rdx

  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  v1 = (char *)this + 72;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 3) = 101;
  v2 = 2;
  *((_DWORD *)this + 4) = 32;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  do
  {
    --v2;
    *(_DWORD *)v1 = -1;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_DWORD *)v1 + 4) = 101;
    *((_WORD *)v1 + 10) = 0;
    v1 += 24;
  }
  while ( v2 >= 0 );
  *((_QWORD *)this + 42) = 0LL;
  v3 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 43) = 0LL;
  v4 = 3LL;
  *((_DWORD *)this + 24) = 1;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 30) = 2;
  do
  {
    *v3 = 0x6500000065LL;
    v3[1] = 0x6500000065LL;
    v3[2] = 0x6500000065LL;
    v3 += 8;
    *(v3 - 5) = 0x6500000065LL;
    *(v3 - 4) = 0x6500000065LL;
    *(v3 - 3) = 0x6500000065LL;
    *(v3 - 2) = 0x6500000065LL;
    *(v3 - 1) = 0x6500000065LL;
    --v4;
  }
  while ( v4 );
  *((_DWORD *)this + 89) = 0;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 26) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 7) = 1;
  *((_DWORD *)this + 5) = 0;
  return this;
}
