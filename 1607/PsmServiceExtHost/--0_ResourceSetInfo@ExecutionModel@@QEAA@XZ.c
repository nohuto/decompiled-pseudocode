/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800107B0
 * Callers:
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180012B18 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180028E30 (RmtSrv_RM_CreateTerminalResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x1800291BC (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 *     ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x18002DFAC (-RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180011660 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  ExecutionModel::_ResourceInfo *v2; // rsi
  __int64 v3; // rdi
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  ExecutionModel::_ResourceSetInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 101;
  v2 = (ExecutionModel::_ResourceSetInfo *)((char *)this + 88);
  *((_DWORD *)this + 3) = 32;
  v3 = 3LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v2);
    v2 = (ExecutionModel::_ResourceInfo *)((char *)v2 + 24);
    --v3;
  }
  while ( v3 );
  v4 = (_DWORD *)((char *)this + 160);
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 45) = 0LL;
  v5 = 48LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 28) = 1;
  *((_DWORD *)this + 34) = 2;
  while ( v5 )
  {
    *v4++ = 101;
    --v5;
  }
  *((_DWORD *)this + 93) = 0;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_DWORD *)this + 8) = 101;
  return result;
}
