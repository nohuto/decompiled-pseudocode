/*
 * XREFs of ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18002CB60
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpActivityHostUpdateCommitUseAsync @ 0x18002F7EC (RmpActivityHostUpdateCommitUseAsync.c)
 */

int __fastcall ExecutionModel::ResourceManager::OnProcessCommitWarning(
        ExecutionModel::ResourceManager *this,
        int a2,
        __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  volatile signed __int32 *v7; // rbx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int8 v14[560]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+170h] BYREF
  int *v16; // [rsp+290h] [rbp+190h]
  int v17; // [rsp+298h] [rbp+198h]
  int v18; // [rsp+29Ch] [rbp+19Ch]
  PVOID *p_P; // [rsp+2A0h] [rbp+1A0h]
  int v20; // [rsp+2A8h] [rbp+1A8h]
  int v21; // [rsp+2ACh] [rbp+1ACh]
  __int64 *v22; // [rsp+2B0h] [rbp+1B0h]
  int v23; // [rsp+2B8h] [rbp+1B8h]
  int v24; // [rsp+2BCh] [rbp+1BCh]
  __int64 v25; // [rsp+300h] [rbp+200h] BYREF

  v25 = a3;
  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v14, 0, 0x228uLL);
  v5 = *((_QWORD *)this + 27);
  *(_DWORD *)v14 = a2;
  v6 = RmpActivityHostFindByTypeAndIdentifier(v5, 1, v14, (volatile signed __int32 **)&P);
  v7 = (volatile signed __int32 *)P;
  v12 = v6;
  if ( v6 >= 0 )
  {
    RmpActivityHostUpdateCommitUseAsync(P);
    v12 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v7 )
    RmpObjectRelease(v7);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v12;
    p_P = &P;
    v22 = &v25;
    v17 = (int)v8;
    LODWORD(P) = a2;
    v20 = (int)v8;
    v23 = 8;
    TlgWrite(v8, &unk_18003FF78, v9, v10, 5u, &pData);
  }
  return v12 | 0x10000000;
}
