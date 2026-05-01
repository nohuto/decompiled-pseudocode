/*
 * XREFs of ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003EF10
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     _TlgCreateSz @ 0x1800406BC (_TlgCreateSz.c)
 */

int __fastcall ExecutionModel::ResourceEnforcer::QueryProcessMaxMemoryUsage(
        ExecutionModel::ResourceEnforcer *this,
        int a2,
        unsigned __int64 *a3)
{
  int v5; // eax
  volatile signed __int32 *v6; // rbx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // r9d
  TraceLoggingHProvider v9; // rcx
  LPCGUID v10; // r8
  LPCGUID cData; // r9
  NTSTATUS InformationJobObject; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE JobInformation[136]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+C8h] [rbp-38h]
  WCHAR v17[280]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+300h] [rbp+200h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+320h] [rbp+220h]
  int v20; // [rsp+328h] [rbp+228h]
  int v21; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+330h] [rbp+230h] BYREF

  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v17, 0, 0x228uLL);
  *(_DWORD *)v17 = a2;
  v5 = RmpActivityHostFindByTypeAndIdentifier(1, v17, (volatile signed __int32 **)&P);
  v6 = (volatile signed __int32 *)P;
  InformationJobObject = v5;
  if ( v5 >= 0 )
  {
    InformationJobObject = NtQueryInformationJobObject(
                             *((HANDLE *)P + 89),
                             JobObjectExtendedLimitInformation,
                             JobInformation,
                             0x90u,
                             0LL);
    if ( InformationJobObject >= 0 )
    {
      InformationJobObject = 0;
      *a3 = v16;
    }
    else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v7, 1uLL) )
    {
      v21 = 0;
      p_InformationJobObject = &InformationJobObject;
      v20 = v8;
      TlgCreateSz(&pDesc, "QueryJobExtendedLimitInfo");
      TlgWrite(v9, &unk_180062768, v10, cData, (UINT32)cData, &pData);
    }
  }
  if ( v6 )
    RmpObjectRelease(v6);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return InformationJobObject | 0x10000000;
}
