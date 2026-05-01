/*
 * XREFs of RmpTracingControlCallback @ 0x18001F6F0
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpObjectTableEnumerationBegin @ 0x180035278 (RmpObjectTableEnumerationBegin.c)
 *     RmpObjectTableEnumerationGetNext @ 0x1800352C0 (RmpObjectTableEnumerationGetNext.c)
 *     ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003599C (-LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 */

void __fastcall RmpTracingControlCallback(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 i; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  ExecutionModel::ResourceSet *Next; // rax
  volatile signed __int32 *v17; // rbx
  _QWORD *v18; // rdi
  _QWORD *j; // rbx
  ExecutionModel::ResourceSet *v20; // rcx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  const struct _TlgProvider_t *v23; // [rsp+38h] [rbp-C8h] BYREF
  struct ExecutionModel::ResourceSet *v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pwsz[268]; // [rsp+70h] [rbp-90h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+288h] [rbp+188h]
  char v28; // [rsp+290h] [rbp+190h] BYREF
  int v29; // [rsp+298h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v32; // [rsp+2D0h] [rbp+1D0h]
  __int64 v33; // [rsp+2D8h] [rbp+1D8h]
  char *v34; // [rsp+2E0h] [rbp+1E0h]
  __int64 v35; // [rsp+2E8h] [rbp+1E8h]
  int *v36; // [rsp+2F0h] [rbp+1F0h]
  __int64 v37; // [rsp+2F8h] [rbp+1F8h]
  char *v38; // [rsp+300h] [rbp+200h]
  __int64 v39; // [rsp+308h] [rbp+208h]
  volatile signed __int32 *v40; // [rsp+310h] [rbp+210h]
  __int64 v41; // [rsp+318h] [rbp+218h]
  const struct _TlgProvider_t **v42; // [rsp+320h] [rbp+220h]
  __int64 v43; // [rsp+328h] [rbp+228h]

  if ( a2 == 2 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v7 = *(_QWORD *)(a7 + 3344);
    RmpObjectTableEnumerationBegin(a7 + 16, v25);
    for ( i = RmpObjectTableEnumerationGetNext(v25); ; i = RmpObjectTableEnumerationGetNext(v25) )
    {
      v17 = (volatile signed __int32 *)i;
      if ( !i )
        break;
      RmpActivityHostGetTracingId(i, (__int64)pwsz);
      v12 = RmpActivityHostQueryCommit((__int64)v17, 0LL, &v23);
      v13 = v23;
      if ( v12 < 0 )
        v13 = 0LL;
      v23 = v13;
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v13, 9uLL) )
      {
        TlgCreateWsz(&pDesc, pwsz);
        v32 = &v21;
        v34 = &v28;
        v22 = v29;
        v36 = &v22;
        v38 = (char *)v17 + 666;
        v40 = v17 + 166;
        v42 = &v23;
        v21 = (int)hProvider;
        v33 = 4LL;
        v35 = 8LL;
        v37 = 4LL;
        v39 = 2LL;
        v41 = 2LL;
        v43 = 8LL;
        TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_18003FA66, v14, v15, 9u, &pData);
      }
      v24[1] = (struct ExecutionModel::ResourceSet *)3;
      v24[0] = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst((__int64)v17, 3, 0);
      while ( 1 )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext(v24);
        if ( !Next )
          break;
        ExecutionModel::ResourceSet::LogRundownEvent(Next);
      }
      RmpObjectRelease(v17);
    }
    RtlReleaseSRWLockShared(v25[0] + 16LL, v9, v10, v11);
    v18 = (_QWORD *)(*(_QWORD *)(v7 + 120) + 160LL);
    for ( j = (_QWORD *)*v18; j != v18; j = (_QWORD *)*j )
    {
      v20 = (ExecutionModel::ResourceSet *)j[2];
      if ( !*((_QWORD *)v20 + 175) )
        ExecutionModel::ResourceSet::LogRundownEvent(v20);
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
}
