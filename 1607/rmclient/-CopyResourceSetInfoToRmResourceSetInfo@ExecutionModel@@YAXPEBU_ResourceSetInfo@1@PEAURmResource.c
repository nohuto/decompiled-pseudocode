/*
 * XREFs of ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000CE40
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000B3EC (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18000BA10 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000C2E0 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x18000D0B0 (-GetRmResourceSetInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 * Callees:
 *     memset_0 @ 0x1800066EC (memset_0.c)
 */

void __fastcall ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(
        ExecutionModel *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct RmResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x5A8uLL);
  *((_QWORD *)a2 + 179) = *((_QWORD *)this + 45);
  *((_QWORD *)a2 + 152) = *((_QWORD *)this + 8);
  *((_QWORD *)a2 + 153) = *((_QWORD *)this + 9);
  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 293) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 292) = *((_DWORD *)this + 3);
  *(_OWORD *)((char *)a2 + 1176) = *(_OWORD *)((char *)this + 24);
  *((_WORD *)a2 + 596) = *((_WORD *)this + 20);
  *((_BYTE *)a2 + 1194) = *((_BYTE *)this + 42);
  *((_DWORD *)a2 + 299) = *((_DWORD *)this + 11);
  *((_DWORD *)a2 + 300) = *((_DWORD *)this + 12);
  *((_QWORD *)a2 + 151) = *((_QWORD *)this + 7);
  *((_DWORD *)a2 + 308) = *((_DWORD *)this + 20);
  *((_DWORD *)a2 + 360) = *((_DWORD *)this + 92);
  *((_DWORD *)a2 + 290) = *(_DWORD *)this;
  *((_DWORD *)a2 + 357) = *((_DWORD *)this + 88);
  *((_DWORD *)a2 + 361) = *((_DWORD *)this + 93);
  memcpy_s((char *)a2 + 1236, 0xC0uLL, (char *)this + 160, 0xC0uLL);
  memcpy_s((char *)a2 + 8, 0x480uLL, (char *)this + 88, 0x48uLL);
}
