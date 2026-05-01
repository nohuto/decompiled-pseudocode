/*
 * XREFs of ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x18003835C
 * Callers:
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180029A50 (RmtSrv_RM_CreateTerminalResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180029E08 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(
        ExecutionModel *this,
        const struct RmResourceSetInfo *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x178uLL);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 179);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 152);
  *((_QWORD *)a2 + 9) = *((_QWORD *)this + 153);
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 293);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 292);
  *(_OWORD *)((char *)a2 + 24) = *(_OWORD *)((char *)this + 1176);
  *((_WORD *)a2 + 20) = *((_WORD *)this + 596);
  *((_BYTE *)a2 + 42) = *((_BYTE *)this + 1194);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 299);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 300);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 151);
  *((_DWORD *)a2 + 20) = *((_DWORD *)this + 308);
  *((_DWORD *)a2 + 92) = *((_DWORD *)this + 360);
  *(_DWORD *)a2 = *((_DWORD *)this + 290);
  *((_DWORD *)a2 + 88) = *((_DWORD *)this + 357);
  *((_DWORD *)a2 + 93) = *((_DWORD *)this + 361);
  memcpy_s((char *)a2 + 160, 0xC0uLL, (char *)this + 1236, 0xC0uLL);
  memcpy_s((char *)a2 + 88, 0x48uLL, (char *)this + 8, 0x48uLL);
}
