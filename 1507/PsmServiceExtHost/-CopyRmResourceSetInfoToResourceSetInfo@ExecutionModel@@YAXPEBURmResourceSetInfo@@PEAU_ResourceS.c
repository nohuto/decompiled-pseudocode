/*
 * XREFs of ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180042DF4
 * Callers:
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180031A38 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180031DE4 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180032124 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800324D4 (-Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEA.c)
 *     ?Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSetInfo@@@Z @ 0x180033040 (-Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSe.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

void __fastcall ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(
        ExecutionModel *this,
        const struct RmResourceSetInfo *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x160uLL);
  *((_QWORD *)a2 + 42) = *((_QWORD *)this + 264);
  *((_QWORD *)a2 + 5) = *((_QWORD *)this + 236);
  *((_QWORD *)a2 + 6) = *((_QWORD *)this + 237);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 463);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 468);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 467);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 471);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this + 476);
  *((_DWORD *)a2 + 86) = *((_DWORD *)this + 530);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 466);
  *(_DWORD *)a2 = *((_DWORD *)this + 464);
  *((_DWORD *)a2 + 82) = *((_DWORD *)this + 525);
  *((_DWORD *)a2 + 83) = *((_DWORD *)this + 526);
  *((_DWORD *)a2 + 87) = *((_DWORD *)this + 531);
  memcpy_s((char *)a2 + 136, 0xC0uLL, (char *)this + 1908, 0xC0uLL);
  memcpy_s((char *)a2 + 64, 0x48uLL, (char *)this + 688, 0x48uLL);
}
