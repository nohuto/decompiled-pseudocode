/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000DD1C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     RmgrSrv_RmAccessCheck @ 0x180019B50 (RmgrSrv_RmAccessCheck.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180028690 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18002D09C (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x1800367E0 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x1800039BC (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000E470 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(
        ExecutionModel::ResourceManager *a1,
        int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // r12
  volatile signed __int32 *v6; // rdi
  int v9; // r15d
  __int64 ProcessResourceSet; // rax
  int (__fastcall *v11)(ExecutionModel::ResourceManager *, unsigned int, struct _RM_PSM_HOST_INFO *); // rax
  int PSMInfo; // eax
  __int64 v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  struct ExecutionModel::ResourceManager *v26; // rcx
  unsigned int v27; // edx
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  HANDLE v32; // rsi
  unsigned int v33; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h]
  __int16 v39; // [rsp+5Ch] [rbp-A4h]
  _BYTE v40[560]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v41[560]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4C0h] [rbp+3C0h] BYREF
  unsigned int *v43; // [rsp+4E0h] [rbp+3E0h]
  int v44; // [rsp+4E8h] [rbp+3E8h]
  int v45; // [rsp+4ECh] [rbp+3ECh]
  unsigned int *v46; // [rsp+4F0h] [rbp+3F0h]
  int v47; // [rsp+4F8h] [rbp+3F8h]
  int v48; // [rsp+4FCh] [rbp+3FCh]
  PVOID *p_P; // [rsp+500h] [rbp+400h]
  int v50; // [rsp+508h] [rbp+408h]
  int v51; // [rsp+50Ch] [rbp+40Ch]

  v5 = a2;
  v6 = 0LL;
  v33 = -2147024891;
  P = 0LL;
  v9 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)v5 > 0x2F )
  {
    v33 = -2147024809;
    goto LABEL_15;
  }
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(*((_QWORD *)a1 + 28), a3);
  if ( ProcessResourceSet )
  {
    if ( *(int *)(ProcessResourceSet + 4 * v5 + 1576) < 101 )
    {
LABEL_12:
      v33 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = *(int (__fastcall **)(ExecutionModel::ResourceManager *, unsigned int, struct _RM_PSM_HOST_INFO *))(*(_QWORD *)a1 + 80LL);
    if ( v11 == ExecutionModel::ResourceManager::GetPSMInfo )
      PSMInfo = ExecutionModel::ResourceManager::GetPSMInfo(a1, a3, (struct _RM_PSM_HOST_INFO *)v40);
    else
      PSMInfo = v11(a1, a3, (struct _RM_PSM_HOST_INFO *)v40);
    v33 = PSMInfo;
    if ( PSMInfo < 0 )
      goto LABEL_20;
    v13 = 4LL;
    v14 = v41;
    v15 = v40;
    do
    {
      v16 = v15[1];
      *v14 = *v15;
      v17 = v15[2];
      v14[1] = v16;
      v18 = v15[3];
      v14[2] = v17;
      v19 = v15[4];
      v14[3] = v18;
      v20 = v15[5];
      v14[4] = v19;
      v21 = v15[6];
      v14[5] = v20;
      v22 = v15[7];
      v15 += 8;
      v14[6] = v21;
      v14 += 8;
      *(v14 - 1) = v22;
      --v13;
    }
    while ( v13 );
    v23 = *v15;
    v24 = v15[1];
    v25 = *((_QWORD *)v15 + 4);
    *v14 = v23;
    v14[1] = v24;
    *((_QWORD *)v14 + 4) = v25;
    RmpActivityHostFindByTypeAndIdentifier(*((_QWORD *)a1 + 28), 0LL, v41, &P);
    v6 = (volatile signed __int32 *)P;
    if ( P )
    {
      v36 = v5;
      v37 = 1LL;
      v38 = 101;
      v39 = 256;
      v27 = 2;
      if ( a4 )
        v27 = 3;
      ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        v26,
        v27,
        1u,
        (struct ExecutionModel::_ResourceInfo *)&v36,
        (struct _RM_ACTIVITY_HOST *)P);
      if ( v38 != 101 )
        goto LABEL_12;
    }
    else
    {
LABEL_20:
      P = 0LL;
      v32 = OpenProcess(0x100000u, 0, a3);
      if ( v32 )
      {
        tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&P);
        P = v32;
        if ( WaitForSingleObject(v32, 0) == 258 )
          v9 = 1;
      }
      tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&P);
      v33 = 1;
      if ( v9 )
        goto LABEL_13;
    }
  }
  v33 = -2147024891;
LABEL_13:
  if ( v6 )
    RmpObjectRelease(v6);
LABEL_15:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v43 = &v33;
    v46 = &v35;
    p_P = &P;
    v44 = (int)v28;
    v35 = a3;
    v47 = (int)v28;
    LODWORD(P) = v5;
    v50 = (int)v28;
    TlgWrite(v28, &unk_18003FB31, v29, v30, 5u, &pData);
  }
  return v33;
}
