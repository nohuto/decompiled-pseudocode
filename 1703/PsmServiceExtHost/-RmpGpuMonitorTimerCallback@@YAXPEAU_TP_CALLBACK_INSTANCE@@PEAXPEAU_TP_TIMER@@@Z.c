/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A1C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800354A8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x1800359AC (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
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
  struct _RM_ACTIVITY_HOST *Next; // rdi
  int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  _QWORD v20[2]; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-30h] BYREF

  if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v4, &unk_180043733, v5, v6, 2u, &pData);
  v7 = a2 + 88;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (a2[132] & 1) != 0 )
  {
    IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(a2 + 88));
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(a2 + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
      if ( !Next )
        break;
      v20[1] = 2LL;
      v20[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)Next, 2, 0);
      while ( 1 )
      {
        v10 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v20);
        if ( !v10 )
          break;
        if ( (*((_BYTE *)v10 + 1452) & 8) != 0 )
        {
          RmpActivityHostCheckAndUpdateGpuInterference(Next, IsGpuBusy);
          break;
        }
      }
      RmpObjectRelease(Next);
    }
    RtlReleaseSRWLockShared(pData.Ptr + 16);
  }
  v12 = *((_DWORD *)v7 + 11);
  if ( (v12 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v7, v7 + 8, 0LL, *((unsigned int *)v7 + 10));
  }
  else
  {
    *((_DWORD *)v7 + 11) = v12 & 0xFFFFFFFD;
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 1uLL) )
      TlgWrite(v13, &unk_180043761, v14, v15, 2u, &pData);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 5 )
  {
    if ( TlgKeywordOn(v16, 1uLL) )
      TlgWrite(v17, &unk_180043786, v18, v19, 2u, &pData);
  }
}
