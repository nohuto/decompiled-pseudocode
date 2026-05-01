/*
 * XREFs of RmpResourceSetTableFindEmSetById @ 0x180014060
 * Callers:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x180001864 (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180016F80 (-RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PE.c)
 *     ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800172E4 (-RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800181FC (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 *     ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x18002DE38 (-RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z.c)
 *     ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x18002DFAC (-RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(__int64 a1, __int64 a2, ExecutionModel::ResourceSet **a3)
{
  volatile signed __int32 *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r10
  ExecutionModel::ResourceSet *v14; // rcx
  void (*v15)(void); // rax
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-E8h] BYREF

  v6 = 0LL;
  RtlAcquireSRWLockShared(a1 + 16);
  v9 = 0LL;
  v10 = -1073741275;
  v11 = BYTE6(a2)
      + 37
      * (BYTE5(a2)
       + 37
       * (BYTE4(a2) + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))));
  v12 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v13 = v12 & (HIBYTE(a2) + 37 * v11);
LABEL_2:
  if ( v9 )
    goto LABEL_5;
  v8 = *(_DWORD *)(a1 + 4) >> 5;
  if ( (_DWORD)v8 )
  {
    v11 = BYTE6(v13)
        + 37
        * (BYTE5(v13)
         + 37
         * (BYTE4(v13)
          + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883LL))))));
    v7 = 37 * v11;
    v9 = *(_QWORD *)(a1 + 8) + 8LL * ((37 * (_DWORD)v11 + HIBYTE(v13)) & (unsigned int)(v8 - 1));
LABEL_5:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v13 == (v12 & *(_QWORD *)(v9 + 8)) )
      {
        if ( a2 != *(_QWORD *)(v9 + 24) )
          goto LABEL_2;
        v10 = 0;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 16)) < 1 )
        {
          memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
          pExceptionRecord.ExceptionCode = -1073741675;
          pExceptionRecord.ExceptionFlags = 1;
          RaiseFailFastException(&pExceptionRecord, 0LL, 0);
        }
        goto LABEL_10;
      }
    }
  }
  v9 = v13;
LABEL_10:
  RtlReleaseSRWLockShared(a1 + 16, v11, v7, v8);
  if ( v10 >= 0 )
  {
    v6 = (volatile signed __int32 *)v9;
    v14 = *(ExecutionModel::ResourceSet **)(v9 + 40);
    *a3 = v14;
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 8LL);
    if ( (char *)v15 == (char *)ExecutionModel::ResourceSet::AddRef )
      ExecutionModel::ResourceSet::AddRef(v14);
    else
      v15();
    v10 = 0;
  }
  if ( v6 )
    RmpObjectRelease(v6);
  return (unsigned int)v10;
}
