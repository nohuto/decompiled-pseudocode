/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010790
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000F790 (-Apply@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpActivityHostFinalCleanup @ 0x180009EAC (RmpActivityHostFinalCleanup.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CE0 (-ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostCheckQueueWork @ 0x18003B7DC (RmpActivityHostCheckQueueWork.c)
 *     RmpActivityHostGetHostId @ 0x18003BCD0 (RmpActivityHostGetHostId.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceManager **this, unsigned int a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned int v5; // edi
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  int v8; // edi
  __int64 HostId; // rax
  TraceLoggingHProvider v10; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  PVOID v13; // rbx
  int v15; // [rsp+30h] [rbp-29h] BYREF
  PVOID P; // [rsp+38h] [rbp-21h] BYREF
  __int64 v17; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+7Ch] [rbp+23h]
  int *v22; // [rsp+80h] [rbp+27h]
  int v23; // [rsp+88h] [rbp+2Fh]
  int v24; // [rsp+8Ch] [rbp+33h]

  v3 = 0LL;
  P = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a2 || *(this - 167) != *(this - 166) )
  {
    v6 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutFreezeOrOptimize(
           *(this - 168),
           (struct ExecutionModel::ResourceSet *)(this - 171),
           a2,
           (struct _RM_ACTIVITY_HOST **)&P);
    v3 = (volatile signed __int32 *)P;
    v5 = v6;
    if ( v6 >= 0 && P )
    {
      while ( 1 )
      {
        v8 = RmpActivityHostCheckQueueWork(v3);
        if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v7, 1uLL) )
        {
          HostId = RmpActivityHostGetHostId(v3);
          v21 = 0;
          v24 = 0;
          v17 = HostId;
          v19 = &v17;
          v22 = &v15;
          v20 = 8;
          v15 = v8;
          v23 = 4;
          TlgWrite(v10, &unk_18005ADB0, v11, v12, 4u, &pData);
        }
        if ( !v8 )
          break;
        RtlSleepConditionVariableCS(v3 + 188, &RmpGlobalLock, 0LL);
      }
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147418113;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v3 && _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) == 1 )
  {
    v13 = P;
    if ( *((_DWORD *)P + 8) == 1 )
      RmpActivityHostFinalCleanup((__int64)P);
    RmpFreeHeap(v13);
  }
  return v5;
}
