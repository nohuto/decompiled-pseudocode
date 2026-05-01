/*
 * XREFs of ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000DD1C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000E498 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000ED40 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000F498 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180017A38 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_SERVICE_GLOBALS@@KPEA_K@Z @ 0x18002A250 (-QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_SERVICE_GLOBALS@@KPEA_.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18002CB60 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     RmpCoreApiRegisterActivityHostByProcessHandle @ 0x18002E348 (RmpCoreApiRegisterActivityHostByProcessHandle.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18002F144 (RmpActivityHostFindPsmResourceSets.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x1800365D0 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180020A2A (memcmp_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostFindByTypeAndIdentifier(
        __int64 a1,
        int a2,
        unsigned __int8 *a3,
        volatile signed __int32 **a4)
{
  __int64 v4; // r15
  unsigned __int8 *v5; // r13
  __int64 v7; // r10
  __int64 v8; // rdi
  WCHAR *v9; // rsi
  WCHAR *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  volatile signed __int32 *v19; // rbx
  const void *v20; // rdx
  __int64 v22; // r9
  __int64 v23; // rax
  WCHAR v24; // [rsp+20h] [rbp-108h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-E8h] BYREF

  v4 = 0LL;
  v5 = a3;
  v7 = a1;
  v8 = 314159LL;
  if ( a2 )
  {
    v22 = 69LL;
    do
    {
      v23 = *a3;
      a3 += 8;
      v8 = *(a3 - 1)
         + 37
         * (*(a3 - 2)
          + 37
          * (*(a3 - 3) + 37
                       * (*(a3 - 4) + 37 * (*(a3 - 5) + 37 * (*(a3 - 6) + 37 * (*(a3 - 7) + 37 * (v23 + 37 * v8)))))));
      --v22;
    }
    while ( v22 );
  }
  else
  {
    v9 = (WCHAR *)(a3 + 464);
    v10 = (WCHAR *)a3;
    if ( a3 < a3 + 464 )
    {
      do
      {
        v24 = RtlUpcaseUnicodeChar(*v10++);
        v8 = HIBYTE(v24) + 37 * ((unsigned __int8)v24 + 37 * v8);
      }
      while ( v10 < v9 );
      v7 = a1;
    }
    v11 = 11LL;
    do
    {
      v12 = *(unsigned __int8 *)v9;
      v9 += 4;
      v8 = *((unsigned __int8 *)v9 - 1)
         + 37
         * (*((unsigned __int8 *)v9 - 2)
          + 37
          * (*((unsigned __int8 *)v9 - 3)
           + 37
           * (*((unsigned __int8 *)v9 - 4)
            + 37
            * (*((unsigned __int8 *)v9 - 5)
             + 37 * (*((unsigned __int8 *)v9 - 6) + 37 * (*((unsigned __int8 *)v9 - 7) + 37 * (v12 + 37 * v8)))))));
      --v11;
    }
    while ( v11 );
  }
  v13 = v7 + 32;
  v14 = -1073741275;
  RtlAcquireSRWLockShared(v7 + 32);
LABEL_8:
  v17 = *(unsigned int *)(a1 + 3004);
  v18 = v8 & (-1LL << (*(_BYTE *)(a1 + 3004) & 0x1F));
  if ( v4 )
    goto LABEL_11;
  v17 = (unsigned int)v17 >> 5;
  if ( (_DWORD)v17 )
  {
    v15 = BYTE6(v18)
        + 37
        * (BYTE5(v18)
         + 37
         * (BYTE4(v18)
          + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883LL))))));
    v16 = 37 * v15;
    v4 = *(_QWORD *)(a1 + 3008) + 8LL * ((37 * (_DWORD)v15 + HIBYTE(v18)) & (unsigned int)(v17 - 1));
LABEL_11:
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v18 == ((-1LL << (*(_BYTE *)(a1 + 3004) & 0x1F)) & *(_QWORD *)(v4 + 8)) )
      {
        v19 = (volatile signed __int32 *)(v4 - 1008);
        if ( *(_DWORD *)(v4 - 1008 + 48) != a2 )
          goto LABEL_8;
        v20 = (const void *)(v19 + 14);
        if ( a2 )
        {
          if ( memcmp_0(v5, v20, 0x228uLL) )
            goto LABEL_8;
        }
        else if ( _wcsicmp((const wchar_t *)v5, (const wchar_t *)v20)
               || memcmp_0(v5 + 464, (const void *)(v19 + 130), 0x58uLL) )
        {
          goto LABEL_8;
        }
        v14 = 0;
        if ( _InterlockedIncrement(v19 + 4) < 1 )
        {
          memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
          pExceptionRecord.ExceptionCode = -1073741675;
          pExceptionRecord.ExceptionFlags = 1;
          RaiseFailFastException(&pExceptionRecord, 0LL, 0);
        }
        *a4 = v19;
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(v13, v15, v16, v17);
  return v14;
}
