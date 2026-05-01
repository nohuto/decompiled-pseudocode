/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18000E370
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180004030 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18000FDF0 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800102CC (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180029A50 (RmtSrv_RM_CreateTerminalResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180029E08 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 *     ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x18002D410 (-RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceSetInfo *__fastcall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  char *v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  ExecutionModel::_ResourceSetInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 101;
  *((_DWORD *)this + 3) = 32;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = 0LL;
  v2 = (char *)this + 88;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v3 = 3LL;
  do
  {
    *(_DWORD *)v2 = -1;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 101;
    *((_WORD *)v2 + 10) = 0;
    v2 += 24;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 88) = 0;
  v4 = (_DWORD *)((char *)this + 160);
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 28) = 1;
  v5 = 48LL;
  *((_DWORD *)this + 22) = 0;
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
