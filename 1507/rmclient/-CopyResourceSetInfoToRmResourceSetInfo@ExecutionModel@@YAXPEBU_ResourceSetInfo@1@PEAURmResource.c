/*
 * XREFs of ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001423C
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800118B0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIR.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x180011C70 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_180011C70.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180012230 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Exec.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x180012A50 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800136D0 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x1800143E8 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 */

void __fastcall ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(
        ExecutionModel *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x850uLL);
  *((_QWORD *)a2 + 264) = *((_QWORD *)this + 42);
  *((_QWORD *)a2 + 236) = *((_QWORD *)this + 5);
  *((_QWORD *)a2 + 237) = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 463) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 468) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 467) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 471) = *((_DWORD *)this + 8);
  *((_DWORD *)a2 + 476) = *((_DWORD *)this + 14);
  *((_DWORD *)a2 + 530) = *((_DWORD *)this + 86);
  *((_DWORD *)a2 + 466) = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 464) = *(_DWORD *)this;
  *((_DWORD *)a2 + 525) = *((_DWORD *)this + 82);
  *((_DWORD *)a2 + 526) = *((_DWORD *)this + 83);
  *((_DWORD *)a2 + 531) = *((_DWORD *)this + 87);
  memcpy_s((char *)a2 + 1908, 0xC0uLL, (char *)this + 136, 0xC0uLL);
  memcpy_s((char *)a2 + 688, 0x480uLL, (char *)this + 64, 0x48uLL);
}
