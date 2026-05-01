/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180046590
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpObjectTableEnumerationGetNext @ 0x18001EF30 (RmpObjectTableEnumerationGetNext.c)
 *     RmpObjectTableEnumerationBegin @ 0x18001F564 (RmpObjectTableEnumerationBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180046134 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18004644C (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  char *v6; // rbx
  const struct _TlgProvider_t *v7; // rcx
  BOOL IsGpuBusy; // esi
  __int64 v9; // rax
  __int64 Next; // rax
  struct _RM_ACTIVITY_HOST *v11; // rdi
  int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  _QWORD v20[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21[4]; // [rsp+50h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180071060 > 5 && TlgKeywordOn(Instance, 1uLL) )
    TlgWrite(v3, &unk_180064A3B, v4, v5, 2u, &pData);
  v6 = (char *)RmSvcGlobals;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (v6[164] & 1) != 0 )
  {
    IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(v6 + 112));
    RmpObjectTableEnumerationBegin((__int64)RmSvcGlobals + 24, v20);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext(v20);
      v11 = (struct _RM_ACTIVITY_HOST *)Next;
      if ( !Next )
        break;
      RmpActivityHostEnumerateResourceSetBegin(Next, 1, v21);
      while ( 1 )
      {
        v9 = RmpActivityHostEnumerateResourceSetGetNext(v21);
        if ( !v9 )
          break;
        if ( (*(_DWORD *)(v9 + 1764) & 0x80000) != 0 )
        {
          RmpActivityHostCheckAndUpdateGpuInterference(v11, IsGpuBusy);
          break;
        }
      }
      RmpObjectRelease((volatile signed __int32 *)v11);
    }
    RtlReleaseSRWLockShared(v20[0] + 16LL);
  }
  v12 = *((_DWORD *)v6 + 41);
  if ( (v12 & 1) != 0 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)v6 + 15), (PFILETIME)v6 + 16, 0, *((_DWORD *)v6 + 40));
  }
  else
  {
    *((_DWORD *)v6 + 41) = v12 & 0xFFFFFFFD;
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v7, 1uLL) )
      TlgWrite(v13, &unk_1800648CF, v14, v15, 2u, &pData);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_180071060 > 5 )
  {
    if ( TlgKeywordOn(v16, 1uLL) )
      TlgWrite(v17, &unk_180064A69, v18, v19, 2u, &pData);
  }
}
