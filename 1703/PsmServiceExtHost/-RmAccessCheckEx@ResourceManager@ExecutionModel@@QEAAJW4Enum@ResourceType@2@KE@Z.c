/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000C778
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000BD0C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     RmgrSrv_RmAccessCheck @ 0x18001B830 (RmgrSrv_RmAccessCheck.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180029480 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18002B924 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x180034B80 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018330 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180018D40 (-RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBAL.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(
        struct _RM_SERVICE_GLOBALS **a1,
        int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // r15
  struct _RM_OBJECT_HEADER *v6; // rdi
  int v9; // r14d
  struct ExecutionModel::ResourceSet *ProcessResourceSet; // rax
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  struct ExecutionModel::ResourceManager *v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  BOOL v29; // ebx
  HANDLE v30; // rax
  void *v31; // rsi
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_OBJECT_HEADER *v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+58h] [rbp-A8h]
  __int16 v38; // [rsp+5Ch] [rbp-A4h]
  _BYTE v39[560]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[560]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v42; // [rsp+4E0h] [rbp+3E0h]
  int v43; // [rsp+4E8h] [rbp+3E8h]
  int v44; // [rsp+4ECh] [rbp+3ECh]
  unsigned int *v45; // [rsp+4F0h] [rbp+3F0h]
  int v46; // [rsp+4F8h] [rbp+3F8h]
  int v47; // [rsp+4FCh] [rbp+3FCh]
  struct _RM_OBJECT_HEADER **v48; // [rsp+500h] [rbp+400h]
  int v49; // [rsp+508h] [rbp+408h]
  int v50; // [rsp+50Ch] [rbp+40Ch]

  v5 = a2;
  v6 = 0LL;
  v32 = -2147024891;
  v33 = 0LL;
  v9 = 1;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)v5 > 0x2F )
  {
    v32 = -2147024809;
    goto LABEL_11;
  }
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a1[26], a3);
  if ( ProcessResourceSet )
  {
    v29 = *((_DWORD *)ProcessResourceSet + v5 + 392) < 101;
  }
  else
  {
    v32 = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v39);
    if ( v32 >= 0 )
    {
      v11 = v40;
      v12 = v39;
      v13 = 4LL;
      do
      {
        v14 = v12[1];
        *v11 = *v12;
        v15 = v12[2];
        v11[1] = v14;
        v16 = v12[3];
        v11[2] = v15;
        v17 = v12[4];
        v11[3] = v16;
        v18 = v12[5];
        v11[4] = v17;
        v19 = v12[6];
        v11[5] = v18;
        v20 = v12[7];
        v12 += 8;
        v11[6] = v19;
        v11 += 8;
        *(v11 - 1) = v20;
        --v13;
      }
      while ( v13 );
      v21 = *v12;
      v22 = v12[1];
      v23 = *((_QWORD *)v12 + 4);
      *v11 = v21;
      v11[1] = v22;
      *((_QWORD *)v11 + 4) = v23;
      RmpActivityHostFindByTypeAndIdentifier(a1[26], 0LL, v40, &v33);
      v6 = v33;
      if ( v33 )
      {
        v35 = v5;
        v36 = 1LL;
        v37 = 101;
        v38 = 256;
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v24,
          (a4 != 0) + 2,
          1u,
          (struct ExecutionModel::_ResourceInfo *)&v35,
          v33);
        if ( v37 != 101 )
        {
LABEL_8:
          v32 = 0;
          goto LABEL_9;
        }
        goto LABEL_22;
      }
    }
    v9 = 0;
    v30 = OpenProcess(0x100000u, 0, a3);
    v31 = v30;
    if ( !v30 )
    {
LABEL_22:
      v32 = -2147024891;
      goto LABEL_9;
    }
    v29 = WaitForSingleObject(v30, 0) == 258;
    CloseHandle(v31);
  }
  if ( !v29 )
    goto LABEL_22;
  if ( v9 )
    goto LABEL_8;
  v32 = 1;
LABEL_9:
  if ( v6 )
    RmpObjectRelease(v6);
LABEL_11:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v42 = &v32;
    v45 = &v34;
    v48 = &v33;
    v43 = (int)v25;
    v34 = a3;
    v46 = (int)v25;
    LODWORD(v33) = v5;
    v49 = (int)v25;
    TlgWrite(v25, &unk_18003FC55, v26, v27, 5u, &pData);
  }
  return (unsigned int)v32;
}
