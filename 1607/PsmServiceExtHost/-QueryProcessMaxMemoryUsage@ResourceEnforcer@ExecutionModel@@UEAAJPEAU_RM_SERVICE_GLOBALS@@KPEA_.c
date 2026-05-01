/*
 * XREFs of ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_SERVICE_GLOBALS@@KPEA_K@Z @ 0x18002A250
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _TlgCreateSz @ 0x18002B6A4 (_TlgCreateSz.c)
 */

int __fastcall ExecutionModel::ResourceEnforcer::QueryProcessMaxMemoryUsage(
        ExecutionModel::ResourceEnforcer *this,
        struct _RM_SERVICE_GLOBALS *a2,
        int a3,
        unsigned __int64 *a4)
{
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // r9d
  TraceLoggingHProvider v11; // rcx
  LPCGUID v12; // r8
  LPCGUID cData; // r9
  NTSTATUS InformationJobObject; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE JobInformation[136]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v19[560]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+300h] [rbp+200h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+320h] [rbp+220h]
  int v22; // [rsp+328h] [rbp+228h]
  int v23; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+330h] [rbp+230h] BYREF

  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v19, 0, 0x228uLL);
  *(_DWORD *)v19 = a3;
  v7 = RmpActivityHostFindByTypeAndIdentifier((__int64)a2, 1, v19, (volatile signed __int32 **)&P);
  v8 = (volatile signed __int32 *)P;
  InformationJobObject = v7;
  if ( v7 >= 0 )
  {
    InformationJobObject = NtQueryInformationJobObject(
                             *((HANDLE *)P + 92),
                             JobObjectExtendedLimitInformation,
                             JobInformation,
                             0x90u,
                             0LL);
    if ( InformationJobObject >= 0 )
    {
      InformationJobObject = 0;
      *a4 = v18;
    }
    else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 1uLL) )
    {
      v23 = 0;
      p_InformationJobObject = &InformationJobObject;
      v22 = v10;
      TlgCreateSz(&pDesc, "QueryJobExtendedLimitInfo");
      TlgWrite(v11, &unk_18003F443, v12, cData, (UINT32)cData, &pData);
    }
  }
  if ( v8 )
    RmpObjectRelease(v8);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return InformationJobObject | 0x10000000;
}
