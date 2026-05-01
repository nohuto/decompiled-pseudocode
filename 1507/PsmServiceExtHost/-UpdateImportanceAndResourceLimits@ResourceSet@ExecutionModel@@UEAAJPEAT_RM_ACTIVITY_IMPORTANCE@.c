/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800102A0
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180014AD0 (-UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTA.c)
 * Callees:
 *     ?RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x180004640 (-RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionMo.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostOnImportanceChange @ 0x18000D0E0 (RmpActivityHostOnImportanceChange.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSet *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  bool v8; // zf
  __int64 v9; // rsi
  unsigned int v10; // ebx
  struct ExecutionModel::ResourceSet *Next; // rax
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  int v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h] BYREF
  char *v19; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20[4]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  char **v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  int *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  int *v28; // [rsp+A0h] [rbp+27h]
  int v29; // [rsp+A8h] [rbp+2Fh]
  int v30; // [rsp+ACh] [rbp+33h]

  if ( a3 )
    return 2147500033LL;
  if ( a2 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v19 = (char *)this - 1368;
      v22 = &v19;
      v17 = *((_DWORD *)this + 15);
      v25 = &v17;
      v18 = *(_DWORD *)a2;
      v28 = &v18;
      v23 = 8;
      v26 = 4;
      v29 = 4;
      TlgWrite(v5, &unk_18005C7E0, v6, v7, 5u, &pData);
    }
    v8 = *((_BYTE *)this - 1356) == 0;
    *((_DWORD *)this + 15) = *(_DWORD *)a2;
    if ( !v8 )
    {
      v9 = *((_QWORD *)this + 4);
      v17 = 1;
      v10 = *(_DWORD *)(v9 + 904);
      RmpActivityHostEnumerateResourceSetBegin(v9, 1, v20);
      while ( 1 )
      {
        Next = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v20);
        if ( !Next )
          break;
        RmpActivityHostComputeImportanceCallback((struct _RM_ACTIVITY_HOST *)v9, Next, &v17);
      }
      *(_DWORD *)(*((_QWORD *)this + 4) + 904LL) = v17;
      RmpActivityHostOnImportanceChange(*((struct _RM_ACTIVITY_HOST **)this + 4), v10, v12, v13);
    }
    v14 = *((_QWORD *)this - 168);
    v15 = *(_DWORD *)(v14 + 264);
    if ( (v15 & 1) == 0 )
    {
      *(_DWORD *)(v14 + 264) = v15 | 1;
      SubmitThreadpoolWork(*(PTP_WORK *)(v14 + 248));
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  return 0LL;
}
