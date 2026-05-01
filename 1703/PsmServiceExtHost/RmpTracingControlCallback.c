/*
 * XREFs of RmpTracingControlCallback @ 0x180020320
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180006D00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A1C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180033C58 (-LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 */

void __fastcall RmpTracingControlCallback(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 v7; // rdi
  struct _RM_ACTIVITY_HOST *i; // rax
  int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  ExecutionModel::ResourceSet *Next; // rax
  struct _RM_ACTIVITY_HOST *v14; // rbx
  _QWORD *v15; // rdi
  _QWORD *j; // rbx
  ExecutionModel::ResourceSet *v17; // rcx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pwsz[268]; // [rsp+70h] [rbp-90h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+288h] [rbp+188h]
  char v25; // [rsp+290h] [rbp+190h] BYREF
  int v26; // [rsp+298h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v29; // [rsp+2D0h] [rbp+1D0h]
  __int64 v30; // [rsp+2D8h] [rbp+1D8h]
  char *v31; // [rsp+2E0h] [rbp+1E0h]
  __int64 v32; // [rsp+2E8h] [rbp+1E8h]
  int *v33; // [rsp+2F0h] [rbp+1F0h]
  __int64 v34; // [rsp+2F8h] [rbp+1F8h]
  char *v35; // [rsp+300h] [rbp+200h]
  __int64 v36; // [rsp+308h] [rbp+208h]
  char *v37; // [rsp+310h] [rbp+210h]
  __int64 v38; // [rsp+318h] [rbp+218h]
  unsigned __int64 *v39; // [rsp+320h] [rbp+220h]
  __int64 v40; // [rsp+328h] [rbp+228h]

  if ( a2 == 2 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v7 = *(_QWORD *)(a7 + 1528);
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(a7 + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v22);
    for ( i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v22);
          ;
          i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v22) )
    {
      v14 = i;
      if ( !i )
        break;
      RmpActivityHostGetTracingId(i, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
      v9 = RmpActivityHostQueryCommit(v14, 0LL, 0LL, &v20);
      v10 = (const struct _TlgProvider_t *)v20;
      if ( v9 < 0 )
        v10 = 0LL;
      v20 = (unsigned __int64)v10;
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 9uLL) )
      {
        TlgCreateWsz(&pDesc, pwsz);
        v29 = &v18;
        v31 = &v25;
        v19 = v26;
        v33 = &v19;
        v35 = (char *)v14 + 666;
        v37 = (char *)v14 + 664;
        v39 = &v20;
        v18 = (int)hProvider;
        v30 = 4LL;
        v32 = 8LL;
        v34 = 4LL;
        v36 = 2LL;
        v38 = 2LL;
        v40 = 8LL;
        TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_18003FAF0, v11, v12, 9u, &pData);
      }
      v21[1] = 3LL;
      v21[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)v14, 3, 0);
      while ( 1 )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v21);
        if ( !Next )
          break;
        ExecutionModel::ResourceSet::LogRundownEvent(Next);
      }
      RmpObjectRelease(v14);
    }
    RtlReleaseSRWLockShared(v22[0] + 16LL);
    v15 = (_QWORD *)(*(_QWORD *)(v7 + 104) + 160LL);
    for ( j = (_QWORD *)*v15; j != v15; j = (_QWORD *)*j )
    {
      v17 = (ExecutionModel::ResourceSet *)j[2];
      if ( !*((_QWORD *)v17 + 174) )
        ExecutionModel::ResourceSet::LogRundownEvent(v17);
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
}
