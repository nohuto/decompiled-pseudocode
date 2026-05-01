/*
 * XREFs of ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180047D64
 * Callers:
 *     ?Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KPEAHPEBKPEAK@Z @ 0x180038C58 (-Handle_RM_AcquireResourceSet2@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEB.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_GUID@@PEAHPEBKPEAK@Z @ 0x180039004 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBU_.c)
 *     ?Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@E0PEBGPEAEKKK_KKPEAHPEBKPEAK@Z @ 0x180039344 (-Handle_RM_AcquireResourceSetFromSponsorProcess@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResou.c)
 *     ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800396F4 (-Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEA.c)
 *     ?Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSetInfo@@@Z @ 0x18003A268 (-Handle_RS_NotifyPendingResourceSetTransition@ResourceManagerServerProxy@@QEAAJKPEAURmResourceSe.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

void __fastcall ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(
        ExecutionModel *this,
        const struct RmResourceSetInfo *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x168uLL);
  *((_QWORD *)a2 + 43) = *((_QWORD *)this + 265);
  *((_QWORD *)a2 + 6) = *((_QWORD *)this + 237);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 238);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 463);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 468);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 467);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 468);
  *((_WORD *)a2 + 12) = *((_WORD *)this + 938);
  *((_BYTE *)a2 + 26) = *((_BYTE *)this + 1878);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 470);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 471);
  *((_QWORD *)a2 + 5) = *((_QWORD *)this + 236);
  *((_DWORD *)a2 + 16) = *((_DWORD *)this + 478);
  *((_DWORD *)a2 + 88) = *((_DWORD *)this + 532);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 466);
  *(_DWORD *)a2 = *((_DWORD *)this + 464);
  *((_DWORD *)a2 + 84) = *((_DWORD *)this + 527);
  *((_DWORD *)a2 + 85) = *((_DWORD *)this + 528);
  *((_DWORD *)a2 + 89) = *((_DWORD *)this + 533);
  memcpy_s((char *)a2 + 144, 0xC0uLL, (char *)this + 1916, 0xC0uLL);
  memcpy_s((char *)a2 + 72, 0x48uLL, (char *)this + 688, 0x48uLL);
}
