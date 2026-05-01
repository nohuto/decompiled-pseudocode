/*
 * XREFs of ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180013DF0
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x180006560 (RmgrSrv_RegisterWithServer.c)
 * Callees:
 *     RmpRmSidInitialize @ 0x180004D44 (RmpRmSidInitialize.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800112A8 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        DWORD a2,
        void *Src,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  unsigned int v9; // ebx
  _BYTE pSid[80]; // [rsp+30h] [rbp-88h] BYREF

  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a4 && a5 )
  {
    RmpRmSidInitialize(pSid, Src);
    v9 = ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(this, a2, pSid, a4, a5);
  }
  else
  {
    v9 = -2147024809;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return v9;
}
