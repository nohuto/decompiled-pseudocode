/*
 * XREFs of ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001514C
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800125E0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x1800129A0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_1800129A0.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180012F60 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x180013780 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180014420 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800153CC (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     memset_0 @ 0x1800095EC (memset_0.c)
 */

void __fastcall ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(
        ExecutionModel *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x858uLL);
  *((_QWORD *)a2 + 265) = *((_QWORD *)this + 43);
  *((_QWORD *)a2 + 237) = *((_QWORD *)this + 6);
  *((_QWORD *)a2 + 238) = *((_QWORD *)this + 7);
  *((_DWORD *)a2 + 463) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 468) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 467) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 468) = *((_DWORD *)this + 5);
  *((_WORD *)a2 + 938) = *((_WORD *)this + 12);
  *((_BYTE *)a2 + 1878) = *((_BYTE *)this + 26);
  *((_DWORD *)a2 + 470) = *((_DWORD *)this + 7);
  *((_DWORD *)a2 + 471) = *((_DWORD *)this + 8);
  *((_QWORD *)a2 + 236) = *((_QWORD *)this + 5);
  *((_DWORD *)a2 + 478) = *((_DWORD *)this + 16);
  *((_DWORD *)a2 + 532) = *((_DWORD *)this + 88);
  *((_DWORD *)a2 + 466) = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 464) = *(_DWORD *)this;
  *((_DWORD *)a2 + 527) = *((_DWORD *)this + 84);
  *((_DWORD *)a2 + 528) = *((_DWORD *)this + 85);
  *((_DWORD *)a2 + 533) = *((_DWORD *)this + 89);
  memcpy_s((char *)a2 + 1916, 0xC0uLL, (char *)this + 144, 0xC0uLL);
  memcpy_s((char *)a2 + 688, 0x480uLL, (char *)this + 72, 0x48uLL);
}
