/*
 * XREFs of ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180001C30 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x180002904 (RmpActivityHostFindProcessResourceSet.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x180002984 (RmpActivityHostFindPsmResourceSets.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000F8A0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180036330 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18003D120 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18003D370 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 *     ?QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003EF10 (-QueryProcessMaxMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180043840 (-GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z @ 0x180043B00 (-GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180044678 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 *     RmpCoreApiRegisterActivityHostByProcessHandle @ 0x180046B78 (RmpCoreApiRegisterActivityHostByProcessHandle.c)
 * Callees:
 *     memcmp_0 @ 0x18002BC66 (memcmp_0.c)
 */

__int64 __fastcall RmpActivityHostFindByTypeAndIdentifier(int a1, WCHAR *a2, volatile signed __int32 **a3)
{
  __int64 v3; // r14
  __int64 v7; // rdi
  WCHAR *v8; // rsi
  WCHAR *i; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // r10
  int v14; // r9d
  volatile signed __int32 *v15; // rbx
  const void *v16; // rdx
  WCHAR *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  WCHAR v21; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  v7 = 314159LL;
  if ( a1 )
  {
    v18 = a2;
    v19 = 69LL;
    do
    {
      v20 = *(unsigned __int8 *)v18;
      v18 += 4;
      v7 = *((unsigned __int8 *)v18 - 1)
         + 37
         * (*((unsigned __int8 *)v18 - 2)
          + 37
          * (*((unsigned __int8 *)v18 - 3)
           + 37
           * (*((unsigned __int8 *)v18 - 4)
            + 37
            * (*((unsigned __int8 *)v18 - 5)
             + 37 * (*((unsigned __int8 *)v18 - 6) + 37 * (*((unsigned __int8 *)v18 - 7) + 37 * (v20 + 37 * v7)))))));
      --v19;
    }
    while ( v19 );
  }
  else
  {
    v8 = a2 + 232;
    for ( i = a2; i < v8; v7 = HIBYTE(v21) + 37 * ((unsigned __int8)v21 + 37 * v7) )
      v21 = RtlUpcaseUnicodeChar(*i++);
    v10 = 11LL;
    do
    {
      v11 = *(unsigned __int8 *)v8;
      v8 += 4;
      v7 = *((unsigned __int8 *)v8 - 1)
         + 37
         * (*((unsigned __int8 *)v8 - 2)
          + 37
          * (*((unsigned __int8 *)v8 - 3)
           + 37
           * (*((unsigned __int8 *)v8 - 4)
            + 37
            * (*((unsigned __int8 *)v8 - 5)
             + 37 * (*((unsigned __int8 *)v8 - 6) + 37 * (*((unsigned __int8 *)v8 - 7) + 37 * (v11 + 37 * v7)))))));
      --v10;
    }
    while ( v10 );
  }
  v12 = -1073741275;
  RtlAcquireSRWLockShared((char *)RmSvcGlobals + 40);
  while ( 1 )
  {
    v13 = v7 & (-1LL << (*((_BYTE *)RmSvcGlobals + 1756) & 0x1F));
    if ( v3 )
      goto LABEL_10;
    v14 = *((_DWORD *)RmSvcGlobals + 439) >> 5;
    if ( !v14 )
      break;
    v3 = *((_QWORD *)RmSvcGlobals + 220)
       + 8LL
       * ((37
         * (BYTE6(v13)
          + 37
          * (BYTE5(v13)
           + 37
           * (BYTE4(v13)
            + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
         + HIBYTE(v13)) & (unsigned int)(v14 - 1));
    do
    {
LABEL_10:
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        goto LABEL_17;
    }
    while ( v13 != ((-1LL << (*((_BYTE *)RmSvcGlobals + 1756) & 0x1F)) & *(_QWORD *)(v3 + 8)) );
    v15 = (volatile signed __int32 *)(v3 - 856);
    if ( *(_DWORD *)(v3 - 856 + 40) != a1 )
      continue;
    v16 = (const void *)(v15 + 12);
    if ( a1 )
    {
      if ( !memcmp_0(a2, v16, 0x228uLL) )
        goto LABEL_16;
    }
    else if ( !_wcsicmp(a2, (const wchar_t *)v16) && !memcmp_0(a2 + 232, (const void *)(v15 + 128), 0x58uLL) )
    {
LABEL_16:
      v12 = 0;
      _InterlockedIncrement(v15 + 4);
      *a3 = v15;
      break;
    }
  }
LABEL_17:
  RtlReleaseSRWLockShared((char *)RmSvcGlobals + 40);
  return v12;
}
