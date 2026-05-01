/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180034D40
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800348E0 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x180034BF8 (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 *     RmpObjectTableEnumerationBegin @ 0x180035278 (RmpObjectTableEnumerationBegin.c)
 *     RmpObjectTableEnumerationGetNext @ 0x1800352C0 (RmpObjectTableEnumerationGetNext.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  char *v7; // rbx
  const struct _TlgProvider_t *v8; // rcx
  BOOL IsGpuBusy; // esi
  struct ExecutionModel::ResourceSet *v10; // rax
  __int64 v11; // rdx
  struct _RM_ACTIVITY_HOST *Next; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  const struct _TlgProvider_t *v19; // rcx
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  struct ExecutionModel::ResourceSet *v23[2]; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-30h] BYREF

  if ( (unsigned int)dword_18004C030 > 5 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v4, &unk_18004237C, v5, v6, 2u, &pData);
  v7 = a2 + 104;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (a2[148] & 1) != 0 )
  {
    IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(a2 + 104));
    RmpObjectTableEnumerationBegin(a2 + 16, &pData);
    while ( 1 )
    {
      Next = (struct _RM_ACTIVITY_HOST *)RmpObjectTableEnumerationGetNext(&pData);
      if ( !Next )
        break;
      v23[1] = (struct ExecutionModel::ResourceSet *)2;
      v23[0] = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst((__int64)Next, 2, 0);
      while ( 1 )
      {
        v10 = RmpActivityHostEnumerateResourceSetGetNext(v23);
        if ( !v10 )
          break;
        if ( (*((_BYTE *)v10 + 1460) & 8) != 0 )
        {
          RmpActivityHostCheckAndUpdateGpuInterference(Next, IsGpuBusy);
          break;
        }
      }
      RmpObjectRelease((volatile signed __int32 *)Next);
    }
    RtlReleaseSRWLockShared(pData.Ptr + 16, v11, v13, v14);
  }
  v15 = *((_DWORD *)v7 + 11);
  if ( (v15 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v7, v7 + 8, 0LL, *((unsigned int *)v7 + 10));
  }
  else
  {
    *((_DWORD *)v7 + 11) = v15 & 0xFFFFFFFD;
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v8, 1uLL) )
      TlgWrite(v16, &unk_180042444, v17, v18, 2u, &pData);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004C030 > 5 )
  {
    if ( TlgKeywordOn(v19, 1uLL) )
      TlgWrite(v20, &unk_180042469, v21, v22, 2u, &pData);
  }
}
